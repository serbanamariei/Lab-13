#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"functii.h"

int main(int argc, char *argv[])
{
	FILE *f=fopen(argv[1],"r");
	if(f==0)
	{
		fprintf(stderr,"Fisierul nu a putut fi deschis\n");
		exit(EXIT_FAILURE);
	}
	FILE *g=fopen("raport.dat","w");
	if(g==0)
	{
		fprintf(stderr,"Fisierul nu a putut fi deschis\n");
		exit(EXIT_FAILURE);
	}

	int temp[31];
	char luna[20];
	fgets(luna,sizeof(luna),f);
	if(luna[strlen(luna)-1]=='\n')
		luna[strlen(luna)-1]='\0';
	int n;
	fscanf(f," %d",&n);
	citireVector(f,temp,n);
	fprintf(g,"Raport de temperatura pentru ultimele %d zile din luna %s.\n\n",n,luna);
	fprintf(g,"Temperaturile citite sunt:");
	afisareVector(g,temp,n);
	fprintf(g,".\n");
	fprintf(g,"\n\tValoarea maxima a temperaturii este: %d.\n",valMax(temp,n));
	fprintf(g,"\n\tValoarea minima a temperaturii este: %d.\n",valMin(temp,n));
	fprintf(g,"\n\tValoarea medie a temperaturii este: %.3lf.\n",mediaAritmetica(temp,n));
	fprintf(g,"\n\tMedia geometrica a temperaturii este %.4lf.\n",mediaGeometrica(temp,n));
	fprintf(g,"\n\n\nFinal raport.");

	return 0;
}
