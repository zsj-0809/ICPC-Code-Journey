#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    for(char c:s){
        if(c!='r'&&c!='e'&&c!='d'){
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
    return 0;
}
