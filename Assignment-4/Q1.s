#############################################
#
#   >> Assignment 4 : MIPS Assignment 3
#   >> Question 1 : MIPS-32 ASM Program for a) Filling a 2-D Matrix with GP with a modulo m in Row-Major Fashion
#                                           b) Computing its determinant using a recursive procdeure based on Laplacian method
#   >> Group No : 21
#   >> Authors : Debanjan Saha     (19CS30014)
#                Pritkumar Godhani (19CS10048)   
#
#
#############################################
.globl main

# Data Section Begins
.data
prompt_n:
    .asciiz "Enter the value of n: "
prompt_a:
    .asciiz "Enter the value of a: "
prompt_r:
    .asciiz "Enter the value of r: "
prompt_m:
    .asciiz "Enter the value of m: "
input_err:
    .asciiz "Invalid Matrix Dimensions. Please enter positive value for matrix dimension n.\n"
blankspace:
    .asciiz "\t"
newline: 
    .asciiz "\n"
printA:
    .asciiz "The Matrix A filled with GP(a,r) is :\n"
printDet:
    .asciiz "The Determinant of Matrix A is: "

# Code Section Begins
.text
main:
    ## read n
    li      $v0, 4  
    la      $a0, prompt_n
    syscall                             # prompt for n

    li      $v0, 5
    syscall                             # read n
    move    $s0, $v0                    # copy n into s1

    ble	    $s0, $zero, input_error     # if n <= 0 then input error
    
    ## read a
    li      $v0, 4  
    la      $a0, prompt_a
    syscall                             # prompt for a

    li      $v0, 5
    syscall                             # read a
    move    $s1, $v0                    # copy a into s2

    ## read r
    li      $v0, 4  
    la      $a0, prompt_r
    syscall                             # prompt for r

    li      $v0, 5
    syscall                             # read r
    move    $s2, $v0                    # copy r into s3

    ## read m
    li      $v0, 4  
    la      $a0, prompt_m
    syscall                             # prompt for m

    li      $v0, 5
    syscall                             # read m
    move    $s3, $v0                    # copy m into s0

    jal     initStack                   # call initStack

    mul     $a0, $s0, $s0               # a0 = n*n
    jal     mallocInStack               # call mallocInStack to allocate array A
    move    $s4, $v0                    # store the address of the A returned above into s4

    ## sequence to fill the array with GP mod m : begins
    mul     $t0, $s0, $s0               # t0 = m*n, number of elememts
    move    $t1, $s1                    # t1 = a, first term of the GP
    div		$t1, $s3			        # 
    mfhi	$t1					        # a mod m
    
    move    $t2, $s2                    # t2 = r, common ratio of the GP
    div		$t2, $s3			        # 
    mfhi	$t2					        # r mod m
    
    move    $t3, $s4                    # t3 = A, base address of A

    add     $t4, $zero, $zero           # loop variable, i = 0
    fill_loop:
        sll     $t5, $t4, 2             # t5 = 4*i
        add     $t6, $t3, $t5           # t6 = A + 4*i, address of the ith integer of A
        
        sw      $t1, ($t6)              # A[i] = t1, store t1 at A[i]

        mul     $t1, $t1, $t2           # t1 = t1 * r mod m, update t1 to the next GP term
        div     $t1, $s3
        mfhi    $t1                     # t1 =  t1 mod m

        addi    $t4, $t4, 1             # i++, update loop variable
        blt     $t4, $t0, fill_loop     # if i < t0(m*n), loop again
    ## sequence to fill the array with GP mod m : ends

    li      $v0, 4  
    la      $a0, newline
    syscall                             # print newline

    li      $v0, 4  
    la      $a0, printA
    syscall                             # print statement for matrix A

    move    $a0, $s0                    
    move    $a1, $s4
    jal     printSqMatrix               # call printSqMatrix(n, A)

    move    $a0, $s0
    move    $a1, $s4
    jal     recursiveDet                # call recursiveDet(n, A)
    move    $s5, $v0                    # copy the returned value in s5

    li      $v0, 4  
    la      $a0, printDet
    syscall                             # print statement for determinant

    li      $v0, 1
    move    $a0, $s5
    syscall                             # print s5, the computed determinant

    li      $v0, 4  
    la      $a0, newline    
    syscall                             # print newline

    j       exit                        # jump to exit

