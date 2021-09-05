###########################################
#
#   >> Assignment 2 : MIPS Assignment 1
#   >> Question 2 : MIPS-32 ASM Program for computing GCD of two positive numbers
#   >> Group No : 21
#   >> Authors : Debanjan Saha     (19CS30014)
#                Pritkumar Godhani (19CS10048)   
#   
#
###########################################
##
##  >> Algorithm :
##      compute_gcd(int a, int b) 
##      {   
##          if (a == 0) return b;
##          while(b != 0)    
##          {    
##              if(a > b) a = a - b;
##              else b = b - a;
##          }
##          return a;
##      }
##########################################
#
#   Register     |       Variable
# ---------------------------------  
#   s0           |       a
#   s1           |       b
#
#########################################
.globl  main
###### Data Section Starts ######
.data
prompt_1:   
    .asciiz "Enter the first positive integer: "
prompt_2:
    .asciiz "Enter the second positive integer: "
input_err:
    .asciiz "Invalid input. Please enter positive number only."
output:
    .asciiz "GCD of the two integers is: "
newline:
    .asciiz "\n"


###### Code Section Starts ######
.text                                                   
main:       # main block
    li      $v0, 4  
    la      $a0, prompt_1
    syscall                             # prompt for the first integer

    li      $v0, 5
    syscall                             # read a, the first integer
    move    $s0, $v0                    # copy a into s0

    li      $v0, 4
    la      $a0, newline
    syscall                             # print newline

    blt     $s0, $zero, error           # if s0 is less than zero, i.e, a is read as negative, go to err block

    li      $v0, 4
    la      $a0, prompt_2
    syscall                             # prompt for the second integer

    li      $v0, 5
    syscall                             # read b, the second integer
    move    $s1, $v0                    # copy b into s1

    li      $v0, 4
    la      $a0, newline
    syscall                             # print newline

    blt     $s1, $zero, error           # if s1 is less than zero, i.e, b is read as negative, go to err block

    beq     $s0, $zero, a_zero          # if(a == 0) jump to a_zero

while:      # while loop
    beq     $s1, $zero, print_result    # exit condition check

    blt     $s1, $s0, loopif            # if(b < a) jump to loopif
    sub     $s1, $s1, $s0               # else : $s1 = $s1 - $s0 (b = b - a)
    j       while                       # loop continue to while block

loopif:     # if(b < a) block
    sub     $s0, $s0, $s1               # $s0 = $s0 - $s1 (a = a - b)
    j       while                       # loop continue to while block

a_zero:     # if a == 0 block
    move    $s0, $s1                    # copy $s1 to $s0
    j       print_result                # jump to print_result

error:        # input error branch
    li      $v0, 4          
    la      $a0, input_err
    syscall                             # print the error message
    
    li      $v0, 4
    la      $a0, newline
    syscall  
    j       main                       # exit the program

print_result:# print the result i.e. gcd block
    li      $v0, 4
    la      $a0, output
    syscall                             # print output statement
    
    li      $v0, 1
    move    $a0, $s0
    syscall                             # print the computed gcd value (in s0)

    li      $v0, 4
    la      $a0, newline
    syscall                             # print newline

exit:       # exit block
    li      $v0, 10
    syscall                             # exit the program