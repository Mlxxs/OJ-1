#include <iostream>

using namespace std;

char ext[2600000] = {0};
int a[500001];

void reset()
{
    int i;
    a[0] = 0;
    ext[0] = 1;
    for (i = 1; i <= 500000; i++)
    {
        a[i] = a[i - 1] - i;
        if (a[i] < 0 || ext[a[i]])
        {
            a[i] = a[i - 1] + i;
        }
        ext[a[i]] = 1;
    }
}

int main(int argc, char const *argv[])
{
    int k;
    reset();
    while (cin >> k && k != -1)
    {
        cout << a[k] << endl;
    }
    return 0;
}