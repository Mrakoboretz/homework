#include "stdio.h"

int main()
{
	int a, i, mass[256];
	for (i = 0; i < 256; i++)
	{
		mass[i] = 0;
	}
	printf("insert number: ");
	scanf_s("%d", &a);
	i = 0;
	if (a == 0)
		printf("0");
	else {
		while (a != 0)
		{
			if (a % 2 == 0)
			{
				mass[i] = 0;
				a = a / 2;
			}
			else
			{
				mass[i] = 1;
				a = a / 2;
			}
			i++;
		}
		for (i = i - 1; i >= 0; i--)
			printf("%d", mass[i]);
	}
	return 0;
}
