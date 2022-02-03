//lab 3 gert bodlogo 2
#include<stdio.h>
main()
{
	int year, month, day;
	printf("Ta jilee oruulna uu!: ");
	scanf("%d",&year);
	printf("Ta saraa oruulna uu!: ");
	scanf("%d",&month);
	printf("Ta odroo oruulna uu!: ");
	scanf("%d",&day);
		if(year>2021)
			printf("Ireedui");
		else if(year<2021)
			printf("Ongorson");
		else if(year==2021)
		{
			if(month>2)
				printf("Ireedui");
			else if(month<2)
				printf("Ongorson");
			else if(month==2)
			{
				if(day>26)
				printf("Ireedui");
				else if(day<26)
				printf("Ongorson");
				else if(day==26)
				printf("Onoodor");
			}
		}
}