input_error:# input error block
    li      $v0, 4  
    la      $a0, input_err
    syscall                             # print input error message

exit:       # exit block
    li      $v0, 10
    syscall                             # exit the program

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
##  pushToStack( Integer A ) : return void
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
##  pushStack( void ) : return Integer on Top of Stack
##  {
##      save the integer on the top on stack;
##      adjust top of stack to next value, (free up this value's space)
##      return the integer on top of stack
##  }
popFromStack:
    lw      $v0, ($sp)
    addi    $sp, $sp, 4                 # allocate 4-byte space for the integer
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
##  printMatrix( Integer m, Integer n, Base Address A ) : return void (prints in Row-Major Form)
##  {
##      loop i from 1 to m :
##          loop j from 1 to n:
##              print A[i][j]
##          print newline after a row            
##  }
printSqMatrix:    
    move    $t0, $a0                    # t0 = n, rows(and cols) in matrix
    move    $t2, $a1                    # t2 = A, base address of A
    add     $t3, $zero, $zero           # init i($t3) = 0, loop variable for print_loop_level_1

    print_loop_level_1:
        add     $t4, $zero, $zero       # init j($t4) = 0, loop variable for print_loop_level_2

    print_loop_level_2: 
        mul     $t5, $t3, $t0           # t5 = n*i
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
        blt     $t4, $t0, print_loop_level_2  # if( j < n ), repeat the loop-level-2      

        li      $v0, 4
        la      $a0, newline
        syscall                         # print a newline after each row

        addi    $t3, $t3, 1             # i = i + 1
        blt     $t3, $t0, print_loop_level_1  # if( i < n ), repeat the loop-level-1  

    li      $v0, 4
    la      $a0, newline
    syscall                             # print newline

    jr      $ra                         # return newline
#########################################



#########################################  
##  CONVENTION : For the 0th row, iterate j from 0 to n-1 and compute minors skipping 0th row and jth column recursively.
##  recursiveDet ( Integer n, Base Address A ) : returns Integer det [ determinant fo matrix A ]
##  {
##      if n == 1 :
##           return A[0]]
##      det = 0
##      loop j from 0 to n-1 :
##          allocate space for B [n-1][n-1]
##          
##          // below loops copy the array row major in the B skipping 0th row and jth column
##          l = 0
##          loop i from 1 to n-1
##              loop k from 0 to n-1
##                  if ( j == k ): skip copying this column
##                  else :
##                      copy A[i][k] as the lth element of B
##                      increment l : l += 1
##          
##          // recursive call
##          minor_0_j = recursiveDet(n-1, B)
##          term_j = minor_0_j * A[0][j]
##          if ( (0+j) is even ) : det += term_j
##          else                 : det -= term_j
##
##      return det
##  }
recursiveDet:
    addi    $sp, $sp, -28               # allocate space for return addr., arguments and saved registers used
    sw      $ra, 0($sp)                 # save the return address of this call on stack so that when a new ra is allocated for the recursive calls the original value can be safely restored
    sw      $a0, 4($sp)                 # save the arguments of this call to restore them after recursive calls
    sw      $a1, 8($sp)                  
    sw      $s0, 12($sp)                # the old state of all the saved registers used within the function is saved on the stack
    sw      $s1, 16($sp)            
    sw      $s2, 20($sp)
    sw      $s3, 24($sp)
    
    move    $s0, $a0                    # copy value of a0 = n into s0
    move    $s1, $a1                    # copy address of array A in a1 to s1
    add     $s3, $zero, $zero           # initialize s3 to 0, variable det in function description 
    
    ## recursion base case check
    addi    $t2, $zero, 1               # t2 = 1   
    lw      $v0, ($s1)                  # A[0] is copied to v0 (the determinant of 1x1 array is the first element)
    beq     $s0, $t2, return_det        # if (n == 1) then go to return_det
    
    ## outer loop of j from 0 to n-1
    ## det(A[0..n-1][0..n-1]) = sum over j from 0 to n-1 : (-1)^(j) * det(A[1---n-1][0---n-1 - {j}] * A[0][j]
    add     $s2, $zero, $zero           # s2 is the variable j, denoting the column to be skipped while computing the minor
