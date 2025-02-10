#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;   // Coefficients de l'équation
    double discriminant, x1, x2; // Variables pour le discriminant et les solutions
double partie_reelle,partie_imaginaire;


    // Saisie des coefficients
    printf("Entrez les coefficients a, b et c de l'équation (ax^2 + bx + c = 0) :\n");
    printf("a : ");
    scanf("%lf", &a);
    printf("b : ");
    scanf("%lf", &b);
    printf("c : ");
    scanf("%lf", &c);

    // Vérification si 'a' est nul
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("L'équation est indéterminée (0 = 0).\n");
            } else {
                printf("L'équation est impossible (pas de solution).\n");
            }
        } else {
            // Équation linéaire (bx + c = 0)
            x1 = -c / b;
            printf("L'équation est linéaire avec une solution : x = %.2lf\n", x1);
        }
    } else {
        // Calcul du discriminant
        discriminant = b * b - 4 * a * c;

        // Analyse du discriminant
        if (discriminant > 0) {
            // Deux solutions réelles distinctes
            x1 = (-b + sqrt(discriminant)) / (2 * a);
            x2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Deux solutions réelles distinctes :\n");
            printf("x1 = %.2lf\n", x1);
            printf("x2 = %.2lf\n", x2);
        } else if (discriminant == 0) {
            // Une solution réelle double
            x1 = -b / (2 * a);
            printf("Une solution réelle double : x = %.2lf\n", x1);
        } else {
            partie_reelle=(-b)/(2*a) ;
            partie_imaginaire=sqrt(-discriminant)/(2*a) ;
            
            printf("x1:%.2lf +i%.\n",partie_reelle , partie_imaginaire);
            printf("x2:%.2lf +i% .\n",partie_reelle , partie_imaginaire);
            }
            }
            return 0;
            }
        