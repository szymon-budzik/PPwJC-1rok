#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Szymon Budzik lab02

void zadanie1();
void zadanie2();
void zadanie3();
void zadanie4();
void zadanie5();
void zadanie6();
void zadanie7();

int main()
{
	int numerZadania;

	do
	{

		printf("\n\nWybierz numer zadania (1-7) lub (0) aby zakonczyc program: ");
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

		case 6:
			zadanie6();

		case 7:
			zadanie7();

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

	float liczba = 0;
	float suma = 0;
	float srednia = -1;
	float wartoscMax = 0;

	//Jeżeli chcemy żeby zaliczało wartość ujemną do wyniku,
	// wystarczy dać scanf na sam początek pętli
	while (liczba >= 0)
	{
		suma += liczba;
		srednia++;

		if (liczba > wartoscMax)
		{
			wartoscMax = liczba;
		}

		printf("Podaj liczbe: ");
		scanf_s("%f", &liczba);
	}
	
	srednia = suma / srednia;
	printf("Suma wynosi: %f \n", suma);
	printf("Srednia wynosi: %f \n", srednia);
	printf("Wartosc maksymalna: %f \n", wartoscMax);
}

void zadanie2()
{
	printf("\nZadanie 2:\n");

	int iloscD = 0, iloscU = 0;
	float liczba, sumaD = 0, sumaU = 0;
	
	for (int i = 0; i < 9; i++)
	{
		printf("Podaj liczbe: ");
		scanf_s("%f", &liczba);

		if (liczba > 0)
		{
			sumaD += liczba;
			iloscD++;
		}
		else if (liczba < 0)
		{
			sumaU += liczba;
			iloscU++;
		}
	}

	printf("Ilosc liczb dodatnich: %d \n", iloscD);
	printf("Ilosc liczb ujemnych: %d \n", iloscU);
	printf("Suma liczb dodatnich: %f \n", sumaD);
	printf("Suma liczb ujemnych: %f \n", sumaU);
}

void zadanie3()
{
	printf("\nZadanie 3:\n");

	//must need żeby mieć losowe liczby
	srand(time(NULL));

	int sumaParzystych = 0;

	int ciagN = 0;
	ciagN = rand() % 100 + 1;

	for (int i = 0; i < ciagN; i++)
	{
		int elementN = rand() % 100 + 1;
		printf("%d \n", elementN);

		if (elementN % 2 == 0)
		{
			sumaParzystych += elementN;
		}
	}
	
	printf("Dlugosc ciagu wynosi: %d\n", ciagN);
	printf("Suma wszystkich liczb parzystych w danym ciagu wynosi: %d \n", sumaParzystych);
}

void zadanie4()
{
	printf("\nZadanie 4:\n");
	
	srand(time(NULL));

	int sumaParzystych = 0;

	int ciagN = 0;
	ciagN = rand() % 100 + 1;

	for (int i = 0; i < ciagN; i++)
	{
		int elementN = rand() % 56 - 10;
		printf("%d \n", elementN);

		if (elementN % 2 == 0)
		{
			sumaParzystych += elementN;
		}
	}

	printf("Dlugosc ciagu wynosi: %d\n", ciagN);
	printf("Suma wszystkich liczb parzystych w danym ciagu wynosi: %d \n", sumaParzystych);
}

void zadanie5()
{
	printf("\nZadanie 5:\n");

	int liczbaStudentow;
	int punkty;
	int i = 0;
	float srednia = 0;

	printf("Podaj liczbe studentow: ");
	scanf_s("%d", &liczbaStudentow);

	while (i < liczbaStudentow)
	{
		punkty = 0;
		i++;
		printf("Podaj liczbe punktow dla studenta nr.%d: ", i);
		scanf_s("%d", &punkty);
		srednia += punkty;
	}
	srednia = srednia / liczbaStudentow;
	printf("Srednia liczba punktow studentow w grupie wynosi: %f\n", srednia);
}

void zadanie6()
{
	printf("\nZadanie 6:\n");

	//petla od 1 do 100
	for (int i = 1; i <= 100; i++)
	{
		printf("%d ", i);
	}

	printf("\n\n");
	//petla od 100 do 1
	for (int i = 100; i >= 0; i--)
	{
		printf("%d ", i);
	}

	printf("\n\n");
	//petla mnoznikow 7 (az do 11 elementu)
	for (int i = 1; i <= 11; i++)
	{
		int siedem = 0;
		siedem = 7 * i;
		printf("%d ", siedem);
	}

	printf("\n\n");
	//petla od 20 do 0, wyswietlajacy do drugi element np. 20, 18, 16
	for (int i = 20; i >= 0; i--)
	{
		if (i % 2 == 0)
		{
			printf("%d ", i);
		}
	}
}

void zadanie7()
{
	printf("\nZadanie 7:\n");


}
