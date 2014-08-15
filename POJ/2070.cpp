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
using namespace std;


char str[3][50] = {"Wide Receiver", "Lineman", "Quarterback"};
double speed[3] = {4.5, 6.0, 5.0};
int weight[3] = {150, 300, 200};
int strength[3] = {200, 500, 300};

int main(int argc, char const *argv[])
{
    double x;
    int y, z;
    int i, flag = 0;
    while (scanf("%lf%d%d", &x, &y, &z), x != 0.0 || y != 0 || z != 0)
    {
        flag = 0;
        for (i = 0; i < 3; i++)
        {
            if (speed[i] >= x)
            {
                if (weight[i] <= y && strength[i] <= z)
                {
                    printf("%s ", str[i]);
                    flag = 1;
                }
            }
        }
        if (flag == 0)
        {
            printf("No positions");
        }
        printf("\n");
    }
    return 0;
}
