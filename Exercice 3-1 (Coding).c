#include <stdio.h>

int main() {
    int A, B, D;

    // Demander à l'utilisateur d'entrer les valeurs de A et B
    printf("Entrez la valeur de A : ");
    scanf("%d", &A);
    printf("Entrez la valeur de B : ");
    scanf("%d", &B);

    // Afficher les valeurs avant l'échange
    printf("Avant l'échange : A = %d, B = %d\n", A, B);

    // Échange des valeurs
    D = A;
    A = B;
    B = D;

    // Afficher les valeurs après l'échange
    printf("Après l'échange : A = %d, B = %d\n", A, B);

    return 0;
}