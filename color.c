#include<stdio.h>
int main()
{
	int num;
	char code;
	scanf("%d%c",&num,&code);
	if(num==1 || code=='V' )
	  printf("voilet\n");
	else if(num==2 ||code=='I')
	  printf("indigo\n");
	else if(num==3 ||code=='G')
	  printf("green\n");
	else
	    printf("invalid num and code");
}
