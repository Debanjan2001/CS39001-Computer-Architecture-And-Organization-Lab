#include <stdio.h>


// booth's multiplication procedure
int main() {
    int M,Q;
    int A = 0;
    printf("Enter the first number: ");
    scanf("%d", &M);
    printf("\nEnter the second number: ");
    scanf("%d", &Q);
    int A_ = M, B_ = Q;
    int prod = B_;
    int aux_bit = 0, aux_bit_ = 0;
    int cnt = 16;

    while(cnt > 0) {
        // augmented A:Q procedure
        if((prod&1) && !aux_bit_) {
            prod -= (A_<<16);
        }
        else if(!(prod&1) && aux_bit_) {
            prod += (A_<<16);
        }
        aux_bit_ = (prod&1);
        prod >>= 1;


        // separated A, Q procedure
        if((Q&1) && !aux_bit) {
            A -= M;
        }
        else if(!(Q&1) && aux_bit) {
            A += M;
        }
        aux_bit = (Q&1);
        Q >>= 1;
        int lastofA = (A&1);
        A >>= 1;
        if(lastofA) {
            Q = Q | (0x8000);
        } else {
            Q = Q & (0x7fff);
        }
        cnt--;
        printf("Itr: %d, PROD = %x, AUX_ = %d, A = %x, Q = %x, AUX = %d \n", cnt, prod, aux_bit_, A, Q, aux_bit);
    } 
    int finalans = (A<<16) + Q;

    printf("\nThe product of the two number through prod is: %d and through A-Q is : %d\n",prod,finalans);
    return 0;
}