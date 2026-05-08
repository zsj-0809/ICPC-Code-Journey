#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);       
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
    	  int n,f1=0,f2=0;
    	  string s;
    	  cin>>n>>s;
    	  for(int i=0;i<=s.size()-4;++i){
    	  	  if(s[i]=='2'&&s[i+1]=='0'&&s[i+2]=='2'&&s[i+3]=='5')
    	  	  	 f1++;
    	      if(s[i]=='2'&&s[i+1]=='0'&&s[i+2]=='2'&&s[i+3]=='6')
    	  	  	 f2++;	
		  }
		  if(f1==0||f2>0)
		  cout<<0;
		  else cout<<1;
		  cout<<'\n';	  
    }
    return 0;
}
/*
如果字符串不含2025或者含有2026，直接输出0
反之则一定含有2025，此时只需要将5修改成6，最少只需要操作1次
*/ 
