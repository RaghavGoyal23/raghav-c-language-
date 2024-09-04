/* write in c program in which you have to take an integer named score denoting 
the no. of points earned on an exam. you have to print the grades according to the following rules:
1. if score is less than or equals to 30 but greater than 25, then grade is 'A'
2. if score is less than or equals to 25 but greater than 20, then grade is 'B'
3. if score is less than or equals to 20 but greater than 15, then grade is 'C'
4. if score is less than or equals to 15 but greater than 10, then grade is 'D'
5. if score is less than or equals to 10 but greater than 05, then grade is 'E' */

#include <stdio.h>


int main() {

    int score;
        printf ("enter your score here");
        scanf ("%d", &score);

        if (score>25 && score<=30) printf("Your grade is 'A'");

        else if (score>20 && score<=25) printf("Your grade is 'B'");

        else if (score>15 && score<=20) printf("Your grade is 'C'");

        else if (score>10 && score<=15) printf("Your grade is 'D'");

        else if (score>05 && score<=10) printf("Your grade is 'E'");

        else printf("sorry! you did not pass the examination");


    return 0;
}