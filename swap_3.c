#include <stdio.h>


int main() {

    int a,b;
    printf("input values");
    scanf("%d", &a);
    scanf("%d", &b);

    a = a^b;
    b = a^b;
    a = a^b;

    printf ("after swapping the value of a is %d and the value of b is %d", a, b);


    return 0;
}