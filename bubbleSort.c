#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "bibliotecaSort.h"

void bsort(int v[], int n)
{
	int i,j;
	bool trocou = false;
	do{
		trocou = false;
		for(i=1;i<n;i++){
			for(j=0;j<(n-i);j++){
				if(v[j]>v[j+1]){
					troca(&v[j],&v[j+1]);
					trocou = true;
				}
			}
		}
	}while(trocou); //while(true);
}



int main(){
	int *vet, n,i;
	printf("Tamanho do vetor:");
	scanf("%d",&n);
	vet = malloc(sizeof(int)*n);// alocando o vetor dinamicamente
	geraVet(vet,n);
	printVetor(vet,n);
	bsort(vet,n);
	printf("Vetor ordenado:\n");
	printVetor(vet,n);

}
