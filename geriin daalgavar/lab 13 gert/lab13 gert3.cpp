#include<stdio.h>
int *find(int a[][100], int n, int m);
int main()
{
    int n, m, a[100][100], *p, i, k;
    scanf("%d%d",&n,&m);
    for(i=0; i<n; i++)
        for(k=0; k<m; k++)
            scanf("%d",&a[i][k]);
    p = find(a, n, m);
//    printf("%d %d ",p,*p);
    for(k=0; k<m; k++)
        printf("%d ",*(p+k));
}
int *find(int a[][100], int n, int m)
{
    int i, k, max, mor;
    max = a[0][0];
    for(i=0; i<n; i++)
    {
        for(k=0; k<m; k++)
        {
            if(max < a[i][k] && a[i][k]%2==0)
                {
                    max = a[i][k];
                    mor = i;
                }
        }
    }
    return a[mor]; // *(a+mor)
}
