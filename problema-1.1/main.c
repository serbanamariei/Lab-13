#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	printf("Cititi numele fisierului: ");
	char fnume[20];
	fgets(fnume,sizeof(fnume),stdin);
	if(fnume[strlen(fnume)-1]=='\n')
		fnume[strlen(fnume)-1]='\0';
	FILE *f=fopen(fnume,"w");
	fprintf(f,"Numele programului: %s\n",argv[0]);
	fprintf(f,"Nume student: Serban\n");

	return 0;
}
