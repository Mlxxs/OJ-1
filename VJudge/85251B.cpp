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

typedef long long int ll;
const double pi = acos(-1.0);
const double eps = 1e-8;
const int inf = 0x3f3f3f3f;
const ll INF = 0x3f3f3f3f3f3f3f3fLL;
using namespace std;


int n, k;

bool ok()
{
    int i = 1, t;
    while (i * i < k * (k - 1) / 2)    ++i;
    for (; i * i < n; ++i)
    {
        t = n - i * i;
        if (t > k) return true;
        if (t < k)
        {
            if (k * (k + 1) / 2 <= n)   return true;
        }
        else
        {
            if (n != k * (k + 1) / 2 + 1)  return true;
        }
    }
    return false;
}

int main()
{
    while (~scanf("%d%d", &n, &k))
    {
        ok() ? puts("YES") : puts("NO");
    }
    return 0;
}