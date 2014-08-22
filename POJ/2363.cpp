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

int getarea(int a, int b, int c)
{
    return 2 * (a * b + b * c + a * c);
}

int main(int argc, char const *argv[])
{
    int a, b, c;
    int area, v, tmp;
    int ii, casenum;

    scanf("%d", &casenum);
    for (ii = 0; ii < casenum; ii++)
    {
        scanf("%d", &v);
        area = 1000000;
        for (a = 1; a <= sqrt(v); a++)
        {
            if (v % a == 0)
            {
                for (b = a; b <= sqrt(v); b++)
                {
                    if (v % b == 0)
                    {
                        c = v / a / b;
                        if (v % c == 0 && a * b * c == v)
                        {
                            tmp = getarea(a, b, c);
                            if (tmp < area)
                            {
                                area = tmp;
                            }
                        }
                    }
                }
            }
        }
        printf("%d\n", area);
    }
    return 0;
}
