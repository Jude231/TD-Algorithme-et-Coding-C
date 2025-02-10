#include <stdio.h>

int main() {
int N , I ;
printf("Entrer le nombre N: ");
scanf("%d", &N);

if(N>1){
printf("les nombres paires de 1 jusqu'a %d sont: \n",N);
for(I=1 ; I<=N; I++){
if(I%2==0)
printf("%d \n",I);
}
}else{
printf("Entrer un nombre superieur a 1 .\n");
}
return 0 ;
}