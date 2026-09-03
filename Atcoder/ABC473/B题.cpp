#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,sum=0;
    cin>>n;
    map<int,int> cnt;
    for(int i=1;i<=n;++i){
    	int a;
    	cin>>a;
    	cnt[a]++;
	}
	for(auto it=cnt.begin();it!=cnt.end();++it)
        if(it->second%2==1) 
		   sum+=it->first;
	cout<<sum;
    return 0;
}
/*
很经典的题目。
题意为统计出现次数为奇数的数字之和。
用map即可。
*/ 
