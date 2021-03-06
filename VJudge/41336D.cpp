#include  <iostream>
#include  <cmath>

using namespace std;

bool isPrime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)  return false;
    }
    return true;
}

int main()
{
    int n;
    while(cin>>n&&n!=0)
    {
        if(isPrime(n))
        {
            cout<<0<<endl;
        }
        else
        {
            int x=n-1;
            int y=n+1;
            while(!isPrime(x))  x--;
            while(!isPrime(y))  y++;

            cout<<y-x<<endl;
        }
    }
    return 0;
}
