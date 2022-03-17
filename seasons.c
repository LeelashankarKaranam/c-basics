#include<stdio.h>
int main()
{            // seasons
	int n;
	scanf("%d",&n);
	switch(n)
	{
		case 11:
		case 12:
		case 1:
		case 2:
		     printf("winter\n");
		     break;
		case 3:
		case 4:
		case 5:
		     printf("summer\n");
		     break;
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		     printf("rainy\n");
		     break;
		default:
		     printf("invalid");
	            return 0;
            }   
            
}
