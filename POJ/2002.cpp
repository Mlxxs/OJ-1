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
#define inf (1<<30)
#define Max 2000
using namespace std;

struct data
{
    int x, y;
} node[Max];

bool cmp(const data &a, const data &b)
{
    if (a.x == b.x) return a.y < b.y;
    return a.x < b.x;
}

int main()
{
    int n, i, j;
    while (scanf("%d", &n) && n)
    {
        for (i = 0; i < n; i ++)
            scanf("%d%d", &node[i].x, &node[i].y);
        sort(node, node + n, cmp);
        int ans = 0;
        for (i = 0; i < n; i ++)
            for (j = i + 1; j < n; j ++)
            {
                data tmp;
                tmp.x = node[i].x + node[i].y - node[j].y;
                tmp.y = node[i].y - node[i].x + node[j].x;
                if (!binary_search(node, node + n, tmp, cmp))
                    continue;
                tmp.x = node[j].x + node[i].y - node[j].y;
                tmp.y = node[j].y - node[i].x + node[j].x;
                if (!binary_search(node, node + n, tmp, cmp))
                    continue;
                ans ++;
            }
        printf("%d\n", ans / 2);
    }
    return 0;
}