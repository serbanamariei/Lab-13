#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"functii.h"

int main()
{
	int n;
	FILE *f=fopen("fisier.dat","r");
	if(f==0)
	{
		fprintf(stderr,"Fisierul nu a putut fi deschis\n");
		exit(EXIT_FAILURE);
	}

	fscanf(f,"%d",&n);
	int nr[30];
	citire(f,nr,n);
	
	getc(f);
	char nume[20];
	fgets(nume,sizeof(nume),f);
	if(nume[strlen(nume)-1]=='\n')
		nume[strlen(nume)-1]='\0';
	FILE *g=fopen(nume,"w");
	if(g==0)
	{
		fprintf(stderr,"Fisierul nu a putut fi deschis\n");
		exit(EXIT_FAILURE);
	}

	printf("Numere din vectorul initial:");
	afisare(g,nr,n);

	return 0;
}
