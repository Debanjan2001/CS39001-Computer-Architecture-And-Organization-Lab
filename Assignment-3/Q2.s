#############################################
#   >> Assignment 2 : MIPS Assignment 3
#   >> Question 2 : MIPS-32 ASM Program for - 1) Reading an integer array of size 10
#                                             2) Sorting the array 
#                                             3) Finding the K-th largest number from the array for an arbitrary user input K
#   >> Group No : 21
#   >> Authors : Debanjan Saha     (19CS30014)
#                Pritkumar Godhani (19CS10048)   
#############################################

.globl main

###### Data Section Starts ######
.data

# Program Output Text Constants
prompt_array:
    .asciiz "Enter 10 integers one by one as requested\n"
prompt_k:
    .asciiz "Enter k: "
interactive_input:
    .asciiz "Enter the integer_"
sorted_array:
    .asciiz "The sorted array is: "
k_th_largest:
    .asciiz "The k-th largest integer is: "
input_error:
    .asciiz "Invalid input. Please provide a value in range [1,10]\n"
newline:
    .asciiz "\n"
blankspace:
    .asciiz "  "
colon:
    .asciiz ": "
complete:
    .asciiz "[Program Successfully Terminated]\n"
 
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
        bge     $t0, $t1, start_sorting     # if i >= 10, brach to 'start_sorting'  
        
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
 
        j		array_input_loop		# jump to 'array_input_loop'

start_sorting:

    la      $a0, array          # Load address of array into $a0 for function argument 
    jal     sort_array          # make a procedure call to sort_array for sorting  
    
    li      $v0, 4              # Load system call code into register $v0 for printing string           
    la      $a0, sorted_array   # Load the address of string 'sorted_array' to register $a0      
    syscall                     # Make a system call and print the string stored in 'sorted_array'

    li      $t0, 0              # Set $t0 = 0 (A variable i)
    li		$t1, 10		        # Set $t1 = 10 (A constant 10)
    la      $t2, array          # Load Address of array into $t2
    
    print_sorted_array_loop:
        sll     $t3, $t0, 2     # Shift i by 2 bits and store in $t3 i.e $t3 = i*4
        add     $t3, $t3, $t2   # Store base address of array[i] in $t3 (i.e array + 4*i)
            
        lw      $a0, 0($t3)     # Load the value of array[i] into $a0
        li      $v0, 1          # Load system call code for printing an integer into $v0
        syscall                 # make systemcall and print the integer array[i]

        li      $v0, 4              # Load system call code into register $v0 for printing string       
        la      $a0, blankspace     # Load the address of string 'blankspace' to register $a0    
        syscall                     # Make a system call and print the string stored in 'blankspace'
        
        addi    $t0, $t0, 1         # increment i (i++)
        blt     $t0, $t1, print_sorted_array_loop # if i<10, branch to 'print_sorted_array_loop'
    
    li      $v0, 4          # Load system call code into register $v0 for printing string       
    la      $a0, newline    # Load the address of string 'newline' to register $a0    
    syscall                 # Make a system call and print the string stored in 'newline'

    j		read_k          # Jump to 'read_k'

read_k:
    li      $v0, 4              # Load system call code into register $v0 for printing string
    la      $a0, prompt_k       # Load the address of string 'prompt_k' to register $a0
    syscall                     # Make a system call and print the string 'prompt_k'  
    
    # Read k
    li      $v0, 5      # Load system call code into register $v0 for taking input integer,k from user
    syscall             # Make the system call and take the input, k 
    move    $s0, $v0    # Copy k into register $s0 

    li      $t1, 10                     # Set $t1 = 10   
    bgt     $s0, $t1, input_k_error     # if k > 10, branch to 'input_k_error'
    ble		$s0, $zero, input_k_error   # if k <= 0, branch to 'input_k_error'

    # Code segment for the final extraction of k-th largest integer
    li      $v0,4                 # Load system call code into register $v0 for printing string
    la      $a0, k_th_largest     # Load the address of string 'k_th_largest' to register $a0
    syscall                       # Make a system call and print the string 'k_th_largest'  

    la      $a0, array            # Load address of array into $a0 as first argument
    move    $a1, $s0              # Copy value of k into $a1 as second argument
    jal     find_k_largest        # Call 'find_k_largest' to get the k-th largest number

    move    $a0, $v0            # The k-th largest value is in $v0. Copy it to $a0
    li      $v0, 1              # Store system call code for printing integer into $v0
    syscall                     # Make the systemcall and print the k-th largest integer

    li      $v0, 4              # Load system call code into register $v0 for printing string       
    la      $a0, newline        # Load the address of string 'newline' to register $a0    
    syscall                     # Make a system call and print the string stored in 'newline'

    li      $v0, 4              # Load system call code into register $v0 for printing string       
    la      $a0, complete       # Load the address of string 'complete' to register $a0    
    syscall                     # Make a system call and print the string stored in 'complete'

    j exit	                    # jump to 'exit'

