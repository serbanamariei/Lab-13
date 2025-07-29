#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
	char nume[20];
	strcpy(nume,argv[1]);

	FILE *f=fopen(nume,"r");
	if(f==0)
	{
		fprintf(stderr,"Fisierul nu a putut fi deschis\n");
		exit(EXIT_FAILURE);
	}

	printf("Continutul fisierului %s este:\n",nume);
	char c;
	while((c=getc(f))!=EOF) printf("%c",c);

	return 0;
}
