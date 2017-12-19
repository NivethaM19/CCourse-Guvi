#include <stdio.h>

int main(char argc,char *argv[]) 
{
	int i;
	for(i=1;i<argc;i++)
	{
		printf("\n%c",argv[i]);
	}
	
	return 0;
}