################################################
# Function to Sort an array
# @arguments: $a0 : base address of array to be sorted
# @returns: none(void) 
# @algorithm: as specified in the assignment specification, followed 0-based array indexing
sort_array:
    addi    $sp, $sp, -4        # Decrement the stack pointer
    sw      $s0, 0($sp)         # Save the current value of $s0 on the stack    
    li		$s0, 10             # Assign $s0 = 10
    li      $t0, 1              # Set $t0 = 1 (variable j = 1) 
    
    # Outer for loop
    outer_loop:     

        bge     $t0, $s0, finish_sort   # if j >= 10, branch to 'finish_sort' 
        sll     $t2, $t0, 2             # Shift j by 2 bits and store in $t2, i.e $t2 = j*4
        add     $t2, $t2, $a0,          # Store the address of array[j] in $t2 (i.e array + 4*j)
        lw      $t3, 0($t2)             # Set $t3 = array[j] i.e (temp = array[j])
        addi    $t1, $t0, -1            # Set $t1 = j - 1  (i = j-1 )
        j       inner_loop              # Jump to inner loop

        # inner while loop
        inner_loop:
            
            sge     $t4, $t1, $zero                     # if i>=0 then $t4 = 1 else 0
            beq		$t4, $zero, continue_outer_loop	    # if $t4 is false, then 'continue_outer_loop'
            
            sll     $t5, $t1, 2         # Shift i by 2 bits and store in $t5, i.e $t5 = 4*i
            add     $t5, $t5, $a0       # Store the base address of array[i] to $t5 (array + 4*i) 
            lw      $t4, 0($t5)         # Load the value of array[i] into $t4

            sgt     $t4, $t4, $t3                       # if array[i]>temp, set $t4 = 1 else 0
            beq		$t4, $zero, continue_outer_loop     # if $t4 is false, 'continue_outer_loop' 

            addi    $t4, $t1, 0         # Set $t4 = i
            sll     $t4, $t4, 2         # Shift $t4 by 2 bits and store in itself(i.e 4*i)
            add     $t4, $t4, $a0       # Store the address of array[i] in $t4

            addi    $t5, $t1, 1         # Add 1 to i and store in $t5
            sll     $t5, $t5, 2         # Shift $t5 by 2 bits i.e 4*(i+1) will be stored in $t5
            add     $t5, $t5, $a0       # Store the address of array[i+1] in $t5

            lw      $t6, 0($t4)         # Load the value of array[i] into $t6
            sw      $t6, 0($t5)         # Set array[i+1] = array[i]
            addi    $t1, $t1, -1        # decrement i (i= i-1)

            j       inner_loop          # jump to 'inner_loop'

    continue_outer_loop:
        addi    $t5, $t1, 1         # Store j+1 in $t5
        sll     $t5, $t5, 2         # Shift $t5 by 2 bits i.e store 4*(j+1) in $t5
        add     $t5, $t5, $a0       # Store the address of array[j+1] in $t5

        sw      $t3, 0($t5)         # Set array[j+1] = temp

        addi	$t0, $t0, 1			# Do j = j + 1
        j       outer_loop          # Jump to 'outer_loop'

finish_sort:
    lw		$s0, 0($sp)	            # Restore value of $s0 from the stack     
    addi    $sp, $sp, 4             # Pop the stack and restore previous stack pointer by incrementing it.
    jr      $ra                     # Jump to $ra i.e return to caller.

###########################################
#  Function for returning k-th largest number from a sorted array of length 10
#  @arguments : $a0 : base address of array, 
#               $a1 : k
#  @returns   : k-th integer from the end of the array
find_k_largest:

    li      $t0, 40             # Set $t0 = 40                 
    sll     $t1, $a1, 2         # Set $t1 = 4*k
    sub     $t0, $t0, $t1       # Store value of 40 - 4*k into $t0
    add     $t0, $t0, $a0       # Store the address of array[10-k] into $t0 i.e (array + 40-4*k) 
    lw      $v0, 0($t0)         # Load the value of array[10-k] into $v0 as result 
    jr		$ra	    		    # jump to $ra i.e return to the caller.

#################################################

input_k_error:

    li      $v0, 4             # Load system call code into register $v0 for printing string
    la      $a0, input_error   # Load the address of string 'input_error' to register $a0
    syscall                    # Make a system call and print the string 'input_error'

    j read_k                   # jump to 'read_k' again in case of invalid input.

exit:
    li		$v0, 10		# Load system call code into register $v0 for program termination
    syscall             # Make the system call and terminate the program