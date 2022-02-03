// laboratory 14 angid 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	int i, s, a;
	for(i=1, s=0; i<=argc; i++)
		s = s + atoi(argv[i]);
		//s = s + argv[i] - 48;
	printf("Niilber: %d",s);
	return 0;
}
