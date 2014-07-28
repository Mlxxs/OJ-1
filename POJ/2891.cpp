#include  <cstdio>
#include  <iostream>
#include  <cstring>

using namespace std;

typedef long long int big;

big egcd(big a, big b, big &x, big &y )
{
    big t, ret;
    if (!b)
    {
        x = 1;
        y = 0;
        return a;
    }
    ret = egcd(b, a % b, x, y);
    t = x, x = y, y = t - a / b * y;
    return ret;
}

int main()
{
    int k;
    big a1, r1, a2, r2;
    big d, x, y;
    while (scanf("%d", &k) != EOF)
    {
        bool flag = false;
        scanf("%I64d%I64d", &a1, &r1);
        for (int i = 2; i <= k; ++i)
        {
            scanf("%I64d%I64d", &a2, &r2);
            if (flag)    continue;
            d = egcd(a1, a2, x, y);
            if ((r2 - r1) % d)   flag = true;
            a2 = a2 / d;
            r1 = ((x * ((r2 - r1) / d) % a2 + a2) % a2) * a1 + r1;
            a1 = a2 * a1;
        }
        if (flag)    printf("-1\n");
        else    printf("%I64d\n", r1 % a1);

    }
    return 0;
}