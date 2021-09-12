#include <stdio.h>


// booth's multiplication procedure
int main() {
    int A,B;
    int prod = 0;
    printf("Enter the first number: ");
    scanf("%d", &A);
    printf("\nEnter the second number: ");
    scanf("%d", &B);
    prod += B;
    int aux_bit = 0;
    int cnt = 16;

    while(cnt > 0) {
        if((prod&1) && !aux_bit) {
            prod -= (A<<16);
        }
        else if(!(prod&1) && aux_bit) {
            prod += (A<<16);
        }
        aux_bit = (prod&1);
        prod >>= 1;
        cnt--;
    }

    printf("\nThe product of the two numbers is: %d\n", prod);
    return 0;
}