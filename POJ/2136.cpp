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

int main(int argc, char const *argv[])
{
    char ch;
    int i, j;
    int a[27], b[300][27], m[300];
    memset(a, 0, sizeof(a));
    while (~scanf("%c", &ch))
        if (ch <= 'Z' && ch >= 'A') a[ch - 'A']++;
    int maxlen = 0;
    for (i = 0; i < 26; i++)
    {
        if (a[i] > maxlen) maxlen = a[i];
    }
    for (i = 0; i < 26; i++)
        for (j = a[i]; j > 0; j--)
            b[j][i] = 1;
    for (i = maxlen; i > 0; i--)
        for (j = 25; j >= 0; j--)
        {
            if (b[i][j] == 1)
            {
                m[i] = j;
                break;
            }
        }
    for (i = maxlen; i > 0; i--)
    {
        for (j = 0; j <= m[i]; j++)
        {
            if (b[i][j] == 1) printf("*");
            else printf(" ");
            if (j == m[i]) printf("\n");
            else printf(" ");
        }
    }
    for (i = 0; i < 25; i++)
        printf("%c ", (char)(i + 'A'));
    printf("%c\n", (char)(i + 'A'));
    return 0;
}
