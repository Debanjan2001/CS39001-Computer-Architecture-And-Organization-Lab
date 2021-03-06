# #########################################
#
#   >> Assignment 2 : MIPS Assignment 1
#   >> Question 3 : MIPS-32 ASM Program for Primality Test of a number ,n >= 10
#   >> Group No : 21
#   >> Authors : Pritkumar Godhani (19CS10048) 
#                Debanjan Saha     (19CS30014)  
#   >> Work Left: Comments and Maybe Optimisation to sqrt(n) ??
# #########################################

    .globl  main

    .data

# Program Output Text Constants
prompt:
    .asciiz "Please enter a positive integer greater than equals to 10: "
input_error:
    .asciiz "You have provided an invalid input integer. Please check again !"
prime_string:
    .asciiz "Given number is PRIME\n"
composite_string:
    .asciiz "Given number is COMPOSITE\n"
newline:
    .asciiz "\n"

    .text

# main program
#
# program variables
#   n:  $s0
#   i:  $s1
#  10:  $t0
#  remainder (n%i) :    $t0

main:

    li      $v0, 4          # Issue Prompt
    la      $a0, prompt 
    syscall

    li      $v0, 5          # Get an integer n from the user
    syscall
    move    $s0 $v0

    li      $v0, 4          # print newline
    la      $a0, newline
    syscall 

    li      $t0, 10         # Store the integer Constant 10
    blt     $s0, $t0, error 
    li      $s1, 2          #i = 2
    j       primality_test_loop


primality_test_loop: 
    bge     $s1, $s0, prime
    div     $s0, $s1
    mfhi    $t0
    beq     $t0, $zero, composite
    addi    $s1, $s1, 1
    j		primality_test_loop

prime:
    li      $v0, 4
    la      $a0, prime_string
    syscall

    b		exit			# branch to exit

composite:

    li      $v0, 4
    la      $a0, composite_string
    syscall

    b		exit			# branch to exit

error:

    li      $v0, 4
    la      $a0, input_error
    syscall

    li      $v0, 4          # print newline
    la      $a0, newline
    syscall 

    j		main			# jump to main

exit:   
    li		$v0, 10		# Terminate the program 
    syscall                 


