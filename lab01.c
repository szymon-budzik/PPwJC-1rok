#include <stdio.h>
//Szymon Budzik
int main() {
    int numerZadania;

    do
    {
        printf("\nDostepne zadania:\n");
        printf("Zadanie 1\n");
        printf("Zadanie 2\n");
        printf("Zadanie 3\n");
        printf("Zadanie 4\n");
        printf("Zadanie 5\n");

        printf("Wybierz numer zadania (0 aby zakonczyc):\n");
        scanf_s("%d", &numerZadania);

        if (numerZadania == 1)
        {
            printf("\n131359\n");
        }
        else if (numerZadania == 2)
        {
            int liczba;
            printf("\nPodaj liczbe calkowita: ");
            scanf_s("%d", &liczba);

            if (liczba % 2 == 0) {
                printf("%d jest liczba parzysta.\n", liczba);
            }
            else {
                printf("%d nie jest liczba parzysta.\n", liczba);
            }
        }
        else if (numerZadania == 3)
        {
            double liczba1, liczba2;

            printf("\nPodaj pierwsza liczbe zmiennoprzecinkowa: ");
            scanf_s("%lf", &liczba1);

            printf("Podaj druga liczbe zmiennoprzecinkowa: ");
            scanf_s("%lf", &liczba2);

            if (liczba1 > liczba2) {
                printf("%.2lf jest wieksza od %.2lf.\n", liczba1, liczba2);
            }
            else if (liczba2 > liczba1) {
                printf("%.2lf jest wieksza od %.2lf.\n", liczba2, liczba1);
            }
            else {
                printf("Obie liczby sa rowne.\n");
            }
        }
        else if (numerZadania == 4)
        {
            double liczba1, liczba2, liczba3, liczba4;
            double srednia;

            printf("\nPodaj pierwsza liczbe zmiennoprzecinkowa: ");
            scanf_s("%lf", &liczba1);

            printf("Podaj druga liczbe zmiennoprzecinkowa: ");
            scanf_s("%lf", &liczba2);

            printf("Podaj trzecia liczbe zmiennoprzecinkowa: ");
            scanf_s("%lf", &liczba3);

            printf("Podaj czwarta liczbe zmiennoprzecinkowa: ");
            scanf_s("%lf", &liczba4);

            srednia = (liczba1 + liczba2 + liczba3 + liczba4) / 4.0;

            printf("Srednia arytmetyczna z podanych liczb wynosi: %.2lf\n", srednia);
        }
        else if (numerZadania == 5)
        {
            char operacja;
            double liczba1, liczba2, wynik;

            printf("\nPodaj operacje (+, -, *, /): ");
            scanf_s(" %c", &operacja);

            printf("Podaj pierwsza liczbe: ");
            scanf_s("%lf", &liczba1);

            printf("Podaj druga liczbe: ");
            scanf_s("%lf", &liczba2);

            switch (operacja) {
            case '+':
                wynik = liczba1 + liczba2;
                printf("Wynik: %.2lf\n", wynik);
                break;
            case '-':
                wynik = liczba1 - liczba2;
                printf("Wynik: %.2lf\n", wynik);
                break;
            case '*':
                wynik = liczba1 * liczba2;
                printf("Wynik: %.2lf\n", wynik);
                break;
            case '/':
                if (liczba2 != 0) {
                    wynik = liczba1 / liczba2;
                    printf("Wynik: %.2lf\n", wynik);
                }
                else {
                    printf("Blad: Dzielenie przez zero.\n");
                }
                break;
            default:
                printf("Blad: Nieprawidlowa operacja.\n");
            }
        }
        else if (numerZadania == 0) {
            printf("\nKoniec programu.\n");
            break;
        }
        else {
            printf("Bledny numer zadania. Wybierz numer od 1 do 5.\n");
        }

    } while (1);
}