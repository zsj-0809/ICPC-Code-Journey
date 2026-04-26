#include<bits/stdc++.h>
using namespace std;
bool f(long long x) {
    string s=to_string(x);
    int l=0,r=s.size()-1;
    while(l<r){
        if(s[l]!=s[r]) return false;
        l++;
	    r--;
    }
    return true;
}//记住这种判断回文的写法 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin>>n;
    if(!f(n)){
       cout<<"NO";
       return 0;
    }
    long long x=sqrt(n);
    if(x*x!=n||!f(x))
       cout<<"NO";
    else
       cout<<"YES";
    return 0;
}
