//lab 3 gert bodlogo 1
#include<stdio.h>
main()
{
	int n;
	printf("n=");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("Ogson too tegsh too\n");
		if(n%10==0 && n%4==0)
		printf("n too 10 ba 4-t huvaagdana\n",n);
		if(n%2==0 && n%8==0)
		printf("n too 2 ba 8-t huvaagdana",n);
	}
	else
	{
		printf("Ogson too sondgoi too\n");
		if(n%3==0 && n%7==0)
		printf("n too 3 ba 7-t huvaagdana\n",n);
		if(n%5==0 && n%9==0)
		printf("n too 5 ba 9-t huvaagdana",n);
	}
		
}
