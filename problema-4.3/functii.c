#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"functii.h"

void citire(FILE *f, int v[][22], int n, int m)
{
	for(int i=0;i<=n+1;++i)
		for(int j=0;j<=m+1;++j)
		{
			if(i==0 || j==0 || i==n+1 || j==m+1) v[i][j]=0;
			else
				fscanf(f," %d",&v[i][j]);
		}
}

void afisare(int v[][22], int n, int m)
{
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=m;++j)
			printf(" %d",v[i][j]);
		printf("\n");
	}
}

void parceleVarf(int v[][22], int n, int m)
{
	printf("Coordonatele punctelor varf (daca nu e niciuna inseamna ca nu exista):\n\n");
	for(int i=1;i<=n;++i)
		for(int j=1;j<=m;++j)
			if(v[i][j]>v[i][j-1] && v[i][j]>v[i-1][j] && v[i][j]>v[i][j+1] && v[i][j]>v[i+1][j])
				printf("(%d,%d) cu altitudinea %d\n",i-1,j-1,v[i][j]);
	printf("\n");
}
