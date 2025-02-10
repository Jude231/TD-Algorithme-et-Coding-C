#include <stdio.h>

int main() {
    int N ,i;
    double S = 0.0, fact = 1.0;

    // Lire la valeur de N
    printf("Entrez un nombre N : ");
    scanf("%d", &N);

    // Calcul de la somme des inverses des factorielles
    for ( i = 1; i <= N; i++) {
        fact *= i; 
        S += 1.0 / fact; 
    }

    // Affichage du résultat
    printf("La somme S est : %.6f\n", S);

    return 0;
}