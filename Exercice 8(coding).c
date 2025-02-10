#include <stdio.h>

int main() {
int N ,i ; 

printf("Entrer un nombre entiers: ");
scanf("%d",&N);

if(N>=1){
for ( i=1 ; i<=N ;i++) { 
printf("%d.\n",i);
}
}else{
printf("Entrer un nombre superieur ou egal à 1.\n ");
}
return 0 ;
}