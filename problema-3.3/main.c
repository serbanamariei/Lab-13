#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"functii.h"

int main()
{
	FILE *f=fopen("PITICI.IN","r");
	if(f==0)
	{
		fprintf(stderr,"Fisierul nu a putut fi deschis\n");
		exit(EXIT_FAILURE);
	}
	FILE *g=fopen("PITICI.OUT","w");
	if(g==0)
	{
		fprintf(stderr,"Fisierul nu a putut fi deschis\n");
		exit(EXIT_FAILURE);
	}
	int plataPerZi;
	fscanf(f,"%d",&plataPerZi);
	int n,m;
	fscanf(f," %d %d",&n,&m);
	int pitici[20][20],comenzi[20][20],pret[20];
	for(int i=0;i<n;++i)
		citire(f,pitici[i],m);
	double pl[20];
	citire(f,pret,m);
	for(int i=0;i<n;++i)
		citire(f,comenzi[i],m);
	plata(pl,comenzi,pret,n,m);
	printf("Plata pe zi: %d\n",plataPerZi);
	fprintf(g,"Plata pe zi: %d\n",plataPerZi);
	printf("Nr de pitici: %d si nr de rafturi: %d\n",n,m);
	fprintf(g,"Nr de pitici: %d si nr de rafturi: %d\n",n,m);
	printf("\nStocurile fiecarui pitic inainte de comanda:\n\n");
	fprintf(g,"\nStocurile fiecarui pitic inainte de comanda:\n\n");
	for(int i=0;i<n;++i)
	{
		printf("Piticul %d: ",i+1);
		fprintf(g,"Piticul %d: ",i+1);
		for(int j=0;j<m;++j)
		{
			printf("%d ",pitici[i][j]);
			fprintf(g,"%d ",pitici[i][j]);
		}
		printf("\n");
		fprintf(g,"\n");
	}
	printf("\nPretul fiecarui produs:");
	fprintf(g,"\nPretul fiecarui produs:");
	for(int i=0;i<m;++i)
	{
		printf(" %d",pret[i]);
		fprintf(g," %d",pret[i]);
	}
	printf("\n\n");
	fprintf(g,"\n");
	printf("\nComenzile fiecarui pitic:\n\n");
	fprintf(g,"\nComenzile fiecarui pitici:\n\n");
	for(int i=0;i<n;++i)
	{
		printf("Piticul %d: ",i+1);
		fprintf(g,"Piticul %d: ",i+1);
		for(int j=0;j<m;++j)
		{
			printf("%d ",comenzi[i][j]);
			fprintf(g,"%d ",comenzi[i][j]);
		}
		printf("\n");
		fprintf(g,"\n");
	}

	printf("\nStocurile piticilor dupa sosirea starostelui cu comanda:\n\n");
	fprintf(g,"\nStocurile piticilor dupa sosirea starostelui cu comanda:\n\n");
	for(int i=0;i<n;++i)
	{
		printf("Piticul %d: ",i+1);
		fprintf(g,"Piticul %d: ",i+1);	
		for(int j=0;j<m;++j)
		{
			printf("%d ",pitici[i][j]+comenzi[i][j]);
			fprintf(g,"%d ",pitici[i][j]+comenzi[i][j]);
		}
		printf("\n");
		fprintf(g,"\n");
	}

	fprintf(g,"\nCat trebuie sa plateasca fiecare pitic in parte:\n");
	for(int i=0;i<n;++i)
	{
		fprintf(g,"\nPiticul %d: %.2lf\n",i+1,pl[i]);
	}

	munca(g,pl,n,plataPerZi);

	fclose(f);
	fclose(g);

	return 0;
}
