// laboratory 14 angid 3
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
	int t, i, s;
	char p;
	FILE *file;
	file = fopen("count.txt", "r");
	if(file == NULL)
	{
		printf("File neej chadsangui.");
		return 1;
	}
	i = 0;
	t = 0;
	while(!feof(file))
	{
		t++;
		fscanf(file, "%c", &p);
	}
	printf("size=%d",t);
	fclose(file);
	return 0;
}
