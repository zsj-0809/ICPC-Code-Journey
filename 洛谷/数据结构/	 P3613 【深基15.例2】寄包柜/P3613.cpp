#include<bits/stdc++.h>
using namespace std;
map<int,map<int,int>> a;//建立二维映射
int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n,q,x,y,k,z;
    cin>>n>>q;
    for(int i=1;i<=q;++i){
        cin>>k>>x>>y; 
        if(k==1){
            cin>>z;
            a[x][y]=z;//建立一次映射
        }
        else{
            cout<<a[x][y]<<'\n';//直接输出所映射的值
        }
    }
	return 0;
}
