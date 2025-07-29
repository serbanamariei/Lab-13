#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"functii.h"

int main(int argc, char *argv[])
{
	FILE *f=fopen(argv[1],"r");
	if(f==0)
	{
		fprintf(stderr,"Fisierul nu a putut fi deschis\n");
		exit(EXIT_FAILURE);
	}

	int n,m;
	fscanf(f,"%d %d",&n,&m);
	int altitudini[22][22];
	citire(f,altitudini,n,m);
	printf("Terenul dvs:\n\n");
	afisare(altitudini,n,m);
	printf("\n");
	parceleVarf(altitudini,n,m);

	return 0;
}
