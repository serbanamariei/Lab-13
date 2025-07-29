#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"functii.h"

int main()
{
	double valori[20][20];
	int n,m;
	int alegere;
	FILE *f=fopen("matriceIn.dat","r");
	if(f==0)
	{
		fprintf(stderr,"Fisierul nu a putut fi deschis\n");
		exit(EXIT_FAILURE);
	}
	fscanf(f,"%d %d",&n,&m);
	citire(f,valori,n,m);
	printf("Matricea dvs:");
	afisare(valori,n,m);
	printf("\nAlegeti ce doriti sa faceti:\n\n");
	printf("1) Norma infinit\n");
	printf("2) Norma 1\n");
	printf("3) Norma 2\n");
	printf("alegere --> ");
	scanf("%d",&alegere);

	switch(alegere){
		case 1:{
				   printf("Norma infinit este %.3lf\n",normaInfinit(valori,n,m));
			   }
		break;
		case 2:{
				   printf("Norma 1 este %.3lf\n",norma1(valori,n,m));
			   }
		break;
		case 3:{
				   printf("Norma 2 este %.3lf\n",norma2(valori,n,m));
			   }
		break;
		default: printf("Alegere invalida\n");
		break;
	}

	return 0;
}
