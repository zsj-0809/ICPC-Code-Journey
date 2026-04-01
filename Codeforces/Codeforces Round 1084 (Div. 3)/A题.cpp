#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,ma=0,cnt=0;
        cin>>n;
        for(int i=1;i<=n;++i){
        	int x;
        	cin>>x;
        	if(x>ma){
        		ma=x;
        		cnt=1;
			}
			else if(x==ma)
			cnt++;
		}
		cout<<cnt<<'\n';
    }
    return 0;
}
/*
直接统计最大值次数即可。
这种只需要遍历一次的统计方式十分方便，时空开销极简，值得学习
*/
