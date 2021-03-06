#include <stdio.h>

int data[10010] = {0};

int sum(int num)
{
    int ans = 0;
    while (num > 0)
    {
        ans += num % 10;
        num /= 10;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int i = 0;
    for (i = 1; i < 10001; ++i)
    {
        data[i + sum(i)] = 1;
    }
    for (i = 1; i < 10001; ++i)
    {
        if (!data[i])
        {
            printf("%d\n", i);
        }
    }
}
