#############################################
#
#   >> Assignment 3 : MIPS Assignment 1
#   >> Question 1 : MIPS-32 ASM Program for Booth Multiplication Procedure for Two 16-Bit 2's Complement Input Numbers
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
    addi    $t1, $zero, 32767           # upper bound
    addi    $t2, $zero, -32767          # lower bound is not -32768 because while doing -M step it will overflow
    blt     $t0, $t2, error             
    bgt     $t0, $t1, error             # sanity check for 16bit number a

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
    addi    $t1, $zero, 32767           # upper bound
    addi    $t2, $zero, -32767          # lower bound is not -32768 because while doing -M step it will overflow
    blt     $t0, $t2, error             
    bgt     $t0, $t1, error             # sanity check for 16bit number b
    

    move    $a0, $s0                    # put a in $a0,  first argument
    move    $a1, $s1                    # put b in $a1, second argument    
    jal     multiply_booth              # call multiply_booth

    move    $s2, $v0                    # copy the return value in $v0 to $s2
    li      $v0, 4  
    la      $a0, result
    syscall                             # print product statement

    li      $v0, 1
    move    $a0, $s2                
    syscall                             # print the actual product

    li      $v0, 4                      
    la      $a0, newline
    syscall                             # print newline

exit:       # exit block
    li      $v0, 10
    syscall                             # exit the program    

error:      # input-block block
    li      $v0, 4  
    la      $a0, input_err
    syscall                             # print error message

    li      $v0, 4                      
    la      $a0, newline                
    syscall                             # print newline

    j       exit                        # exit the program

########################
##
##  multiply_booth ( 16-Bit Integer M, 16-Bit Integer Q ) : return 32-Bit Integer Product of A and B
##  {    
##      let M be the multiplicand, Q be the multiplier
##      
##      Let $t1 be a 32 Bit concatenation of A and Q represented as A:Q
##      Let $t2 be the Q[-1] extra bit at the end of Q, initialized as 0
## 
##       for count from 1 to 16 :  {
##          if(Q0 == 1 && Q[-1] == 0) 
##              A:Q = A:Q - M:0x0000                // M:0x0000 denotes that M is subtracted from A of A:Q and 0x0000 is subtracted from Q part (A = A-M, Q = Q-0)
##          else if(Q0 == 0 && Q[-1] == 1) 
##              A:Q = A:Q + M:0x0000                // M:0x0000 denotes that M is added to A of A:Q and 0x0000 is added to Q part (A = A+M, Q = Q+0)
##          
##          right arithmetic shift >> [A:Q:Q[-1]]       // where : denotes concatenation
##      }
##      
##      return A:Q
##  }
#########################
multiply_booth: 
    move    $t0, $a0
    move    $t1, $a1

    sll     $t1, $t1, 16                # t1 is a 32-bit concatenation of A and Q, higher 16bit (0x0000) represents A and lower 16bit represents multiplier
    srl     $t1, $t1, 16

    sll     $t0, $t0, 16                # t0 = (M:0x0000). Higher 16bit of t0 holds multiplicand. This is because when we want to add M to A we can add/subtract t0 to t1 which will update the higher 16-bits only.

    add     $t2, $zero, $zero           # Q[-1] extra bit
    addi    $t3, $zero, 16              # Count

loop:
    andi    $t4, $t1, 1                 # extract the lowest bit of Q (lower 16-Bit of A:Q in register t1) in t4(Q0)
    beq     $t2, $t4, shift             # if Q0 == Q[-1] that is configuration is 11 or 00 just skip straight to shift
    
    beq     $t2, $zero, subtract        # if Q0, Q[-1] = 1, 0 then subtract multiplicand M from A

    add     $t1, $t1, $t0               # otherwise Q0, Q[-1] = 0, 1 then add multiplicand M to A
    j		shift                       # jump to shift 

subtract:
    sub     $t1, $t1, $t0               # subtract multiplier from A (higher 16 bits of A:Q)

shift:  
    and     $t2, $t4, $t4               # Q0(in t4), the last bit of Q(lower 16 bits of A:Q) is put into t2(Q[-1])
    sra     $t1, $t1, 1                 # arithmetic shift A:Q to the right by 1 position, together this and the above command achieves the arithmetic right shift of A:Q:Q[-1]
    addi    $t3, $t3, -1                # Count = Count - 1
    bgt     $t3, $zero, loop            # if Count > 0, jump to loop (next iteration)

    add     $v0, $t1, $zero             # store result into v0 register
    jr      $ra                         # return to the caller
#########################################

