#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
    	int x,y;
    	cin>>x>>y;
    	if(x%2==0||y%2==0)cout<<"Yes";
    	else cout<<"No";
    	cout<<'\n';
    }
    return 0;
}
