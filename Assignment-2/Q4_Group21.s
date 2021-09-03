###########################################
#
#   >> Assignment 2 : MIPS Assignment 1
#   >> Question 4 : MIPS-32 ASM Program for checking if input positive number is perfect (equal to sum of its proper divisors )
#   >> Group No : 21
#   >> Authors : Debanjan Saha     (19CS30014)
#                Pritkumar Godhani (19CS10048)   
#   >> Work Left : Put comments in the code.
#
#
###########################################

.globl  main
###### Data Section Starts ######
.data
prompt:   
    .asciiz "Enter a positive integer: "
input_err:
    .asciiz "Invalid input. Please enter positive number only."
perfect:
    .asciiz "Entered number is A PERFECT number."
not_perfect:
    .asciiz "Entered number is NOT A PERFECT number."
newline:
    .asciiz "\n"

###### Code Section Starts ######
.text                
main:          # main block
    li      $v0, 4  
    la      $a0, prompt
    syscall                             # prompt for the first integer

    li      $v0, 5
    syscall                             # read a, the first integer
    move    $s0, $v0                    # copy a into s0

    li      $v0, 4  
    la      $a0, newline
    syscall 

    ble    $s0, $zero, error

    add     $s1, $zero, $zero
    addi    $t0, $zero, 1

for:
    bge     $t0, $s0, check

    move    $t1, $s0
    move    $t2, $t0

    div     $t1, $t2
    mfhi    $t1

    move    $t2, $t0

    addi    $t0, $t0, 1

    bne     $t1, $zero, for

    add     $s1, $s1, $t2
    j       for

check:
    beq     $s0, $s1, perfect_num

    li      $v0, 4
    la      $a0, not_perfect
    syscall

    li      $v0, 4  
    la      $a0, newline
    syscall

    j       exit

error:
    li      $v0, 4
    la      $a0, input_err
    syscall

    li      $v0, 4  
    la      $a0, newline
    syscall

    j       exit

perfect_num:
    li      $v0, 4
    la      $a0, perfect
    syscall

    li      $v0, 4  
    la      $a0, newline
    syscall

exit:
    li      $v0, 10
    syscall