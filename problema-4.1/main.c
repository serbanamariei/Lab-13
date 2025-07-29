#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"functii.h"

int main()
{
	int stocuri1[50], stocuri2[50];
	int stocuriSuma[50];
	double preturi[50];
	double valori1[50], valori2[50];
	double valoriSuma[50];
	double valoareT1[50], valoareT2[50];

	FILE *f=fopen("trioda.dat","r");
	if(f==0)
	{
		fprintf(stderr,"Fisierul nu a putut fi deschis\n");
		exit(EXIT_FAILURE);
	}

	int n;
	double procent;
	printf("Cu cat s-a scumpit valoarea stocurilor firmei: ");
	scanf("%lf",&procent);
	fscanf(f," %d",&n);
	citireR(f,preturi,n);
	citire(f,stocuri1,n);
	citire(f,stocuri2,n);
	printf("\nRaport inventar pentru firma Trioda.\n\n\n\n");
	printf("Firma trioda comercializeaza %d tipuri de componente electronice.\n\n",n);
	printf("Pret/bucatra pentru fiecare componenta electronica = ");
	afisareR(preturi,n);
	printf("\n\tStocuri magazin Trioda1 = ");
	afisareI(stocuri1,n);
	printf("\n\tStocuri magazin Trioda2 = ");
	afisareI(stocuri2,n);
	sumaI(stocuriSuma,stocuri1,stocuri2,n);
	printf("\n\t\tTotal stocuri firma = ");
	afisareI(stocuriSuma,n);
	valoare(valori1,stocuri1,preturi,n);
	valoare(valori2,stocuri2,preturi,n);
	printf("\n\tValoare stocuri magazin Trioda1 = ");
	afisareR(valori1,n);
	printf("\n\tValoare stocuri magazin Trioda2 = ");
	afisareR(valori2,n);
	valoareTotala(valoareT1,valori1,procent,n);
	valoareTotala(valoareT2,valori2,procent,n);
	sumaR(valoriSuma,valori1,valori2,n);
	printf("\n\t\tValoare stocuri firma = ");
	afisareR(valoriSuma,n);
	double suma=sumaVector(valoriSuma,n);
	printf("\nValoare totala marfa = %.2lf lei.\n\n",suma);
	printf("Valori dupa scumpirea de %.1lf%%:\n",procent);
	printf("\n\tValoare stocuri magazin Trioda1: ");
	afisareR(valoareT1,n);
	printf("\n\tValoare stocuri magazin Trioda2: ");
	afisareR(valoareT2,n);
	printf("\n\t\tValoare stocuri firma: ");
	double stocuriFirma[50];
	sumaR(stocuriFirma,valoareT1,valoareT2,n);
	afisareR(stocuriFirma,n);
	double sumaT=sumaVector(stocuriFirma,n);
	printf("\n\nValoarea totala marfa = %.2lf lei.\n\n\n\n",sumaT);
	
	printf("Sfarsit raport inventar.\n");

	return 0;
}
