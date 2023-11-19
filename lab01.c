#include <stdio.h>
//Szymon Budzik 

//Voidy dla kazdego zadania
void zadanie1();
void zadanie2();
void zadanie3();
void zadanie4();
void zadanie5();

int main()
{
	int numerZadania;

	do
	{

		//Wprowadzenie numeru zadania przez użytkownika
		printf("\n\nWybierz numer zadania (1-5) lub (0) aby zakonczyc program: ");
		scanf_s("%d", &numerZadania);

		//Switch z wyborem odpowiedniego zadania
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

		case 0:
			printf("Zakonczono program");
			break;

		default:
			printf("Nieprawidlowy numer zadania \n");
			break;
		}

	} while (numerZadania != 0);
}

//Definicje funkcji dla każdego zadania

void zadanie1()
//Kod dla zadania 1
{
	printf("\nZadanie 1:\n");
	
	printf("Nr albumu to: 131359");
}

void zadanie2()
//Kod dla zadania 2
{
	printf("\nZadanie 2:\n");

	int liczba;

	printf("Podaj liczbe calkowita: ");
	scanf_s("%d", &liczba);

	if (liczba % 2 == 0)
	{
		printf("%d jest liczba parzysta", liczba);
	}
	else
	{
		printf("%d jest liczba nieparzysta", liczba);
	}
}

void zadanie3()
//Kod dla zadania 3
{
	printf("\nZadanie 3:\n");

	double liczba1, liczba2;

	printf("Podaj pierwsza liczbe: \n");
	scanf_s("%lf", &liczba1);
	printf("Podaj druga liczbe: \n");
	scanf_s("%lf", &liczba2);

	if (liczba1 > liczba2)
	{
		printf("%lf jest wieksza od %lf", liczba1, liczba2);
	}
	else if (liczba2 > liczba1)
	{
		printf("%lf jest wieksza od %lf", liczba2, liczba1);
	}
	else
	{
		printf("Obie liczby sa sobie rowne");
	}
}

void zadanie4()
//Kod dla zadania 4
{
	printf("\nZadanie 4:\n");

	double liczba1, liczba2, liczba3, liczba4;
	double srednia;

	printf("Podaj pierwsza liczbe: \n");
	scanf_s("%lf", &liczba1);
	printf("Podaj druga liczbe: \n");
	scanf_s("%lf", &liczba2);
	printf("Podaj trzecia liczbe: \n");
	scanf_s("%lf", &liczba3);
	printf("Podaj czwarta liczbe: \n");
	scanf_s("%lf", &liczba4);

	srednia = (liczba1 + liczba2 + liczba3 + liczba4) / 4;
	printf("Srednia podanych liczb wynosi %lf", srednia);
}

void zadanie5()
//Kod dla zadania 5
{
	printf("\nZadanie 5:\n");

	char operacja;
	double liczba1, liczba2;
	double wynik;

	printf("Podaj operacje ktora chcesz wykonac (+,-,*,/)\n");

	scanf_s(" %c", &operacja);

	printf("Podaj pierwsza liczbe: \n");
	scanf_s("%lf", &liczba1);
	printf("Podaj druga liczbe: \n");
	scanf_s("%lf", &liczba2);

	switch (operacja)
	{
	case '+':
		wynik = liczba1 + liczba2;
		printf("Wynik to %lf", wynik);
		break;

	case '-':
		wynik = liczba1 - liczba2;
		printf("Wynik to %lf", wynik);
		break;

	case '*':
		wynik = liczba1 * liczba2;
		printf("Wynik to %lf", wynik);
		break;

	case '/':
		wynik = liczba1 / liczba2;
		printf("Wynik to %lf", wynik);
		break;

	default:
		printf("Wprowadzono nieprawidlowa operacje\n");
	}
}
