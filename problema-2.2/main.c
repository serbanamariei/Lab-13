#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
	char nume[20]="final.c";
	
	FILE *f=fopen(nume,"w");
	if(f==0)
	{
		fprintf(stderr,"Fisierul nu a putut fi deschis\n");
		exit(EXIT_FAILURE);
	}
	
	for(int i=1;i<argc;++i)
	{
		char c;
		FILE *fisier=fopen(argv[i],"r");
		if(f==0)
		{
			fprintf(stderr,"Fisierul nu a putut fi deschis\n");
			exit(EXIT_FAILURE);
		}
		while((c=getc(fisier))!=EOF)
		{
			fprintf(f,"%c",c);
		}
		fprintf(f,"\n\n\n");

		fclose(fisier);
	}

	fclose(f);

	return 0;
}
