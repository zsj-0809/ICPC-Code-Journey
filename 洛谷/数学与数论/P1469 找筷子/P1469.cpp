#include<bits/stdc++.h>
using namespace std;
int n,x,sum=0;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n;
    for(int i=1;i<=n;++i){
    	cin>>x;
    	sum^=x;
	}
	cout<<sum;
    return 0;
}
/*
1.k个相同的数的异或和，当k为奇数时，结果是这个数本身，否则结果是0。
2.任何数与0的异或值是它本身。
*/