outer_loop:
    addi    $t4, $s0, -1                # t4 = s0 - 1 = n - 1
    mul     $a0, $t4, $t4               # t4 = (n-1)*(n-1) size of the array formed by deleting one row and one col
    jal     mallocInStack               # allocate space for an (n-1)*(n-1) size array B
    move    $t4, $v0                    # store the address of the newly allocated array B in t4
    
    ## copy the original array A into B omitting 0th row and s2-th column 
    add     $t6, $zero, $zero           # init t6 = 0 (l)
    addi    $t3, $zero, 1               # init t3 = 1 (i)
    copy_loop_i:            
        add     $t2, $zero, $zero       # init t2 = 0 (k)

        copy_loop_k:
            beq     $t2, $s2, continue_k # if(t2 == s2) i.e., (k == j) then dont copy this column

            mul     $t7, $t3, $s0       # else, access element A[i][k] : t7 = i*n
            add     $t7, $t7, $t2       # t7 = n*i + k
            sll     $t7, $t7, 2         # t7 = 4*(k + n*i)    
            add     $t7, $s1, $t7       # t7 = A + 4*(k + n*i)
            lw      $t1, ($t7)          # t1 = A[i][k]

            sll     $t7, $t6, 2         # t7 = t6 * 4
            add     $t7, $t4, $t7       # t7 = B + t6*4

            sw      $t1, ($t7)          # B[t6] = t1 (B[l] = A[i][k])

            addi    $t6, $t6, 1         # t6 += 1 (l++)
        continue_k:
            addi    $t2, $t2, 1         # t2 += 1 (k++)
            blt     $t2, $s0, copy_loop_k # if t2 < n then loop again from copy_loop_k
        
        addi    $t3, $t3, 1             # t3 = t3 + 1 (i++)
        blt     $t3, $s0, copy_loop_i   # if t3 < n then loop again from copy_loop_i

    
    addi    $a0, $s0, -1                # a0 = n-1
    move    $a1, $t4                    # a1 = B
    jal     recursiveDet                # call recursiveDet(n-1, B)
    move    $t0, $v0                    # the returned value is copied to t0
                                        # t0 = M[0][s2] is computed, minor after deleting 0th and jth column
    add     $t7, $zero, $zero           # t7 = n*0 = 0
    add     $t7, $t7, $s2               # t7 = n*0 + s2
    sll     $t7, $t7, 2                 # t7 = 4*(s2 + n*0)
    add     $t7, $s1, $t7               # t7 = A + 4(s2 + n*0)
    lw      $t1, ($t7)                  # t1 = A[0][s2]

    mul     $t0, $t0, $t1               # t0 = M[0][s2] * A[0][s2]

    andi	$t1, $s2, 1                 # if (0+s2) is even then (-1)^(0+s2) = 1 and the t0 term above is added to the current value otherwise subtracted
    beq     $t1, $zero, even_index
    odd_index:
        sub     $s3, $s3, $t0           # det -= M[0][s2]*A[0][s2], update s3
        j       continue_j
    even_index:
        add     $s3, $s3, $t0           # det += M[0][s2]*A[0][s2], update s3


    continue_j:                         # continue to next value of s2 (j)
        addi    $t4, $s0, -1            # t4 = n-1
        mul     $t4, $t4, $t4           # t4 = (n-1)*(n-1)  
        sll     $t4, $t4, 2             # t4 = (4*(n-1)*(n-1)) size of array B that was allocated temporarily
        add     $sp, $sp, $t4           # free the space for array B

        addi    $s2, $s2, 1             # s2 = s2 + 1 (j++)
        blt     $s2, $s0, outer_loop    # if s2 < n loop again from outer_loop

    move    $v0, $s3                    # copy det in v0, return value register
    return_det: 
        lw      $ra, 0($sp)
        lw      $a0, 4($sp)
        lw      $a1, 8($sp)
        lw      $s0, 12($sp)
        lw      $s1, 16($sp)
        lw      $s2, 20($sp)
        lw      $s3, 24($sp)            # restore all the stored values back into the registers
        addi    $sp, $sp, 28            # free up the stack space for these values
        jr      $ra                     # return to the caller
#########################################