#include <stdio.h>

int main() {
    int N,i
    double S = 0.0; // Utilisation de double pour la précision des divisions

    // Lire la valeur de N
    printf("Entrez un nombre N : ");
    scanf("%d", &N);

    // Calcul de la somme
    for (i = 1; i <= N; i++) {
        S += 1.0 / i;
    }

    // Affichage du résultat
    printf("La somme S est : %.6f\n", S);

    return 0;
}