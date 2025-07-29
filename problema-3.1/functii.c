#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include"functii.h"

void citireVector(FILE *f, int v[], int n)
{
	for(int i=0;i<n;++i)
	{
		fscanf(f," %d",&v[i]);
	}
}

void afisareVector(FILE *f, int v[], int n)
{
	for(int i=0;i<n;++i)
		fprintf(f," %d",v[i]);
}

int valMax(int v[], int n)
{
	int max=v[0];
	for(int i=1;i<n;++i)
		if(v[i]>max)
			max=v[i];
	return max;
}

int valMin(int v[], int n)
{
	int min=v[0];
	for(int i=1;i<n;++i)
		if(v[i]<min)
			min=v[i];
	return min;
}

double mediaAritmetica(int v[], int n)
{
	int s=0;
	for(int i=0;i<n;++i)
		s+=v[i];
	return (double)s/n;
}

double mediaGeometrica(int v[], int n)
{
	double mg=1;
	for(int i=0;i<n;++i)
		mg*=v[i];
	return pow(mg,1.0/n);
}
