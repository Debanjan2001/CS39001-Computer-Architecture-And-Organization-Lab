###
## Assignment 3 - Q3. 
## Status :: Works fine.
## Pending :: Fine touches, figure out what pushIntoStack, initStack are to be used for
###


.globl main

# Data Section Begins
.data
prompt_m:
    .asciiz "Enter the value of m: "
prompt_n:
    .asciiz "Enter the value of n: "
prompt_a:
    .asciiz "Enter the value of a: "
prompt_r:
    .asciiz "Enter the value of r: "
blankspace:
    .asciiz " "
newline: 
    .asciiz "\n"

# Code Section Begins
.text
main:
    ## read m
    li      $v0, 4  
    la      $a0, prompt_m
    syscall

    li      $v0, 5
    syscall
    move    $s0, $v0

    ## read n
    li      $v0, 4  
    la      $a0, prompt_n
    syscall

    li      $v0, 5
    syscall
    move    $s1, $v0

    ## read a
    li      $v0, 4  
    la      $a0, prompt_a
    syscall

    li      $v0, 5
    syscall
    move    $s2, $v0

    ## read r
    li      $v0, 4  
    la      $a0, prompt_r
    syscall

    li      $v0, 5
    syscall
    move    $s3, $v0

    jal     initStack

    ## allocate array A
    mul     $a0, $s0, $s1
    jal     mallocInStack
    move    $s4, $v0
    
    ## allocate array B
    mul     $a0, $s0, $s1
    jal     mallocInStack
    move    $s5, $v0

    li      $v0, 4
    la      $a0, newline
    syscall

    ## fill_matrix sequence
    move    $t2, $s4
    add     $t0, $zero, $s2 

for_level_1:
    add     $t4, $zero, $zero

for_level_2:
    mul     $t5, $t3, $s1
    add     $t5, $t5, $t4
    sll     $t5, $t5, 2

    add     $t6, $t2, $t5   

    sw      $t0, ($t6)

    mul     $t0, $t0, $s3
    
    addi    $t4, $t4, 1
    blt     $t4, $s1, for_level_2

    addi    $t3, $t3, 1
    blt     $t3, $s0, for_level_1


    ## print matrix A
    move    $a0, $s0
    move    $a1, $s1
    move    $a2, $s4
    jal     printMatrix

    ## transpose of A in B
    move    $a0, $s0
    move    $a1, $s1
    move    $a2, $s4
    move    $a3, $s5
    jal     transposeMatrix

    ## print matrix B
    move    $a0, $s1
    move    $a1, $s0
    move    $a2, $s5
    jal     printMatrix

    j       exit

exit:
    li      $v0, 10
    syscall

initStack:
    addi    $sp, $sp, -4
    sw      $fp, ($sp)
    move    $fp, $sp
    jr      $ra

pushToStack:
    addi    $sp, $sp, -4
    sw      $a0, ($sp)
    jr      $ra

mallocInStack:
    sll     $a0, $a0, 2
    sub     $sp, $sp, $a0
    move    $v0, $sp
    jr      $ra

printMatrix:    
    move    $t0, $a0
    move    $t1, $a1
    move    $t2, $a2
    add     $t3, $zero, $zero

    pfor_level_1:
        add     $t4, $zero, $zero

    pfor_level_2:
        mul     $t5, $t3, $t1
        add     $t5, $t5, $t4
        sll     $t5, $t5, 2

        add     $t6, $t2, $t5   

        li      $v0, 1
        lw      $a0, ($t6)
        syscall

        li      $v0, 4
        la      $a0, blankspace
        syscall
    
        addi    $t4, $t4, 1
        blt     $t4, $t1, pfor_level_2

        li      $v0, 4
        la      $a0, newline
        syscall

        addi    $t3, $t3, 1
        blt     $t3, $t0, pfor_level_1

    li      $v0, 4
    la      $a0, newline
    syscall

    jr      $ra

transposeMatrix:
    move    $t2, $a2
    move    $t3, $a3
    add     $t7, $zero, $zero

    tfor_level_1:
        add     $t4, $zero, $zero

    tfor_level_2:
        mul     $t5, $t7, $a1
        add     $t5, $t5, $t4
        sll     $t5, $t5, 2

        add     $t6, $t2, $t5   

        mul     $t0, $t4, $a0
        add     $t0, $t0, $t7
        sll     $t0, $t0, 2

        add     $t1, $t3, $t0

        lw      $t8, ($t6)
        sw      $t8, ($t1)
    
        addi    $t4, $t4, 1
        blt     $t4, $a1, tfor_level_2

        addi    $t7, $t7, 1
        blt     $t7, $a0, tfor_level_1

    jr      $ra

