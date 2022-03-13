#include<stdio.h>
int main()
{
	int num;
	printf("1 to 12 months\n");
	scanf("%d",&num);
	if(num==1)
	 printf("jan");
	else if(num==2)
	 printf("feb");
	else if(num==3)
	 printf("mar");
	else if(num==4)
	 printf("apr");
	else if(num==5)
	 printf("may");
	else if(num==6)
	 printf("jun");
	else if(num==7)
	  printf("jul");
	else if(num==8)
	 printf("aug");
	else if(num==9)
	 printf("sep");
	else if(num==10)
	 printf("oct");
	else if(num==11)
	 printf("nov");
	else if(num==12)
	 printf("dec");
	else
	 printf("above 12 invalid");
	return 0;
}
