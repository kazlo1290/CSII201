// laboratory 10 gert bodlogo 2
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int check(char ner[], char kod[]);
char name[10][100] = {"bat","dorj","bold","tsetsgee"};
char code[10][100] = {"123456","password","pass247","justinbeaber"};
int main()
{
	char ner[100], kod[100];
	scanf("%s%s",ner,kod);
	if(check(ner,kod))
		printf("Taarch baina");
	else
		printf("Taarahgui baina"); 
}

int check(char ner[], char kod[])
{
	int i;
	for(i=0; i<4; i++)
	if(strcmp(ner,name[i]) == 0)
		if(strcmp(kod,code[i])==0)
			return 1;
	return 0;
} 
