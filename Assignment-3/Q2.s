#############################################
#
#   >> Assignment 2 : MIPS Assignment 1
#   >> Question 2 : Print K-th Largest Integer
#   >> Group No : 21
#   >> Authors : Debanjan Saha     (19CS30014)
#                Pritkumar Godhani (19CS10048)   
#
#############################################
   
    .globl main

###### Data Section Starts ######
    .data

prompt_array:
    .asciiz "Enter 10 integers one by one as requested\n"
interactive_input:
    .asciiz "Enter the integer_"
k_th_largest:
    .asciiz "The k-th largest integer is: "
colon:
    .asciiz ": "
prompt_k:
    .asciiz "Enter k: "
newline:
    .asciiz "\n"
input_error:
    .asciiz "Invalid input. K is greater than 10"

.align 4
array:
    .space  40

###### Code Section Starts ######
.text
main:
    li      $v0, 4          # Array inp
    la      $a0, prompt_array
    syscall

    addi    $t0, $zero, 0
    addi    $t1, $zero, 10
    la      $t2, array

array_input_loop: 
    bge     $t0, $t1, read_k  # i>=10 goto read k    
    
    sll     $t3, $t0, 2 # 4*i
    add     $t3, $t2, $t3  # store array + 4i
    
    
    addi    $t0, $t0, 1     # i++;

    li      $v0, 4
    la      $a0,  interactive_input 
    syscall

    li      $v0, 1
    move    $a0, $t0
    syscall

    li      $v0, 4
    la      $a0, colon
    syscall

    li      $v0, 5  
    syscall

    sw      $v0, 0($t3)  # Store to array

    # debug
    # move    $a0, $v0    
    # li      $v0, 1
    # syscall

    # li      $v0, 4
    # la      $a0, newline
    # syscall

    j		array_input_loop				# jump to array_input_loop

read_k:

    # Read k
    li      $v0, 4
    la      $a0, prompt_k
    syscall

    li      $v0, 5
    syscall
    move    $s0, $v0   # s0 -> k

    li      $t1, 10
    bgt     $s0, $t1, input_k_error


    # Load argument for sorting
    move    $a0, $t2
    jal sort_array
    la      $t2, array

    # Debug Statements for array chckng 
    li      $v0,4
    la      $a0, newline
    syscall

    li      $v0,1
    lw      $a0, 0($t2)
    syscall

    li      $v0,4
    la      $a0, newline
    syscall

    li  $v0,1
    lw $a0, 4($t2)
    syscall

    li      $v0,4
    la      $a0, newline
    syscall

    li  $v0,1
    lw $a0, 8($t2)
    syscall

    li      $v0,4
    la      $a0, newline
    syscall

    li  $v0,1
    lw $a0, 12($t2)
    syscall

    li      $v0,4
    la      $a0, newline
    syscall

    li  $v0,1
    lw $a0, 16($t2)
    syscall

    li      $v0,4
    la      $a0, newline
    syscall

    li  $v0,1
    lw $a0, 20($t2)
    syscall

    li      $v0,4
    la      $a0, newline
    syscall

    li  $v0,1
    lw $a0, 24($t2)
    syscall

    li      $v0,4
    la      $a0, newline
    syscall

    li  $v0,1
    lw $a0, 28($t2)
    syscall

    li      $v0,4
    la      $a0, newline
    syscall


    li  $v0,1
    lw $a0, 32($t2)
    syscall

    li      $v0,4
    la      $a0, newline
    syscall

    li  $v0,1
    lw $a0, 36($t2)
    syscall

    li      $v0,4
    la      $a0, newline
    syscall

   
    # find kth largest

    li      $v0,4
    la      $a0, k_th_largest
    syscall

    move    $a0, $t2
    move    $a1, $s0
    jal     find_k_largest

    move    $a0, $v0 
    li      $v0,1
    syscall

    li      $v0,4
    la      $a0, newline
    syscall

    j exit


sort_array:
    addi    $sp, $sp, -4
    sw      $s0, 0($sp)
    li		$s0, 10 
    li      $t0, 1 #i

outer_loop:

    bge     $t0, $s0, finish_sort
    sll     $t2, $t0, 2 #4i
    add     $t2, $t2, $a0, #4*i+arr
    lw      $t3, 0($t2) # temp
    addi    $t1, $t0, -1 #j = i - 1 
    j       inner_loop


inner_loop:
    
    sge     $t4, $t1, $zero # j>=0 then t4 = 1 else 0
    beq		$t4, $zero, continue_outer_loop	
    
    sll     $t5, $t1, 2 # 4j
    add     $t5, $t5, $a0 #4j+arr
    lw      $t4, 0($t5) # a[j]

    sgt     $t4, $t4, $t3 # a[j]>temp
    beq		$t4, $zero, continue_outer_loop 

    addi    $t4, $t1, 0
    sll     $t4, $t4, 2
    add     $t4, $t4, $a0

    addi    $t5, $t1, 1
    sll     $t5, $t5, 2
    add     $t5, $t5, $a0

    lw      $t6, 0($t4) 
    sw      $t6, 0($t5)
    addi    $t1, $t1, -1

    j       inner_loop

continue_outer_loop:
    addi    $t5, $t1, 1
    sll     $t5, $t5, 2
    add     $t5, $t5, $a0

    sw      $t3, 0($t5)

    addi	$t0, $t0, 1			# i++
    j       outer_loop

finish_sort:
    lw		$s0, 0($sp)	
    addi    $sp, $sp, 4
    jr      $ra

find_k_largest:

    li      $t0, 40
    sll     $t1, $a1, 2
    sub     $t0, $t0, $t1
    add     $t0, $t0, $a0
    lw      $v0, 0($t0)    
    jr		$ra	    				# jump to $ra

input_k_error:

    li      $v0, 4
    la      $a0, input_error
    syscall

    j read_k

exit:
    li		$v0, 10		# Terminate the program 
    syscall                 

    