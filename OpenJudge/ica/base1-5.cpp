#include  <cstdio>
using namespace std;

int main()
{
    int n,a;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &a);
        if(a%2!=0)  printf("0 0\n");
        else
        {
            if(a%4==0)
                printf("%d %d\n", a/4, a/2);
            else if((a%4!=0)&&(a%2==0))
                printf("%d %d\n", a/4+1, a/2);
        }
    }
    return 0;
}
