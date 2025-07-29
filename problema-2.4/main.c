#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(int argc, char *argv[])
{
	int n=atoi(argv[1]);

	FILE *f=fopen(argv[2],"w");
	if(f==0)
	{
		fprintf(stderr,"Fisierul nu a putut fi deschis\n");
		exit(EXIT_FAILURE);
	}

	printf("Cititi numerele: ");
	int nr,i=0;
	while(i<n)
	{
		scanf("%d",&nr);
		fprintf(f,"%d ",nr);
		i++;
		if(i%2==0) fprintf(f,"\n");
	}
	fclose(f);

	return 0;
}
