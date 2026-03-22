#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n,z,r=0,l=0;
	cin>>n;
	vector<int> a(n+9,0);
	for(int i=1;i<=n;++i)
	cin>>a[i];
	if(n==1)cout<<"-1";
	else{
	sort(a.begin()+1,a.begin()+n+1);
	if(n%2==1)
	z=n/2+1;
	else
	z=n/2;
	for(int i=z+1;i<=n;++i){
		if(a[i]!=a[z]){
			r=i;
			break;
		}
		if(i==n)r=0;
	}
	for(int i=z-1;i>=0;--i){
		if(a[i]!=a[z]){
			l=i;
			break;
		}
		if(i==0)l=0;
	}
	if(r==0&&l==0)cout<<"-1";//全部相同，中位数无法改变
	else if((r==0&&l!=0)||(r-z>z-l)){
		if(n%2==0){
			cout<<(z-l)*2;
		}
		else cout<<(z-l-1)*2+1;
	}
	else if((l==0&&r!=0)||(r-z<z-l)){
		if(n%2==0){
			cout<<(r-z-1)*2+1;
		}
		else cout<<(r-z)*2;
	}
	else if(z-l==r-z){//中位数到两边改变距离相同
		if(n%2==0){
			cout<<(r-z-1)*2+1;
		}
		else cout<<(z-l-1)*2+1;
	}
    }
    return 0;
}
/*
题意：改变中位数
从最左边或者最右边依次删除即可。
算法竞赛中的中位数概念居然和数学中不一样！
思路简单，代码实现十分麻烦。
边界条件太多，情况太多，很容易写错
仔细分析到底哪边更容易
*/
