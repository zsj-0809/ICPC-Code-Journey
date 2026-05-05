#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
    	int n,l=0,r=0;
    	string s;
    	cin>>n>>s;
    	for(int i=0;i<s.size();++i){
    		if(s[i]=='(')l++;
    		else r++;
		}
	    if(l==r)cout<<"YES";
    	else cout<<"NO";
    	cout<<'\n';
    }
    return 0;
}
/*
只要左括号和右括号相等，就可以删除整个字符串然后重新排序。 
*/
