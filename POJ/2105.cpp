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

char str[50];
int bin[10] = {128, 64, 32, 16, 8, 4, 2, 1};

int IPAddress(char str[])
{
    int sum = 0;
    int i;
    for (i = 0; i < 8; i++)
    {
        if (str[i] == '1')
        {
            sum += bin[i];
        }
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    int casenum, ii;

    scanf("%d", &casenum);
    getchar();
    for (ii = 0; ii < casenum ; ii++)
    {
        gets(str);
        printf("%d.%d.%d.%d\n", IPAddress(str), IPAddress(str + 8), IPAddress(str + 16), IPAddress(str + 24));
    }
    return 0;
}
