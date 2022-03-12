#include<stdio.h>
int main()
{
	int r1,r2,r3,r4,r5;
	float avg;
	scanf("%d%d%d%d%d",&r1,&r2,&r3,&r4,&r5);
	avg=(float)(r1+r2+r3+r4+r5)/5;
	 printf("%f",avg);
	 printf("\nabove average of runners\n");
	if(r1>=avg)
	 printf("%d\t",r1);
	if(r2>=avg)
	 printf("%d\t",r2);
	if(r3>=avg)
	 printf("%d\t",r3);
	if(r4>=avg)
	 printf("%d\t",r4);
	if(r5>=avg)
	 printf("%d\t",r5);
	 return 0;
	
	
}
