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
#define ll long long int
const double pi = acos(-1.0);
const double eps = (1e-8);
const int inf = 1 << 20;
using namespace std;

char x;
int a1;
ll ans;
ll a[4];

void init()
{
	memset(a, 0, sizeof(a));
	a1 = 0;
	for (int i = 0; i < 4; i++)
	{
		cin >> a[i];
	}
	sort(a, a + 4);
}

int main(int argc, char const * argv[])
{
	init();
	cout << ans;
	return 0;
}