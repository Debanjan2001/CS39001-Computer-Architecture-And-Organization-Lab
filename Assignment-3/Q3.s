#############################################
#
#   >> Assignment 3 : MIPS Assignment 2
#   >> Question 3 : MIPS-32 ASM Program for a) Malloc in Stack for Array
#                                           b) Filling a 2-D Matrix with GP in Row-Major Fashion
#                                           c) Computing its transpose in another Matrix B
#   >> Group No : 21
#   >> Authors : Debanjan Saha     (19CS30014)
#                Pritkumar Godhani (19CS10048)   
#
#
#############################################
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
input_err:
    .asciiz "Invalid Matrix Dimensions. Please enter positive value for matrix dimension m, n.\n"
blankspace:
    .asciiz "\t"
newline: 
    .asciiz "\n"
printA:
    .asciiz "The Matrix A filled with GP(a,r) is :\n"
printB:
    .asciiz "The Matrix B transposed from Matrix A is:\n"

# Code Section Begins
.text
main:
    ## read m
    li      $v0, 4  
    la      $a0, prompt_m
    syscall                             # prompt for m

    li      $v0, 5
    syscall                             # read m
    move    $s0, $v0                    # copy m into s0

    ble	    $s0, $zero, input_error     # if m <= 0 then input error
    
    ## read n
    li      $v0, 4  
    la      $a0, prompt_n
    syscall                             # prompt for n

    li      $v0, 5
    syscall                             # read n
    move    $s1, $v0                    # copy n into s1

    ble	    $s1, $zero, input_error     # if n <= 0 then input error
    
    ## read a
    li      $v0, 4  
    la      $a0, prompt_a
    syscall                             # prompt for a

    li      $v0, 5
    syscall                             # read a
    move    $s2, $v0                    # copy a into s2

    ## read r
    li      $v0, 4  
    la      $a0, prompt_r
    syscall                             # prompt for r

    li      $v0, 5
    syscall                             # read r
    move    $s3, $v0                    # copy r into s3


    jal     initStack                   # call initStack


    mul     $a0, $s0, $s1               # $a0 = m * n (number of integers to allocate)
    jal     mallocInStack               # call mallocInStack (allocate A)
    move    $s4, $v0                    # copy the address returned by mallocInStack to s4, s4 holds address of A
    

    mul     $a0, $s0, $s1               # $a0 = m * n (number of integers to allocate)
    jal     mallocInStack               # call mallocInStack (allocate B)
    move    $s5, $v0                    # copy the address returned by mallocInStack to s5, s5 holds address of B


    li      $v0, 4
    la      $a0, newline
    syscall                             # print newline


    mul     $a0, $s0, $s1
    move    $a1, $s2
    move    $a2, $s3
    move    $a3, $s4
    jal     fillGPMatrix                # call fillGPMatrix(m*n, a, r, A)
    

    li      $v0, 4  
    la      $a0, printA
    syscall                             # print message for A
    
    move    $a0, $s0
    move    $a1, $s1
    move    $a2, $s4
    jal     printMatrix                 # call printMatrix(m,n,A)


    move    $a0, $s0
    move    $a1, $s1
    move    $a2, $s4
    move    $a3, $s5
    jal     transposeMatrix             # call transposeMatrix(m,n,A,B)

   
    li      $v0, 4  
    la      $a0, printB
    syscall                             # print message for B

    move    $a0, $s1
    move    $a1, $s0
    move    $a2, $s5
    jal     printMatrix                 # call printMatrix(n,m,B)     

    j       exit

input_error:
    li      $v0, 4  
    la      $a0, input_err
    syscall 

exit:       # exit block
    li      $v0, 10
    syscall

########################################     
##  initStack( void ) : return void
##     -- saves old frame pointer on stack, updates the frame pointer to current stack top
initStack:  
    addi    $sp, $sp, -4                # allocate 4-Byte space for saving the $fp 
    sw      $fp, ($sp)                  # store the current $fp into $sp
    move    $fp, $sp                    # update the $fp to point at current $sp
    jr      $ra                         # return                        
#########################################


#########################################  
##  pushStack( Integer A ) : return void
##  {
##      make space on stack for an integer;
##      save the integer on the allocated space on stack;
##  }
pushToStack:
    addi    $sp, $sp, -4                # allocate 4-byte space for the integer
    sw      $a0, ($sp)                  # copy the argument into the stack
    jr      $ra                         # return        
#########################################


#########################################  
##  mallocInStack( Integer N ) : return Address To Space Allocated
##  {
##      make space on stack for N integers;
##      return (base address of the space);
##  }
mallocInStack:
    sll     $a0, $a0, 2                 # a0 contains the number of integers to be stored, left shift by 2 mulitplies it by 4, the number of bytes required
    sub     $sp, $sp, $a0               # allocate the above number of bytes on the stack
    move    $v0, $sp                    # copy the address of the array (here the top of space is the base address)
    jr      $ra                         # return                    
