#include <stdio.h>

int main() {
   long int liczba, silnia=1;
    printf("podaj liczbę do obliczenia silni (od 0 do 15): ");
    scanf(" %li", &liczba);
    if (liczba >=0 && liczba <=15) {
        for (int i=1; i<=liczba; i++){
            silnia = silnia*i;
                    }
                    printf("%li", silnia);
    } else {
        printf ("podano złą wartość");
    }
    return 0;
}