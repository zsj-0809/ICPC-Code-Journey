#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t,a,b,c;
	cin>>t;
	a=t/3600;
	t%=3600;
	b=t/60;//区分除和取模 
	t%=60;
	cout<<a<<" "<<b<<" "<<t;
    return 0;
}
