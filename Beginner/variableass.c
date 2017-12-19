/*Declare variables for storing information about Sachin Tendulkar like Name,Nick Name,Runs scored in ODI,Batting average in ODI,ODI Matches

Expected Output:

Sachin Ramesh Tendulkar
Little Master
18426
44.83
463*/

#include<stdio.h>
int main(void)
{
char name[30]="Sachin Ramesh Tendulkar";
char nick[25]="Little Master";
int odi=18426;
float avg=44.86;
int match=463;
printf("%s\n%s\n%d\n%f\n%d",name,nick,odi,avg,match);
getch();
}
