#include<bits/stdc++.h>
using namespace std; 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string s;
	cin>>s;
	if(s.size()==5||s.size()==10)cout<<"Yes";
	else cout<<"No";
    return 0;
}	
/*
"You must not write a string whose length is a multiple of 5."
正确翻译应该为5的倍数。
飞书翻译有误，导致写错。 
*/
