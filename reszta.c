#include <stdio.h>
//Szymon Budzik - projekt 15

int main()
{
	int zl = 0;
	int gr = 0;

	float reszta = 0;

	float z5 = 5;
	float z2 = 2;
	float z1 = 1;
	float gr50 = 0.5;
	float gr20 = 0.2;
	float gr10 = 0.1;
	float gr5 = 0.05;
	float gr2 = 0.02;
	float gr1 = 0.01;

	printf("Podaj liczbe zloty: ");
	scanf_s("%d", &zl);

	printf("Podaj liczbe groszy: ");
	scanf_s("%d", &gr);

	reszta = zl + gr * 0.01;
	printf("Reszta: %.2f\n", reszta);
	printf("Monety: ");

	while (reszta > 0)
	{
		if (5 < reszta)
		{
			printf("%.1f ", z5);
			reszta = reszta - z5;
		}

		else if (2 < reszta)
		{
			printf("%.1f ", z2);
			reszta = reszta - z2;
		}

		else if (1 < reszta)
		{
			printf("%.1f ", z1);
			reszta = reszta - z1;
		}

		else if (0.5 < reszta)
		{
			printf("%.1f ", gr50);
			reszta = reszta - gr50;
		}

		else if (0.2 < reszta)
		{
			printf("%.1f ", gr20);
			reszta = reszta - gr20;
		}

		else if (0.1 < reszta)
		{
			printf("%.1f ", gr10);
			reszta = reszta - gr10;
		}

		else if (0.05 < reszta)
		{
			printf("%.2f ", gr5);
			reszta = reszta - gr5;
		}

		else if (0.02 < reszta)
		{
			printf("%.2f ", gr2);
			reszta = reszta - gr2;
		}

		else
		{
			printf("%.2f\n", gr1);
			reszta = reszta - gr1;
		}
	}
}