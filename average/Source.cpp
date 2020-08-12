#include<stdio.h> 
int main()
{
	float a, b, c;
	scanf_s("%f", &a);
	scanf_s("%f", &b);
	scanf_s("%f", &c);
	printf("frist number : %f\nsecond number : %f\nthird number : %f\n", a, b, c);
	printf("average is %f", (a + b + c) / 3);
	return 0;
}