#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"functii.h"

void citire(FILE *f, int v[], int n)
{
	for(int i=0;i<n;++i)
	{
		fscanf(f," %d",&v[i]);
	}
}

void citireR(FILE *f, double v[], int n)
{
	for(int i=0;i<n;++i)
		fscanf(f," %lf",&v[i]);
}

void afisareI(int v[], int n)
{
	printf("(");
	for(int i=0;i<n;++i)
		printf(" %d",v[i]);
	printf(" )\n");
}

void sumaI(int s[], int a[], int b[], int n)
{
	for(int i=0;i<n;++i)
	{
		s[i]=a[i]+b[i];
	}
}

void sumaR(double s[], double a[], double b[], int n)
{
	for(int i=0;i<n;++i)
	{
		s[i]=a[i]+b[i];
	}
}

void afisareR(double v[], int n)
{
	printf("( ");
	for(int i=0;i<n;++i)
	{
		printf(" %.2lf",v[i]);
	}
	printf(" )\n");
}

void valoare(double val[], int v[], double pret[], int n)
{
	for(int i=0;i<n;++i)
	{
		val[i]=v[i]*pret[i];
	}
}

void valoareTotala(double valT[], double val[], double procent, int n)
{
	for(int i=0;i<n;++i)
	{
		valT[i]=val[i]+val[i]*procent/100;
	}
}

double sumaVector(double v[], int n)
{
	double s=0;
	for(int i=0;i<n;++i)
		s+=v[i];
	return s;
}
