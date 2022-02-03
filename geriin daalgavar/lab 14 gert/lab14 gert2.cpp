// laboratory 14 angid 2
#include<stdio.h>
main()
{
	int a, b;
	FILE *input, *output;
	input = fopen("input.txt", "r");
	output = fopen("output.txt","w");
	if(input == NULL)
	{
		printf("File neej chadsangui.");
		return 1;
	} 
	fscanf(input,"%d%d",&a,&b);
	fprintf(output,"%d",a+b);
	fclose(input);
	fclose(output);
	return 0;
}
