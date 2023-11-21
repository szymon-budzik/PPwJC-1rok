#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Szymon Budzik lab03

//Voidy dla kazdego zadania
void zadanie1();
void zadanie2();
void zadanie3();
void zadanie4();
void zadanie5();
void zadanie6();
void zadanie7();
void zadanie8();

int main()
{
	int numerZadania;

	do
	{

		printf("\n\nWybierz numer zadania (1-8) lub (0) aby zakonczyc program: ");
		scanf_s("%d", &numerZadania);

		switch (numerZadania)
		{
		case 1:
			zadanie1();
			break;

		case 2:
			zadanie2();
			break;

		case 3:
			zadanie3();
			break;

		case 4:
			zadanie4();
			break;

		case 5:
			zadanie5();
			break;

		case 6:
			zadanie6();
			break;

		case 7:
			zadanie7();
			break;

		case 8:
			zadanie8();
			break;

		case 0:
			printf("Zakonczono program");
			break;

		default:
			printf("Nieprawidlowy numer zadania \n");
			break;
		}

	} while (numerZadania != 0);
}

void zadanie1()
{
	printf("\nZadanie 1:\n");

	int tab[10];
	int liczba = 0;

	//pêtla przypisyju¹ca wartoœci tablicy
	for (int i = 0; i < 10; i++)
	{
		liczba += 3;
		tab[i] = liczba;
	}

	//wyœwietlenie elementów tablicy
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", tab[i]);
	}
}

void zadanie2()
{
	printf("\nZadanie 2:\n");

	int tab[10];
	int liczba = 0;

	for (int i = 0; i < 10; i++)
	{
		liczba += 3;
		tab[i] = liczba;
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", tab[i]);
		i++;
	}
}

void zadanie3()
{
	printf("\nZadanie 3:\n");

	int tab[10];
	int liczba;
	int five = 0;

	printf("Podaj liczbe calkowita: ");
	scanf_s("%d", &liczba);

	for (int i = 9; i >= 0; i--) {
		five += 5;
		tab[i] = liczba - five;
	}

	for (int i = 0; i < 10; i++) {
		printf("%d ", tab[i]);
	}
}

void zadanie4()
{
	printf("\nZadanie 4:\n");

	srand(time(NULL));

	int tab[10];
	int liczbaLosowa;
	int wartoscMin;

	for (int i = 0; i < 10; i++)
	{
		liczbaLosowa = rand() % (50 - (-23) + 1) + (-23);
		tab[i] = liczbaLosowa;
	}

	wartoscMin = tab[0];

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", tab[i]);

		if (wartoscMin > tab[i])
		{
			wartoscMin = tab[i];
		}
	}
	printf("\nWartosc minimalna w tablicy wynosi: %d", wartoscMin);
}

void zadanie5()
{
	printf("\nZadanie 5:\n");

	int liczba1, liczba2;
	int tab[10];

	printf("Podaj pierwsza liczbe: ");
	scanf_s("%d", &liczba1);
	printf("Podaj druga liczbe: ");
	scanf_s("%d", &liczba2);

	tab[0] = liczba1;
	tab[1] = liczba2;

	for (int i = 2; i < 10; i++)
	{
		tab[i] = tab[i - 2] + tab[i - 1];
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", tab[i]);
	}
}

void zadanie6()
{
	printf("\nZadanie 6:\n");

	int tab[20] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };

	for (int i = 0; i < 10; i++)
	{
		tab[i + 10] = tab[i];
	}

	for (int i = 0; i < 20; i++)
	{
		printf("%d ", tab[i]);
		if (i == 9)
		{
			printf("| ");
		}
	}
}

void zadanie7()
{
	printf("\nZadanie 7:\n");

	srand(time(NULL));

	int suma = 0;
	int los = 0;
	int w = 0;
	int k = -1;

	//macierz o rozmiarze 3x3
	int macierz[3][3];

	for (int i = 0; i < 9; i++)
	{

		if (k == 2)
		{
			k = -1;
			w++;
			printf("\n");
		}
		k++;
		los = rand() % 19 - 9;
		macierz[w][k] = los;
		if (los < 0)
		{
			printf("|%d|", macierz[w][k]);
		}
		else
		{
			printf("| %d|", macierz[w][k]);
		}
		if (w == k)
		{
			suma += los;
		}
	}

	printf("\nSuma elementow przekatnej glownej macierzy wynosi: %d", suma);
}

void zadanie8()
{
	printf("\nZadanie 8:\n");

	srand(time(NULL));

	int suma = 0;
	int los = 0;
	int w = 0;
	int k = -1;

	//macierze o rozmiarach 3x3
	int macierz1[3][3];
	int macierz2[3][3];
	int macierzS[3][3];

	//pierwsza macierz
	for (int i = 0; i < 9; i++)
	{

		if (k == 2)
		{
			k = -1;
			w++;
			printf("\n");
		}
		k++;
		los = rand() % 19 - 9;
		macierz1[w][k] = los;

		if (los < 0)
		{
			printf("|%d |", macierz1[w][k]);
		}
		else
		{
			printf("| %d |", macierz1[w][k]);
		}
	}
	w = 0;
	k = -1;

	printf("\n       +\n");

	//druga macierz
	for (int i = 0; i < 9; i++)
	{

		if (k == 2)
		{
			k = -1;
			w++;
			printf("\n");
		}
		k++;
		los = rand() % 19 - 9;
		macierz2[w][k] = los;

		if (los < 0)
		{
			printf("|%d |", macierz2[w][k]);
		}
		else
		{
			printf("| %d |", macierz2[w][k]);
		}
	}
	w = 0;
	k = -1;

	printf("\n       =\n");

	//suma macierzy pierwszej i drugiej
	for (int i = 0; i < 9; i++)
	{

		if (k == 2)
		{
			k = -1;
			w++;
			printf("\n");
		}
		k++;
		suma = macierz1[w][k] + macierz2[w][k];
		macierzS[w][k] = suma;

		if (suma < 0 && suma > -10)         //wartoœæ pomiêdzy (-9,-1)
		{
			printf("|%d |", macierzS[w][k]);
		}
		else if (suma >= 0 && suma < 10)    //wartoœæ pomiêdzy (0,9)
		{
			printf("| %d |", macierzS[w][k]);
		}
		else if (suma >= 10)                //wartoœæ wieksza ni¿ 9
		{
			printf("| %d|", macierzS[w][k]);
		}
		else                               //wartoœæ mniejsza ni¿ -9
		{
			printf("|%d|", macierzS[w][k]);
		}
	}
}