#############################################
#   >> Assignment 2 : MIPS Assignment 4
#   >> Question 2 : MIPS-32 ASM Program for - 1) Reading an integer array of size 10
#                                             2) Sorting the array using a function 'recursive_sort'
#                                             3) Printing The Sorted Array
#   >> Group No : 21
#   >> Authors : Pritkumar Godhani (19CS10048)
#                Debanjan Saha     (19CS30014)
#############################################

.globl main

###### Data Section Starts ######
.data

# Program Output Text Constants
prompt_array:
    .asciiz "Enter 10 integers one by one as requested\n"
interactive_input:
    .asciiz "Enter the integer_"
sorted_array_message:
    .asciiz "Sorted Array : "
newline:
    .asciiz "\n"
blankspace:
    .asciiz "  "
colon:
    .asciiz ": "
complete:
    .asciiz "[Program Successfully Completed]\n"
 
# align as 4 byte boundary i.e space for integer array
.align 4
array:
    .space  40

###### Code Section Starts ######
.text
main:
    li      $v0, 4              # Load system call code into register $v0 for printing string
    la      $a0, prompt_array   # Load the address of string 'prompt_array' to register $a0
    syscall                     # Make a system call and print the string stored in 'prompt_array'  

    addi    $t0, $zero, 0       # Set $t0 = 0 ( A variable i)
    addi    $t1, $zero, 10      # Set $t1 = 10 ( A constant = 10 ) 
    la      $t2, array          # Load address of array into $t2

    array_input_loop: 
        
        sll     $t3, $t0, 2                 # Shift i left logically by 2 bits i.e i = i*4
        add     $t3, $t2, $t3               # Store address of array[i] into $t3

        li      $v0, 4                      # Load system call code into register $v0 for printing string       
        la      $a0,  interactive_input     # Load the address of string 'interactive_input' to register $a0    
        syscall                             # Make a system call and print the string stored in 'interactive_input'  
        
        addi    $t0, $t0, 1     # Do i++ ;
        li      $v0, 1          # Load system call code into register $v0 for printing integer    
        move    $a0, $t0        # Copy the value of i in $t0 to register $a0                
        syscall                 # Make a system call and print i            

        li      $v0, 4          # Load system call code into register $v0 for printing string
        la      $a0, colon      # Load the address of string 'colon' to register $a0
        syscall                 # Make a system call and print the string stored in 'colon'

        li      $v0, 5          # Load system call code into register $v0 for taking integer input    
        syscall                 # make the system call and read array[i] 

        sw      $v0, 0($t3)     # Store the input integer into array[i]

        blt     $t0, $t1, array_input_loop    # if i < 10, loop back to 'array_input_loop'  
        
        # If instruction comes below the above line, it means input has been read.

    # Start Sorting using recursive function
    la      $a0, array          # Load address of array into $a0 for function argument 
    li		$a1, 0		        # $a1 = 0
    li	    $a2, 9		        # $a2 = 9
    jal     recursive_sort      # make a procedure call to 'recursive_sort' for sorting  
    
    li      $v0, 4              # Load system call code into register $v0 for printing string           
    la      $a0, sorted_array_message   # Load the address of string 'sorted_array' to register $a0      
    syscall                     # Make a system call and print the string stored in 'sorted_array'

    la      $a0, array            # Load address of array into $a0 as first argument
    li      $a1, 10              # Copy value of $t1 into $a1 as second argument ($t1 stores size of array)
    jal     printArray            # Call 'printArray' to print the array

    li      $v0, 4              # Load system call code into register $v0 for printing string       
    la      $a0, newline        # Load the address of string 'newline' to register $a0    
    syscall                     # Make a system call and print the string stored in 'newline'

    li      $v0, 4              # Load system call code into register $v0 for printing string       
    la      $a0, complete       # Load the address of string 'complete' to register $a0    
    syscall                     # Make a system call and print the string stored in 'complete'

    j exit	                    # jump to 'exit'


