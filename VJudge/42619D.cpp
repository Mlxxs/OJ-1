#include <iostream>
#include <cstdio>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <deque>
#include <vector>
#include <list>
#include <queue>
#include <string>
#include <cstring>
#include <map>
#include <stack>
#include <set>

using namespace std;

int bin[1002];

int find(int x)
{
    int r=x;
    while(bin[r]!=r)
    {
        r=bin[r];
    }
    return r;
}

void merge(int x, int y)
{
    int fx,fy;
    fx=find(x);
    fy=find(y);
    if(fx!=fy)
    {
        bin[fx]=fy;
    }
}
int main()
{
    int n,m,i,x,y,count;
    while(scanf("%d", &n),n)
    {
        for(i=1;i<=n;i++)
        {
            bin[i]=i;
        }
        for(scanf("%d",&m);m>0;m--)
        {
            scanf("%d%d",&x,&y);
            merge(x,y);
        }
        for(count=-1,i=1;i<=n;i++)
        {
            if(bin[i]==i)   count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
