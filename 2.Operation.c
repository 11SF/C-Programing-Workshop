#include <stdio.h>
int main() 
{
    /*
        ระดับความสำคัญ
            *, /:หารธรรมดา, %:หารเอาเศษ
            +, -
        พิจารณาจากซ้ายไปขวา
        ถ้ามีวงเล็บทำในวงเล็บก่อน


        ++a :       +1 ก่อนใช้
        a++ :       ใช้ก่อนแล้ว +1

        and : &&
        or  : ||
        not : !

        equal       : ==
        not equal   : != 
    */
   int a = 10,b = 5,c = 2;

   printf("%d",a + b);
   printf("%d",a - b);
   printf("%d",a * b);
   printf("%d",a / b);
   printf("%d",a % b);

   printf("%d",++c);
   printf("%d",c);

   printf("%d",c++);
   printf("%d",c);

   int d = 10;

   printf("%d",d);
   printf("%d",d+=2);

}