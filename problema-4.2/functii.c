#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include"functii.h"

void citire(FILE *f, double v[][20], int n, int m)
{
	for(int i=0;i<n;++i)
		for(int j=0;j<m;++j)
			fscanf(f," %lf",&v[i][j]);
}

void afisare(double v[][20], int n, int m)
{
	printf("\n");
	for(int i=0;i<n;++i)
	{
		printf("\t");
		for(int j=0;j<m;++j)
			printf("%6.3lf ",v[i][j]);
		printf("\n");
	}
}

double normaInfinit(double v[][20], int n, int m)
{
	double ni;
	int p=0;
	for(int i=0;i<n;++i)
	{
		double s=0;
		for(int j=0;j<m;++j)
			s+=fabs(v[i][j]);
		if(!p)
		{
			ni=s;
			p=1;
		}
		else
			if(s>ni)
				ni=s;
	}
	return ni;
}

double norma1(double v[][20], int n, int m)
{
	double n1;
	int p=0;
	for(int j=0;j<m;++j)
	{
		double s=0;
		for(int i=0;i<n;++i)
			s+=fabs(v[i][j]);
		if(!p)
		{
			n1=s;
			p=1;
		}
		else
			if(s>n1)
				n1=s;
	}
	return n1;
}

double norma2(double v[][20], int n, int m)
{
	double suma=0;
	for(int i=0;i<n;++i)
		for(int j=0;j<m;++j)
			suma+=fabs(v[i][j])*fabs(v[i][j]);
	return sqrt(suma);
}
