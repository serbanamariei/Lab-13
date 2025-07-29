#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
	int nr[20];
	char nume[20];

	strcpy(nume,argv[1]);

	printf("Cititi numerele (0-terminati): ");
	int i=0,s=0;
	scanf("%d",&nr[i]);
	while(nr[i])
	{
		s+=nr[i];
		i++;
		scanf(" %d",&nr[i]);
	}

	FILE *f=fopen(nume,"w");
	if(f==0)
	{
		fprintf(stderr,"Fisierul nu a putut fi deschis\n");
		exit(EXIT_FAILURE);
	}

	fprintf(f,"Suma numerelor din vector: %d\n",s);

	return 0;
}
