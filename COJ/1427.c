#include   <stdio.h>


int main()
{
    int n, i, a[100], b[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++)     scanf("%x%x", &a[i],&b[i]);
    for (i = 0; i < n; i++)     printf("%d\n", a[i]+b[i]);
    return 0;
}
