#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	vector<int> a,b,c,d;
    	for(int i=1;i<=n;++i){
    		int x;
			cin>>x;
			if(x%6==0) a.push_back(x);
			else if(x%2==0) b.push_back(x);
			else if(x%3==0) c.push_back(x);
			else d.push_back(x);
		}
		for(int x:a){
			cout<<x<<" ";
		}
		for(int x:c){
			cout<<x<<" ";
		}
		for(int x:d){
			cout<<x<<" ";
		}
		for(int x:b){
			cout<<x<<" ";
		}
    	cout<<'\n';
    }
    return 0;
}
/*
先分类，后直接贪心，原理很简单，push_back很好用。
*/ 
