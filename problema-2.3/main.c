#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
	if(argc==2)
	{
		char c;
		FILE *f=fopen(argv[1],"r");
		while((c=getc(f))!=EOF)
			printf("%c",c);
		printf("\n\n");
		fclose(f);
		return 0;
	}

	char c;
	FILE *f=fopen(argv[argc-1],"w");
	if(f==0)
	{
		fprintf(stderr,"Fisierul nu a putut fi deschis\n");
		exit(EXIT_FAILURE);
	}

	for(int i=1;i<argc-1;++i)
	{
		FILE *fisier=fopen(argv[i],"r");
		if(fisier==0)
		{
			fprintf(stderr,"Fisierul nu a putut fi deschis\n");
			exit(EXIT_FAILURE);
		}

		while((c=getc(fisier))!=EOF)
			fprintf(f,"%c",c);

		fprintf(f,"\n\n");
		fclose(fisier);
	}
	fclose(f);

	return 0;
}
