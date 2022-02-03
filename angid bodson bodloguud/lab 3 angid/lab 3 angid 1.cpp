// lab3-iin angid bodoh bodlogo 1a
#include<stdio.h>

main()
{
	int n;
	scanf("%d",&n);
	if( n%400==0 )
		printf("Ondor jil mon");
	else if( n%4==0 && n%100!=0 )
		printf("Ondor jil mon");
	else 
		printf("Ondor jil bish");
}
