#include  <stdio.h>

int main()
{
    int  a, b;
    while(scanf("%x%x", &a, &b) != EOF)
          {
                if(a == 0 && b == 0)        return 0;
                printf("%d\n", a+b);
          }
    return 0;
}
