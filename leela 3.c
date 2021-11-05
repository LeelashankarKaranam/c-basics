#include<stdio.h>
#include<limits.h>
void main()
{
	printf("short:\nsigned: %hd to %hd\n", SHRT_MIN,SHRT_MAX);
	printf("unsigned: %d to %hu", 0, USHRT_MAX);
	printf("\nint:\nsigned: %d to %d\n", INT_MIN,SHRT_MAX);
	printf("unsigned: %d to %u", 0, UINT_MAX);
}
