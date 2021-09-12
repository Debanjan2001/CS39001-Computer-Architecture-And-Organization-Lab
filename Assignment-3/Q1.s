#############################################
#
#   >> Assignment 3 : MIPS Assignment 1
#   >> Question 4 : MIPS-32 ASM Program for checking if input positive number is perfect (equal to sum of its proper divisors )
#   >> Group No : 21
#   >> Authors : Debanjan Saha     (19CS30014)
#                Pritkumar Godhani (19CS10048)   
#
#
#############################################

.globl main
###### Data Section Starts ######
.data
prompt1:
    .asciiz "Enter the first number: "
prompt2:
    .asciiz "Enter the second number: "
result:
    .asciiz "The product of the two numbers is: "
newline:
    .asciiz "\n"
input_err:
    .asciiz "Invalid input. Please enter numbers from -32768 to +32767 only."

###### Code Section Starts ######
.text
main:       # main block
    li      $v0, 4  
    la      $a0, prompt1
    syscall                             # prompt for the first input integer

    li      $v0, 5
    syscall                             # read a, the first integer
    move    $s0, $v0                    # copy a into s0

    li      $v0, 4                      
    la      $a0, newline
    syscall                             # print newline

    move    $t0, $s0
    addi    $t1, $zero, 32767
    addi    $t2, $zero, -32768
    blt     $t0, $t2, error             # sanity check for 16bit numbers
    bgt     $t0, $t1, error

    li      $v0, 4  
    la      $a0, prompt2
    syscall                             # prompt for the second input integer

    li      $v0, 5
    syscall                             # read b, the second integer
    move    $s1, $v0                    # copy b into s1

    li      $v0, 4                      
    la      $a0, newline
    syscall                             # print newline

    move    $t0, $s1
    addi    $t1, $zero, 32767
    addi    $t2, $zero, -32768
    blt     $t0, $t2, error             # sanity check for 16bit numbers
    bgt     $t0, $t1, error
    
    move    $a0, $s0
    move    $a1, $s1
    jal     multiply_booth

    move    $s2, $v0
    li      $v0, 4  
    la      $a0, result
    syscall                             # print product

    li      $v0, 1
    move    $a0, $s2
    syscall

    li      $v0, 4                      
    la      $a0, newline
    syscall  

exit:
    li      $v0, 10
    syscall

error:
    li      $v0, 4  
    la      $a0, input_err
    syscall                             # prompt for the first input integer

    li      $v0, 4                      
    la      $a0, newline                
    syscall                             # newline

    j       exit

multiply_booth:
    move    $t0, $a0
    move    $t1, $a1

    sll     $t0, $t0, 16                # t0 = (A:0x0000). Higher 16bit of t0 holds multiplicand

    sll     $t1, $t1, 16                # t1 is a 32-bit concatenation of A and Q, higher 16bit (0x0000) represents A and lower 16bit represents multiplier
    srl     $t1, $t1, 16

    add     $t2, $zero, $zero           # Qn+1 extra bit
    addi    $t3, $zero, 16              # Count

loop:
    andi    $t4, $t1, 1
    beq     $t2, $t4, shift             # if Q0 == Qn+1 that is configuration is 11 or 00 just skip straight to shift
    
    beq     $t2, $zero, subtract        # if Q0, Qn+1 = 1, 0 then subtract multiplicand from A

    add     $t1, $t1, $t0               # otherwise Q0, Qn+1 = 0, 1 then add multiplicand to A
    j		shift                       # jump to shift 

subtract:
    sub     $t1, $t1, $t0               # subtract multiplier from A

shift:  
    and     $t2, $t4, $t4               # the last bit of t1(A:Q) is put into t4(Qn+1)
    sra     $t1, $t1, 1                 # arithmetic shift t1 to the right
    addi    $t3, $t3, -1                # Count = Count - 1
    bgt     $t3, $zero, loop            # Count > 0, loop again

    add     $v0, $t1, $zero             # store result into v0 register
    jr      $ra                         # return