#########################################


#########################################   
##  fillGPMatrix( Integer N, Integer a, Integer r, Base Address A ) : return void
##  {
##      init term = a
##      loop from 1 to N :
##          store term at A[i]
##          term = term * r
##  }
fillGPMatrix:
    move    $t0, $a0                    # t0 = m*n, number of elememts
    move    $t1, $a1                    # t1 = a, first term of the GP
    move    $t2, $a2                    # t2 = r, common ratio of the GP
    move    $t3, $a3                    # t3 = A, base address of A

    add     $t4, $zero, $zero           # loop variable, i = 0

    fill_loop:
        sll     $t5, $t4, 2             # t5 = 4*i
        add     $t6, $t3, $t5           # t6 = A + 4*i, address of the ith integer of A

        sw      $t1, ($t6)              # A[i] = t1, store t1 at A[i]

        mul     $t1, $t1, $t2           # t1 = t1 * r, update t1 to the next GP term

        addi    $t4, $t4, 1             # i++, update loop variable
        blt     $t4, $t0, fill_loop     # if i < t0(m*n), loop again
    
    jr      $ra                         # return
#########################################


#########################################  
##  printMatrix( Integer m, Integer n, Base Address A ) : return void (prints in Row-Major Form)
##  {
##      loop i from 1 to m :
##          loop j from 1 to n:
##              print A[i][j]
##          print newline after a row            
##  }
printMatrix:    
    move    $t0, $a0                    # t0 = m, rows in matrix
    move    $t1, $a1                    # t1 = n, cols in matrix
    move    $t2, $a2                    # t2 = A, base address of A
    add     $t3, $zero, $zero           # init i($t3) = 0, loop variable for print_loop_level_1

    print_loop_level_1:
        add     $t4, $zero, $zero       # init j($t4) = 0, loop variable for print_loop_level_2

    print_loop_level_2: 
        mul     $t5, $t3, $t1           # t5 = n*i
        add     $t5, $t5, $t4           # t5 = n*i + j, row major index calculation
        sll     $t5, $t5, 2             # t5 = 4*(n*i + j)

        add     $t6, $t2, $t5           # t6 = A + 4(j + n*i)

        li      $v0, 1                  
        lw      $a0, ($t6)              # print A[i][j]
        syscall

        li      $v0, 4
        la      $a0, blankspace
        syscall                         # print a space after the each element in row
    
        addi    $t4, $t4, 1             # j = j + 1
        blt     $t4, $t1, print_loop_level_2  # if( j < n ), repeat the loop-level-2      

        li      $v0, 4
        la      $a0, newline
        syscall                         # print a newline after each row

        addi    $t3, $t3, 1             # i = i + 1
        blt     $t3, $t0, print_loop_level_1  # if( i < m ), repeat the loop-level-1  

    li      $v0, 4
    la      $a0, newline
    syscall                             # print newline

    jr      $ra                         # return newline
#########################################


#########################################  
##  transposeMatrix( Integer m, Integer n, Base Address A, Base Address B) : return void
##  {
##      loop i from 1 to m :
##          loop j from 1 to n:
##              B[j][i] <= A[i][j]          
##  }
transposeMatrix:
    move    $t2, $a2                    # t2 = A, base address of A
    move    $t3, $a3                    # t3 = A, base address of B
    add     $t7, $zero, $zero           # init i(t7) = 0, loop variable for loop-level-1 
   
    ## Note: $a0 = m and $a1 = n and A is m x n matrix
   
    transpose_loop_level_1:
        add     $t4, $zero, $zero       # init j(t4) = 0, loop variable for loop-level-2

    transpose_loop_level_2:
        mul     $t5, $t7, $a1           # t5 = n*i
        add     $t5, $t5, $t4           # t5 = n*i + j
        sll     $t5, $t5, 2             # t5 = 4(n*i + j), index calculation for A

        add     $t6, $t2, $t5           # t6 = A + 4(n*i + j), address of A[i][j]

        mul     $t0, $t4, $a0           # t0 = m*j
        add     $t0, $t0, $t7           # t0 = m*j + i
        sll     $t0, $t0, 2             # t0 = 4(m*j + i), index calculation for B (B will n*m)

        add     $t1, $t3, $t0           # t1 = B + 4(m*j + i), address of B[j][i]   

        lw      $t8, ($t6)              # copy A[i][j] into t8
        sw      $t8, ($t1)              # store t8 into B[j][i]
    
        addi    $t4, $t4, 1             # j++
        blt     $t4, $a1, transpose_loop_level_2 # if( j < n ), repeat loop-level-2

        addi    $t7, $t7, 1             # i++
        blt     $t7, $a0, transpose_loop_level_1 # if( i < m ), repeat loop-level-1

    jr      $ra                         # return
#########################################