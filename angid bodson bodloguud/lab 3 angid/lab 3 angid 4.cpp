// lab3-iin angid bodoh bodlogo 4
#include<stdio.h>
#include<math.h>
main()
{
	int x1, x2, x3, y1, y2, y3, max, min;
	int a, b, c;
	scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
	
	a = sqrt((x1 * x1) + (y1 * y1));
	b = sqrt((x2 * x2) + (y2 * y2));
	c = sqrt(pow(x3,2) + pow(y3,2));
	
	max = a;
	if(max < b)
	{
		max = b; min = a;
		if(min > c)
		min = c;
	}
	if(max < c)
	{
		max = c; min = b;
		if(min > a)
		min = a;
	}
	
	if(max == a && min == b)
		printf("hol=(x1,y1), oir=(x2,y2)");
	else if(max == a && min == c)
		printf("hol=(x1,y1), oir=(x3,y3)");
	else if(max == b && min == c)
		printf("hol=(x2,y2), oir=(x3,y3)");
	else if(max == b && min == a)
		printf("hol=(x2,y2), oir=(x2,y2)");
	else if(max == c && min == b)
		printf("hol=(x1,y1), oir=(x2,y2)");
	else if(max == c && min == a)
		printf("hol=(x3,y3), oir=(x1,y1)");
}
