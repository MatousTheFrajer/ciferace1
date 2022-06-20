#include <stdio.h>
#include <math.h>

int main()
{
	int x;
	int soucet = 0;
	int i;
	printf("Zadejte cislo: ");
	scanf_s("%d", &x);
	for (i = 0; x > 0; i++);
	{
		i = x % 10;
		x = x / 10;
		soucet = soucet + i;
	}
	int y = 10;
	if (soucet >= 10) {
		for (i = 0; y > 0; i++)
		{
			i = y % 10;
			y = y / 10;
			soucet = soucet + i;
			printf("%d", soucet);
		}
	}
	else {
		printf("%d", soucet);
	}
	return 0;


}

