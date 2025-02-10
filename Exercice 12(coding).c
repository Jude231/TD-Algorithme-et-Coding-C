#include <stdio.h> 
int main() {
int somme=0 , N , I ;

printf("Entrer le nombre N: ");
scanf("%d",&N);

if(N>=1){
for(I=1;I<=N;I++){
somme+=I;
}
printf("la somme de 1 jusqu'a %d : %d\n" , N,somme);
}else{
printf("veuillez entrer un nombre superieur a 1\n");
}
return 0 ;
}