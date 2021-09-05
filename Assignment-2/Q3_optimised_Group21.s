# #########################################
#   >> Assignment 2 : MIPS Assignment 1
#   >> Question 3 : MIPS-32 ASM Program for Primality Test of a number ,n >= 10
#   >> Group No : 21
#   >> Authors : Pritkumar Godhani (19CS10048) 
#                Debanjan Saha     (19CS30014)  
# #########################################

    .globl  main

    .data

###########################################
##    >> Algorithm : 
##    is_prime(int n) 
##    {
##        int i = 2;
##        for(; i * i <= n; i++){}
##        int temp = i; 
##        for(i = 2; i < temp ; i++){
##              if( n % i == 0){
##                  printf("Composite");
##                  return;
##              }
##        }
##        print("Prime");
##    }
###########################################
#       Register     |       Variable 
#   --------------------------------------
#       $s0          |       n    
#       $s1          |       i
#       $t0          |       temp
#
###########################################
    

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

main:

    li      $v0, 4          # Load system call code into register $v0 for printing string
    la      $a0, prompt     # Load the string 'prompt' to register $a0
    syscall                 # Make a system call and print the string 'prompt'  

    li      $v0, 5          # load system call code for reading integer into register $v0
    syscall                 # make a system call and get the input integer n from user 
    move    $s0 $v0         # Copy the value is register $v0 (i.e n) to register $s0 

    li      $v0, 4          # Load system call code into register $v0 for printing string
    la      $a0, newline    # Load the string , 'newline' to register $a0
    syscall                 # Make a system call and print newline

    li      $t0, 10             # Load the integer constant 10 into register t0
    blt     $s0, $t0, error     # if n < 10, branch to 'error'
    li      $s1, 2              # set i = 2
    j       sqrt_loop           # jump to 'sqrt_loop'

sqrt_loop:
    mult	$s1, $s1			        # multipy i with i
    mflo	$t0					        # Take the last 32 bits of the multiplied result
    bgt		$t0, $s0, primality_test	# if i*i >= n , branch to 'primality_test'
    addi    $s1, 1                      # add 1 to i ; i++
    j		sqrt_loop				    # jump to 'sqrt_loop'
      
primality_test:
    add		$t0, $s1, $zero	            # Add i and 0 and store to $t0 (i.e the value of the 1 + (int)sqrt(n) is stored in $t0 )
    li		$s1, 2		                # Set i = 2
    j		primality_test_loop		    # jump to 'primality_test_loop'

primality_test_loop:
    bge     $s1, $t0, prime_message         # if i >= ( 1 + (int)sqrt(n) ), branch to 'prime_message' 
    div     $s0, $s1                        # Divide n by i and store remainder in $mfhi and division result in $mflo 
    mfhi    $t1                             # Get the value of the remainder ( n%i) from register $mfhi to register $t1
    beq     $t1, $zero, composite_message   # If remainder (n%i) == 0
    addi    $s1, $s1, 1                     # If 1 to i, (i++) 
    j		primality_test_loop             # branch to 'primality_test_loop' i.e continue the loop

prime_message:
    li      $v0, 4              # Load system call code into register $v0 for printing string
    la      $a0, prime_string   # Load the string 'prime_string' to register $a0
    syscall                     # Make a system call and print that it is prime

    b		exit			    # branch to exit

composite_message:

    li      $v0, 4                  # Load system call code into register $v0 for printing string
    la      $a0, composite_string   # Load the string 'composite_string' to register $a0
    syscall                         # Make a system call and print that n is composite

    b		exit			        # branch to exit

error:

    li      $v0, 4              # Load system call code into register $v0 for printing string
    la      $a0, input_error    # Load the string 'input_error' to register $a0
    syscall                     # Make the system call and print the string 'input_error' 

    li      $v0, 4          # Load system call code into register $v0 for printing string
    la      $a0, newline    # Load the string 'newline' to register $a0
    syscall                 # Make the system call and print the newline  

    j		main			# jump to main

exit:   
    li		$v0, 10		# Load system call code into register $v0 for program termination
    syscall             # Make the system call and terminate the program   


