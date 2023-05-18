#include <stdio.h>
int main() {
	int i, acm=0;
	float media, soma=0;
    
	int vet[7];
	printf("Informe as temperaturas maximas dos ultimos sete dias: \n");
	for (i=0;i<7;i++){
    	scanf("%d", &vet[i]);
    }
    for (i=0;i<7;i++){
   	 soma=soma+vet[i];
    }
    media= soma/7;
    printf("A media das temperaturas e: %.2f \n", media);

    for (i=0;i<7;i++){
   	 if (vet[i]>media){
   	 		acm=acm+i;
  		  printf("a temperatura esteve acima da media: %d \n", vet[i]);
  	  }else
 			  printf ("a temperatura nao esteve acima da media \n");
	}

		printf("Dias: %d \n", acm);
}
