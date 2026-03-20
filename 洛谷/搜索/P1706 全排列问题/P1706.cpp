#include <bits/stdc++.h>
using namespace std;
int a[11]={0},b[11],n;
void dfs(int i);
int main(){
	  cin>>n;
	  dfs(1);
}
void dfs(int i){
	if(i==n+1)
	{
		for(int j=1;j<=n;j++)
		cout<<"    "<<b[j];
		cout<<'\n';
		return ;
	}
for(int k=1;k<=n;k++){
	if(a[k]==0){
	    a[k]=1;
		b[i]=k;
		dfs(i+1);
		a[k]=0;//最关键一步
		}
	}
}
