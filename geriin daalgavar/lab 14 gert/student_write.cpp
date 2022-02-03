// laboratory 14 angid 4
#include<stdio.h>
typedef struct student
{
	char ner[20];
	char sisiId[20];
	int nas;
} oyutan;
int main()
{
	oyutan k[1000];
	FILE *file;
	file = fopen("student_file.txt", "wb");
	if(file == NULL)
	{
		printf("File neej chadsangui.");
		return 1;
	}
	int n, i;
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		scanf("%s",k[i].ner);
		scanf("%d",&k[i].nas);
		scanf("%s",k[i].sisiId);
	}
	fwrite(&k, sizeof(oyutan), n, file);
	fclose(file);
	return 0;
}
