#include<bits/stdc++.h>//矩阵快速幂 O(n^3*logk)
using namespace std;//模板来自董晓算法 
const int mod=1000000007;
long long n,k;
struct matrix{
       long long c[101][101];
       matrix(){ 
	           memset(c,0,sizeof c);//使用 memset将内存全部置零，确保新建矩阵的所有元素初始值为 0。
	   }   
}A,res;
matrix operator*(matrix &x,matrix &y){
       matrix t;//临时矩阵
       for(int i=1;i<=n;i++)
       for(int j=1;j<=n;j++)
       for(int k=1;k<=n;k++)
           t.c[i][j]=(t.c[i][j]+x.c[i][k]*y.c[k][j])%mod;
       return t;
}
void qsm(long long k){
     for(int i=1;i<=n;i++)
	     res.c[i][i]=1; //单位矩阵
     while(k){
         if(k&1) res=res*A; //矩阵乘法
         A=A*A;
         k>>=1;
     }
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>k;
    for(int i=1;i<=n;++i)
       for(int j=1;j<=n;++j) 
	       cin>>A.c[i][j];
    qsm(k);//矩阵快速幂
    for(int i=1;i<=n;++i){
    	for(int j=1;j<=n;++j){
    		cout<<res.c[i][j]<<" ";
		}
		cout<<'\n';
	}
    return 0;
}