################################################################
# @recursive_sort: Function to Sort an array recursively.
# Arguments: 
# -----------
# $a0 : base address of array to be printed (array)
# $a1 : start index of the part of array to be sorted  (left)
# $a2 : end index of the part of array to be sorted (right)
# Returns: 
# ---------
# void 
#################################################################
recursive_sort:

    addi    $sp, $sp, -28      # Decrement the stack pointer
    sw      $ra, 0($sp)
    sw      $s0, 4($sp)
    sw      $s1, 8($sp)
    sw      $s2, 12($sp)
    sw      $s3, 16($sp)
    sw      $s4, 20($sp)
    sw      $s5, 24($sp)

    
    move    $s0, $a0 # arr
    move    $s1, $a1 # left
    move    $s2, $a2 # right
    move    $s3, $a1  # l = left
    move    $s4, $a2  # r = right
    move    $s5, $a1 # p  = left

    
    outer_while_loop:

        slt    $t1, $s3, $s4 # l<r ? 1: 0
        beq    $t1, $zero, return_from_recursive_sort
        inner_iterative_while_loop1:

            slt     $t1, $s3, $s2 # t1 = 1 if l < right
            beq		$t1, $zero, inner_iterative_while_loop2	# if $l>=right then loop2
            
            sll     $t1, $s3, 2 # 4*l
            add     $t1, $t1, $s0 # address of  array[l]
            lw      $t2, 0($t1)  # Load array[l]

            sll     $t3, $s5, 2 # 4*p
            add     $t3, $t3, $s0 # address of  array[p]
            lw      $t4, 0($t3)  # Load array[p]

            sle     $t5, $t2, $t4  # t4 = 1 if a[l] <= a[p]
            beq		$t5, $zero, inner_iterative_while_loop2	# if $a[l]>a[p] then loop2

            addi    $s3, $s3, 1 # l++
            j       inner_iterative_while_loop1

        inner_iterative_while_loop2:

            sgt     $t1, $s4, $s1 # t4 = 1 if r > left
            beq		$t1, $zero, continue_outer_loop	# if $r<=left then loop
            
            sll     $t1, $s4, 2 # 4*r
            add     $t1, $t1, $s0 # address of  array[r]
            lw      $t2, 0($t1)  # Load array[r]

            sll     $t3, $s5, 2 # 4*p
            add     $t3, $t3, $s0 # address of  array[p]
            lw      $t4, 0($t3)  # Load array[p]

            sge     $t5, $t2, $t4  # t4 = 1 if a[r] >= a[p]
            beq		$t5, $zero, continue_outer_loop	# if $a[r]<a[p] then outer

            addi    $s4, $s4, -1 # r--
            j       inner_iterative_while_loop2
    
    continue_outer_loop:

        sge     $t1, $s3, $s4 #l>=r? 1:0 
        beq     $t1, $zero, condition_2
        condition_1:
            sll    $t1, $s5, 2  # 4p
            add    $t1, $t1, $s0   # &arr[p] 
            sll    $t2, $s4, 2 # 4r
            add    $t2, $t2, $s0   # &arr[r]
            
            move   $a0, $t1 # f_pparam1 swap
            move   $a1, $t2 # f_pparam2 swap

            jal    SWAP

            move   $a0, $s0 # array : A
            move   $a1, $s1 # left
            addi   $t0, $s4, -1 # t0 = r -1
            move   $a2, $t0     # r-1 to arg
            jal    recursive_sort 

            move   $a0, $s0 # array : A
            addi   $t0, $s4, 1 # t0 = r + 1
            move   $a1, $t0 # r+1 to arg
            move   $a2, $s2     # right to arg
            jal    recursive_sort 

            j      return_from_recursive_sort

        condition_2:

            sll    $t0, $s3, 2  # 4l
            add    $t0, $t0, $s0  # a[l] 
            sll    $t1, $s4, 2  # 4r
            add    $t1, $t1, $s0  # a[r] 
            move   $a0, $t0 
            move   $a1, $t1 

            jal    SWAP
            j      outer_while_loop

return_from_recursive_sort:
    lw      $ra, 0($sp)
    lw		$s0, 4($sp)	            # Restore value of $s0 from the stack     
    lw		$s1, 8($sp)	            # Restore value of $s0 from the stack     
    lw		$s2, 12($sp)	            # Restore value of $s0 from the stack     
    lw		$s3, 16($sp)	            # Restore value of $s0 from the stack     
    lw		$s4, 20($sp)	            # Restore value of $s0 from the stack     
    lw      $s5, 24($sp)
    addi    $sp, $sp, 28             # Pop 
    jr      $ra 

SWAP:
    move    $t0, $a0
    move    $t1, $a1
    lw      $t2, 0($t0)
    lw      $t3, 0($t1)
    sw      $t3, 0($t0)
    sw      $t2, 0($t1)

    jr      $ra

################################################
# @printArray : Function to print an array
# Arguments: 
# -----------
# $a0 : base address of array to be printed
# $a1 : size of array  ( = 10 for this question)
# Returns: 
# ---------
# void 
#################################################
printArray:
    
    li      $t0, 0              # Set $t0 = 0 (A variable i = 0)
    move    $t1, $a0            # Address of array
    move    $t2, $a1            # Size of array

    print_for_loop:
        sll     $t3, $t0, 2     # Shift i by 2 bits and store in $t3 i.e $t3 = i*4
        add     $t3, $t3, $t1   # Store base address of array[i] in $t3 (i.e array + 4*i)
            
        lw      $a0, 0($t3)     # Load the value of array[i] into $a0
        li      $v0, 1          # Load system call code for printing an integer into $v0
        syscall                 # make systemcall and print the integer array[i]

        li      $v0, 4              # Load system call code into register $v0 for printing string       
        la      $a0, blankspace     # Load the address of string 'blankspace' to register $a0    
        syscall                     # Make a system call and print the string stored in 'blankspace'
        
        addi    $t0, $t0, 1                 # increment i (i++)
        blt     $t0, $t2, print_for_loop    # if i<10, branch to 'print_for_loop'
    
    li      $v0, 4          # Load system call code into register $v0 for printing string       
    la      $a0, newline    # Load the address of string 'newline' to register $a0    
    syscall                 # Make a system call and print the string stored in 'newline'

    jr      $ra         # Return to the caller.

exit:
    li		$v0, 10		# Load system call code into register $v0 for program termination
    syscall             # Make the system call and terminate the program