/*
* this code is made by qcyclone
* Problem: 1732
* Verdict: Accepted
* Submission Date: 2015-05-15 17:08:50
* Time: 3988MS
* Memory: 14240KB
*/
#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include<stack>
#define inf 0x3f3f3f3f
#define bug puts("bugbugbug");
typedef long long ll;
using namespace std;
#define eps 1e-8
#define MAXN 100000000
char Is[MAXN>>3];
struct add
{
    int val,co;
    bool operator<(const add&u) const
    {
        return val<u.val;
    }
}ad[11111];
struct  node
{
    ll val,id,res;
}Q[11111];
bool cmp1(node a,node b)
{
    return  a.val<b.val;
}
bool cmp2(node a,node b)
{
    return a.id<b.id;
}
void set_prime(int x)
{
    int t1 = x&7;
    int t2 = x>>3;
    Is[t2]|=(1<<t1);
}
int get_prime(int x)
{
    int t1 = x&7;
    int t2 = x>>3;
    int ret = Is[t2]&(1<<t1);
    return ret==0;
}
int adcnt=0;
void prime(int x)
{
    memset(Is,0,sizeof(Is));
    set_prime(0);
    set_prime(1);
    for(int i=2;i*i<x;i++)
    {
        if(!get_prime(i))   continue;  //��������
        ll j=i*i;
        while(j<MAXN)
        {
            set_prime(j);
            j+=i;
        }
        ll t=i*i;
        while(t<=MAXN)
        {
            ad[adcnt].val=t;
            ad[adcnt++].co=i;
            t=t*i;
        }
    }
}
int main(){
    prime(MAXN);
    sort(ad,ad+adcnt);
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        scanf("%d",&Q[i].val);
        Q[i].id=i;
    }
    sort(Q,Q+T,cmp1);
    int now=0,qi=0;
    unsigned int ans=1;
    for(int i=2;i<MAXN;i++){
         if(get_prime(i))
            ans=(ans*i);
        if(now<adcnt && ad[now].val==i)
            ans=(ans*ad[now++].co);
        while(qi<T && Q[qi].val==i){
            Q[qi++].res=ans;
        }
    }
    sort(Q,Q+T,cmp2);
    for(int i=0;i<T;i++)
        printf("%u\n",Q[i].res);
    return 0;
}
