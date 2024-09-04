#include <stdio.h>
// write a c langauge code to take three numbers from the user and sum them, only if the sum is even.

int main() {
        int a,b,c;
        printf("input values");
        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &c);

            int sum = a + b + c;

            if (sum%2==0) printf("the even sum is : %d\n", sum);
            else printf("the sum cannot be displayed becoz it is odd");




    return 0;
}