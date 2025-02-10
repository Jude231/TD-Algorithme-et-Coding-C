#include <stdio.h> 

int main() {
int nombre ;
printf("Entrer un nombre: ");
scanf("%d",&nombre);

if(nombre>0) {
printf("Le nombre est positif.\n");
}else{
printf("Le nombre est negatif.\n");
}
return 0;
}
