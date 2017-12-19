/*Write a calculator with following options add,subtract,multiply,divide,module operations
Example : Input 
5 5

Example : Output 
10,0,25,1,0*/
#include<stdio.h>
int main(void)
{
int a,b;
scanf("%d %d",&a,&b);
printf("%d,%d,%d,%d,%d",a+b,a-b,a*b,a/b,a%b);
return 0;
}
