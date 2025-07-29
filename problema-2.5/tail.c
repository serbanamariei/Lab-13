#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(int argc, char *argv[])
{
	int inceput=0;
	char c=argv[1][0];
	int i=0;
	while(c!='-')
	{
		inceput=inceput*10+(c-'0');
		i++;
		c=argv[1][i];
	}
	i++;
	c=argv[1][i];
	int final=0;
	while(c!='\0')
	{
		final=final*10+(c-'0');
		i++;
		c=argv[1][i];
	}
	char linii[50][50];
	int citite=0;
	printf("\nCititi liniile de text:\n\n");
	
	while(fgets(linii[citite],sizeof(linii[citite]),stdin)!=NULL && citite<50)
	{
		if(linii[citite][strlen(linii[citite])-1]=='\n')
			linii[citite][strlen(linii[citite])-1]='\0';
		citite++;
	}

	printf("\n\nLiniile alese de dvs:\n\n");
	for(int i=inceput-1;(i<=final-1) && (i<citite);++i)
	{
		puts(linii[i]);
	}
	
	printf("\n");

	return 0;
}
