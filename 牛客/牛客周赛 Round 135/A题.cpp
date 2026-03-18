#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin>>n;
	for(int i=n;;i--){
		if(i%3==0){
			cout<<i;
			break;
		}
	}
}
