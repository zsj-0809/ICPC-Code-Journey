#include <bits/stdc++.h>
using namespace std;
long long fastPowMod(long long a, long long b, long long p){
    long long res=1;
    a%=p;                     
    while(b){
        if(b&1)res=(res*a)%p;//如果当前b的最低位为1
        a=(a*a)%p;//将当前底数乘入结果,并取模
        b>>=1;//指数右移一位,相当于b/=2
    }
    return res;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int a,b,p;
	cin>>a>>b>>p;
	cout<<a<<"^"<<b<<" mod "<<p<<"="<<fastPowMod(a,b,p);
	return 0;
}
