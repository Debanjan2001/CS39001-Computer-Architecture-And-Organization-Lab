#############################################
#
#   >> Assignment 2 : MIPS Assignment 1
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
promptarr:
    .asciiz "Enter the array numbers(10): \n"
sorted:
    .asciiz "The sorted sequence is: "
arrayelement:
    .asciiz "A"
colon:
    .asciiz ": "
promptk:
    .asciiz "Enter k: "
newline:
    .asciiz "\n"
input_err:
    .asciiz "Invalid input."
array:
    .space  40

###### Code Section Starts ######
.text
main:       # main block
    li      $v0, 4  
    la      $a0, promptarr
    syscall                             # prompt for the input integer

    li      $v0, 4
    la      $a0, newline
    syscall

    addi    $t0, $zero, 10
    addi    $t2, $zero, 1
    addi    $t1, $zero, array

input_loop:
    bgt		$t2, $t0, readk

    li      $v0, 4
    la      $a0, arrayelement
    syscall

    li      $v0, 1
    move    $a0, $t2
    syscall

    li      $v0, 4
    la      $a0, colon
    syscall

    li      $v0, 5
    syscall

    sw		$a0, 0($t1)

    addi    $t1, $t1, 4
    addi    $t2, $t2, 1

readk:
    li      $v0, 4
    la      $a0, promptk
    syscall

    li      $v0, 5
    syscall

    move    $s0, $a0

    la      $a0, array
    
    

find_k_largest:
    jr      $ra

sort_array:
    jr      $ra



    




    

    

    
    
    
    