#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr); 
    long long a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
    while(c>=x||b>=y){//注意边界条件处理
    	b+=c/x;
    	c%=x;
    	a+=b/y;
    	c+=b/y;
    	b%=y;
	}
	cout<<a; 
    return 0;
}
