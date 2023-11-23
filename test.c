#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main()
{
	srand(time(NULL));

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	int rozmiar; 
	int suma = 0;
	int los = 0;
	int w = 0;
	int k = -1;

	//P.S ³adnie wyœwietla do 30, póŸniej siê psuje
	printf("Podaj rozmiar macierzy (kwadratowa): ");
	scanf_s("%d", &rozmiar);
	printf("\n");


	//alokacja pamiêci
	int** macierz = (int**)malloc(rozmiar * sizeof(int*));
	
	for (int i = 0; i < rozmiar; i++)
	{
		macierz[i] = (int*)malloc(rozmiar * sizeof(int));
	}
	
	//pêtla nadaj¹ca wartoœci i wyœwietlaj¹ca macierz
	for (int i = 0; i < rozmiar*rozmiar; i++)
	{
		if (k == rozmiar-1)
		{
			k = -1;
			w++;
			printf("\n");
		}
		k++;
		los = rand() % 19 - 9;
		macierz[w][k] = los;

		if (los < 0 && w == k)
		{
			SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		}
		else if(los >= 0 && w == k)
		{
			SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		}
		else if (los < 0)
		{
			SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
		}
		else
		{
			SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
		}

		printf("|%2d|", macierz[w][k]);

		if (w == k)
		{
			suma += los;
		}
	}
	SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
	printf("\n\nSuma elementow przekatnej glownej macierzy wynosi: %d\n", suma);
	
	//Zwolnienie zaalokowanej pamiêci
	for (int i = 0; i < rozmiar; i++) {
		free(macierz[i]);
	}
	free(macierz);

}

