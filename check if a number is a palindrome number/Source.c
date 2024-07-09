#include<stdio.h>
int x ,y,result,remainder;
void main(void)
{
	printf("enter a number ");
	scanf_s("%d", &x);
	y = x;
	while (y != 0)
	{
		remainder = y % 10;
		result = result * 10 + remainder;
		y = y / 10;
		
	}
	result == x ? printf("it is a palindrome since %d = %d", x, result)
		: printf("it is a palindrome since %d != %d", x, result);
	
}