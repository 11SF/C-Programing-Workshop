#include <stdio.h>
int main() 
{
    int a = 2;
    int b = 3;

    //วิธีที่ 1
    if(a - b == 1) 
    {
        printf("Hello\n");
    }
    else if(a - b == 0) 
    {
        printf("Por\n");
    }
    else 
    {
        printf("World\n");
    }

    //วิธีที่ 2
    if(a - b == 1) 
    {
        printf("Hello\n");
    }
    if(a - b == 0) 
    {
        printf("Por\n");
    }
    if(a - b == 1 && a - b == 0)
    {
        printf("World\n");
    }
}