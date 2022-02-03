#include<stdio.h>
void read(int *begin, int *end);
void print(int *begin, int *end);
main()
{
    int i, a[100];
    read(a, a+4);
    print(a, a+4);
}
void read(int *begin, int *end)
{
    int n, i;
    n = end - begin + 1;
    for(i=0; i<n; i++)
        scanf("%d",begin+i);
}
void print(int *begin, int *end)
{
    int n, i;
    n = end - begin + 1;
    for(i=0; i<n; i++)
        printf("%d ",*(begin+i));
}
