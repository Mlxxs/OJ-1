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
#define debug puts("-----")
#define pi (acos(-1.0))
#define eps (1e-8)
#define inf (1<<28)
#define ll long long int
using namespace std;

#define MAXN 20+10

char a[MAXN];

int main(int argc, char const *argv[])
{
    scanf("%s", a);
    if(a[0]>='5'&&a[0]!='9')	a[0]='0'+'9'-a[0];
    for(int i=1;i<strlen(a);i++)
    {
    	if(a[i]>='5')	a[i]='0'+'9'-a[i];
    }
    cout<<a;
    return 0;
}
