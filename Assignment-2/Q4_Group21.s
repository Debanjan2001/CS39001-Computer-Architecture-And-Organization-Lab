###########################################
#
#   >> Assignment 2 : MIPS Assignment 1
#   >> Question 4 : MIPS-32 ASM Program for checking if input positive number is perfect (equal to sum of its proper divisors )
#   >> Group No : 21
#   >> Authors : Debanjan Saha     (19CS30014)
#                Pritkumar Godhani (19CS10048)   
#
#
###########################################
##    >> Algorithm : 
##    is_perfect(int a) 
##    {
##        int sum = 0, i = 1;
##        for(; i < a; i++) 
##        {
##            if(a % i == 0) 
##            {
##               sum += i;
##            }
##        }
##        if(sum == a) 
##            print("Perfect");
##        else 
##            print("Not Perfect");
##    }
###########################################
#       Register     |       Variable 
#   --------------------------------------
#       $s0          |       a    
#       $s1          |       sum
#       $t0          |       i
#
###########################################
.globl  main
###### Data Section Starts ######
.data
prompt:   
    .asciiz "Enter a positive integer: "
input_err:
    .asciiz "Invalid input. Please enter positive number only."
perfect:
    .asciiz "Entered number is A PERFECT number."
not_perfect:
    .asciiz "Entered number is NOT A PERFECT number."
newline:
    .asciiz "\n"

###### Code Section Starts ######
.text                
main:       # main block
    li      $v0, 4  
    la      $a0, prompt
    syscall                             # prompt for the input integer

    li      $v0, 5
    syscall                             # read a, the input integer
    move    $s0, $v0                    # copy a into s0

    li      $v0, 4                      
    la      $a0, newline
    syscall                             # print newline

    ble    $s0, $zero, error            # check if input integer s0(a) is positive otherwise jump to error 

    add     $s1, $zero, $zero           # init s1 to 0 ( sum = 0 )
    addi    $t0, $zero, 1               # init t0 to 1 ( i = 1 )

for:        # for loop 
    bge     $t0, $s0, check             # condition check, if i >= a jump to check otherwise proceed with the loop body

    div     $s0, $t0                    # divide s0 / t0, (a / i)
    mfhi    $t1                         # t1 = a % i ; extract the higher 16 bits of the division result (i.e., the modulus into t1)

    move    $t2, $t0                    # copy curr value of i in t2

    addi    $t0, $t0, 1                 # t0 = t0 + 1 ; increment value of i

    bne     $t1, $zero, for             # check if t1 = a % i is zero (i.e., if i is a divisor of a), if not jump to for(next iteration)

    add     $s1, $s1, $t2               # sum += i ; otherwise add the value of i before increment (in t2) to sum(in s1)
    j       for                         # continue next iteration

check:      # if(sum == a) check block
    beq     $s0, $s1, perfect_num       # if(sum(s1) == a(s0)) jump to perfect_num
    # (sum != a) block
    li      $v0, 4                  
    la      $a0, not_perfect
    syscall                             # else print it is not perfect

    li      $v0, 4  
    la      $a0, newline
    syscall                             # and a newline

    j       exit                        # jump to exit

error:      # input error block
    li      $v0, 4                      
    la      $a0, input_err
    syscall                             # print error message

    li      $v0, 4  
    la      $a0, newline
    syscall                             # and a newline

    j       main                        # jump to exit

perfect_num:# if(sum == a) true block
    li      $v0, 4
    la      $a0, perfect
    syscall                             # print number is perfect

    li      $v0, 4  
    la      $a0, newline
    syscall                             # and a newline

exit:       # exit block
    li      $v0, 10
    syscall                             # exit the program