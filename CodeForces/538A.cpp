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

string a;
string banner = "CODEFORCES";

int main(int argc, char const *argv[])
{
    cin >> a;
    int l = 0, r = 0;
    const int N = a.size();
    while (l < min(10, N) && a[l] == banner[l]) l++;
    while (r < min(10, N) && a[N - r - 1] == banner[10 - r - 1])    r++;
    cout << (((l + r) >= 10) ? "YES" : "NO");
    return 0;
}