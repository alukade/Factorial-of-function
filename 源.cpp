#include<stdio.h>

long fact(int num);

long fact(int num)
{
	long result;
	for (result = 1; num > 1; num--)
	{
		result *= num;
	}
	return result;
}

int main(void)
{
	int num;
	printf("������һ������");
	scanf_s("%d", &num);
	printf("%d�Ľ׳���%d", num, fact(num));

	return 0;
}