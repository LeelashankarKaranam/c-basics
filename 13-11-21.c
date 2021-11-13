#include<stdio.h>
void main()
{
	int p,t;
	float si,r;
	printf("the principle amount:");
    scanf("%d",&p);
    printf("time:");
    scanf("%d",&t);
    printf("rate:");
    scanf("%f",&r);
	si = p*t*r/100;
	printf("the simple interest %f",si);
}
