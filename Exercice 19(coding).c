#include <stdio.h>

int main() {
    int n1, n2 ,i;
    int estPremier1 = 1, estPremier2 = 1; // 1 = vrai, 0 = faux

    // Étape 1 : Lire les deux nombres
    printf("Entrez le premier nombre : ");
    scanf("%d", &n1);
    printf("Entrez le deuxième nombre : ");
    scanf("%d", &n2);

    // Étape 2 : Vérifier si le premier nombre est premier
    if (n1 <= 1) {
        estPremier1 = 0;
    } else {
        for (i = 2; i < n1; i++) {
            if (n1 % i == 0) {
                estPremier1 = 0; // Faux
                break; 
            }
        }
    }

    // Affichage du résultat pour n1
    if (estPremier1==1)
        printf("%d est un nombre premier.\n", n1);
    else
        printf("%d n'est pas un nombre premier.\n", n1);

    // Étape 3 : Vérifier si le deuxième nombre est premier
    if (n2 <= 1) {
        estPremier2 = 0;
    } else {
        for (i = 2; i < n2; i++) {
            if (n2 % i == 0) {
                estPremier2 = 0;
                break;
            }
        }
    }

    // Affichage du résultat pour n2
    if (estPremier2==1)
        printf("%d est un nombre premier.\n", n2);
    else
        printf("%d n'est pas un nombre premier.\n", n2);

    return 0;
}
