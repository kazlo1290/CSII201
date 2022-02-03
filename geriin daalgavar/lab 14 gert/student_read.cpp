// laboratory 14 angid 4
#include<stdio.h>
typedef struct student
{
	char ner[20];
	char sisiId[20];
	int nas;
} oyutan;
void student_read(int n);
int main()
{
	int n, i;
	scanf("%d",&n);
	student_read(n);
	return 0;
}
void student_read(int n)
{
	oyutan k[1000];
	FILE *file;
	file = fopen("student_file.txt", "rb");
	if(file == NULL)
		printf("File neej chadsangui");
	int i;
	fread(k, sizeof(oyutan), n, file);
	for(i=0; i<n; i++)
	{
		printf("%s ",k[i].ner);
		printf("%d ",k[i].nas);
		printf("%s \n",k[i].sisiId);
	}
}
