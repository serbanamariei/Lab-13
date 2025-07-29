#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include"functii.h"

void citire(FILE *f, int v[], int n)
{
	for(int i=0;i<n;++i)
		fscanf(f," %d",&v[i]);
}

void afisare(FILE *f, int v[], int n)
{
	for(int i=0;i<n;++i)
		fprintf(f," %d",v[i]);
	printf("\n");
}

void plata(double pl[], int com[][20], int pret[], int n, int m)
{
	for(int i=0;i<n;++i)
		pl[i]=0;
	for(int i=0;i<n;++i)
		for(int j=0;j<m;++j)
			pl[i]+=com[i][j]*pret[j];
}

void munca(FILE *f, double pl[], int n, int plata)
{
	fprintf(f,"Cat trebuie sa munceasca fiecare pitic:\n\n");
	for(int i=0;i<n;++i)
		fprintf(f,"Piticul %d trebuie sa munceasca teoretic %.2lf zile, practic %.0lf zile\n",i,pl[i]/plata,floor(pl[i]/plata)+1);
}
