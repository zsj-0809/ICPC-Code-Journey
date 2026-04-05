#include<bits/stdc++.h>
using namespace std;
bool isprime[100000010];
int prime[6000010],cnt=0;
void GetPrime(int n)
{
	memset(isprime, 1, sizeof(isprime));
	isprime[1]=0;
	for(int i=2;i<=n;i++){
		if(isprime[i])
		prime[++cnt]=i;
		for(int j=1;j<=cnt&&i*prime[j]<=n;j++){
			isprime[i*prime[j]]=0;
			if(i%prime[j]==0)break;
		}
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    GetPrime(200010);//注意筛选的范围
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;++i){
            cout<<1ll*prime[i]*prime[i+1]<<" ";//注意加上1ll
        }
        cout<<'\n';
    }
	return 0;
}
/*
题目要求构造一个相邻gcd互不相同的序列。只需要每个数字都是两个质数相乘即可，既保证相邻数字都有一个质数作为gcd，又保证每个gcd都是不同的质数。完美！
注意质数相乘会超出int范围。用大数据检查
注意筛选的质数足够多，了解大致质数的分布规律
*/
