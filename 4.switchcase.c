#include <stdio.h>
int main() 
{
    // switch case
    int a,b;
    char operator;
    

    scanf("%d %c %d",&a,&operator,&b);

    // if(operator == '+') {
    //     printf("%d\n", a + b);
    // } else if(operator == '-') {
    //     printf("%d\n", a - b);
    // } else if(operator == '*') {
    //     printf("%d\n", a * b);
    // } else {
    //     printf("%d\n", a / b);
    // }

    switch(operator) {
        case '+' : printf("%d\n", a + b); break;
        case '-' : printf("%d\n", a - b); break;
        case '*' : printf("%d\n", a * b); break;
        case '/' : printf("%d\n", a / b); break;
    }
     
}