#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio();
	cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=1;i<=n*2+1;i++){
			if(i%2==1)cout<<"C";
			else cout<<"U";
		}
        cout<<'\n';
	}	
}
