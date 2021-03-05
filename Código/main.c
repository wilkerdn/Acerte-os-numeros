#include <stdio.h>
#include <stdlib.h>
int main(){
	int *escolha;
	int sorteio[20];
	int i,k,j,acertos=0,aux;
	escolha = calloc(20, sizeof (int*));

	for(i=0;i<20;i++){
	    printf("Digite um numero de 0 a 100: \n");
		scanf("%d",&aux);
		escolha[i] = aux;
	}

	for(i=0;i<20;i++){
		sorteio[i] = rand()%100;
	}

	for(i=0;i<20;i++){
		printf("%d ",sorteio[i]);
	}

	printf("\n");

	for(i=0;i<20;i++){
		for(j=0;j<20;j++){
			if(sorteio[i]==escolha[j]){
				acertos ++;
			}
		}
	}

	int numeros[acertos];
    k = 0;

	for(i=0;i<20;i++){
		for(j=0;j<20;j++){
			if(sorteio[i]==escolha[j]){
				numeros[k++]=sorteio[i];
			}
		}
	}


	printf("%d acertos\n",acertos);
    printf("Numeros acertados: ");
	for(i=0;i<acertos;i++){
		printf("%d ",numeros[i]);
	}

	free(escolha);
	return 0;
}
