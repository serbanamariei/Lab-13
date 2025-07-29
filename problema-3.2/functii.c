#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"functii.h"

void citire(FILE *f, int v[], int n)
{
	for(int i=0;i<n;++i)
	{
		fscanf(f," %d",&v[i]);
	}
}

void ordonare(int v[], int n)
{
	for(int i=0;i<n-1;++i)
		for(int j=i+1;j<n;++j)
			if(v[i]>v[j])
			{
				int aux=v[i];
				v[i]=v[j];
				v[j]=aux;
			}
}

void afisare(FILE *g, int v[], int n)
{
	fprintf(g,"Numerele din vectorul initial:");
	for(int i=0;i<n;++i)
	{
		printf(" %d",v[i]);
		fprintf(g," %d",v[i]);
	}
	printf("\n");
	fprintf(g,"\n");
	ordonare(v,n);
	fprintf(g,"\nNumerele din vectorul ORDONAT:");
	for(int i=0;i<n;++i)
		fprintf(g," %d",v[i]);
}
