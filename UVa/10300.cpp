#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <numeric>
#include <iomanip>
#include <bitset>
#include <sstream>
#include <fstream>
#define debug "output for debug\n"
#define pi (acos(-1.0))
#define eps (1e-8)
#define inf (1<<28)
#define ll long long int
using namespace std;

#define MAXN 20+10

int t,f,farm[MAXN],animals[MAXN],value[MAXN];
int ans;

void init()
{
    memset(farm,0,sizeof(farm));
    memset(animals,0,sizeof(animals));
    memset(value,0,sizeof(value));
    ans=0;
    scanf("%d", &f);
    for(int i=0;i<f;i++)
    {
        scanf("%d%d%d", &farm[i], &animals[i], &value[i]);
    }
}

int main(int argc, char const *argv[])
{
	scanf("%d", &t);
	while(t--)
    {
        init();
        for(int i=0;i<f;i++)
        {
            ans+=farm[i]*value[i];
        }
        printf("%d\n", ans);
    }
	return 0;
}
