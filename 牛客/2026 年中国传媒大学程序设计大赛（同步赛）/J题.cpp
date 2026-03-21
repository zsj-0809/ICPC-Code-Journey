#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n,k,a0=0,a1=0,a2=0,a4=0,valve=0,lonely=0,a5=0;
	cin>>n>>k;
	vector<int> a(n+2,0),sx(n+2,0);
	string s;
	for(int i=1;i<=n;i++){
		cin>>s;
		if(s.size()==1)lonely++;//该字符串无法操作，价值为1 
		else{
		if(s.size()==2)sx[i]=2;
		else sx[i]=1;
		int r=0,e=0,d=0,sum=0;
		for(int j=0;j<s.size();j++){
			if(s[j]=='r') r++;
			else if(s[j]=='e') e++;
			else if(s[j]=='d') d++;
		}
		if(r>0)sum++;
		if(e>0)sum++;
		if(d>0)sum++;
		a[i]=sum;
		if(sum==2&&sx[i]==1) a2++;//可以操作，价值从2到4 
		else if(sum==1&&sx[i]==1)a1++;//可以操作，价值从1到2到4 
		else if(sum==1&&sx[i]==2)a0++;//可以操作，价值从1到2 
		else if(sum==3)a4++;//该字符串无法操作，//价值为4 
		else if(sum==2&&sx[i]==2)a5++;//该字符串无法操作，价值为2 
     	}
	}
	if(k>a2){
		k-=a2;
		a4+=a2;
		a2=0;
	}
	else {
	   a4+=k;
	   
	   a2-=k;
	   k=0;
	}
	if(k>a1*2){
		k-=(a1*2);
		a4+=a1;
		a1=0;
	}
	else{
		if(k%2==0){
			a4+=(k/2);
			a1-=(k/2);
			k=0;	
		}
		else{
			a4+=(k/2);
			a1-=(k/2);
			a1--;
			a2++;
			k=0;
		}
	}
	if(k>a0){
		a2+=a0;
		a0=0;
	} 
	else{
		a2+=k;
		a0-=k;
	}
	cout<<a4*4+a2*2+a5*2+a1+a0+lonely;
	return 0;	
}
/*
比较复杂，情况较多的贪心模拟题目
1.代码顺序写对
2.变量名写清楚，自己能看懂
3.思路想明白
*/
