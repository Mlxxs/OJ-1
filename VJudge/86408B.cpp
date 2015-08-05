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



const int NP = 10000005;
int a[NP];
int ispri[NP] = {}, prime[NP], pcnt = 0;
void getprime()
{
    ispri[0] = ispri[1] = 1;
    for (long long i = 2; i < NP; i++)
        if (ispri[i] == 0)
        {
            prime[++pcnt] = i;
            for (long long j = i * i; j < NP; j += i)
                ispri[j] = 1;
        }
}

ll cal(ll n)
{
    if (n < NP && ispri[n])
    {
        a[0] = n;
        return 1;
    }
    int i = 0; // 循环标志
    int len = 0;
    // n>=2才执行下面的循环
    for (i = 2; i <= n; i++) {
        while (n != i) {
            if (n % i == 0) {
                a[len++] = i;
                n = n / i;
            } else
                break;
        }
    }
    a[len++] = n;
    return len;
}

ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int t;
ll x, y, k;

int main()
{
    getprime();
    scanf("%d", &t);
    while (t--)
    {
        scanf("%I64d%I64d%I64d", &x, &y, &k);
        ll num = gcd(x, y);
        int len = cal(num);
        // cout << len << endl;
        // for (int i = 0; i < len; i++)  cout << a[i] << " ";
        // cout << endl;
        if (k > len)   printf("-1\n");
        else
        {
            ll ans = 1;
            for (int i = len - 1; i >= k - 1; i--)
            {
                ans *= a[i];
            }
            printf("%I64d\n", ans);
        }
    }
    return 0;
}