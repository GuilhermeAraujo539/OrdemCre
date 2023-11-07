#include <stdio.h>
#include <stdlib.h>

int main(){
int vetor[7];
int i,j, temp;

for (i=0;i<7;i++){
printf ("digite o valor para o vetor %d\n",i);
scanf ("%d",&vetor[i]);
}

for (i=0;i<7;i++){
	for (j=i+1;j<7;j++){
		if (vetor[i]>vetor[j]){

		temp=vetor[i];
		vetor[i]=vetor[j];
		vetor[j]=temp;
}
}
}


printf ("valores em ordem crescente:\n");
	for(i=0;i<7;i++){
		printf("%d\n", vetor[i]);
}
return 0;
}

