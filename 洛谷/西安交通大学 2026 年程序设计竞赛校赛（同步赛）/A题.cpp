#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int b=0,c=0;
    for(int i=1;i<=6;++i){
    	int x;
	    cin>>x;
	    if(x==0)b++;
	    else c++;
	}
	if(b==3&&c==3)cout<<"Congratulations on graduation!";
	else cout<<"Songfes in Japan...";	 
    return 0;
}
/*
少输出一个点导致一次WA
*/
