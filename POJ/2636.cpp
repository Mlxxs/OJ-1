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
using namespace std;

int main(int argc, char const *argv[])
{
    int N, K, O, ans;
    int i;
    scanf("%d", &N);
    while (N--)
    {
        ans = 0;
        scanf("%d", &K);
        for (i = 0; i < K; i++)
        {
            scanf("%d", &O);
            ans += O;
        }
        printf("%d\n", ans - K + 1);
    }
    return 0;
}
