#include<bits/stdc++.h>// O(2^3*logn)
using namespace std;//模板来自董晓算法
const int mod=1000000007;
struct mat{
       long long c[2][2];
       mat(){memset(c,0,sizeof c);}
       mat operator*(const mat &x){
           mat t;
           for(int i=0;i<2;++i)
           for(int j=0;j<2;++j)
           for(int k=0;k<2;++k)
               t.c[i][j]=(t.c[i][j]+c[i][k]*x.c[k][j])%mod;
           return t;
       }  
}F,A;//F:数列矩阵 A:转移矩阵
void qpow(long long n){
     while(n){
           if(n&1) F=F*A;
           A=A*A;
           n>>=1;
     }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n; 
    cin>>n;
    if(n<=2){
        cout<<1<<'\n';
        return 0;
    }
    F.c[0][0]=F.c[0][1]=1;
    A.c[0][0]=A.c[0][1]=A.c[1][0]=1;  
    qpow(n-2);
    cout<<F.c[0][0];
    return 0;
}
/*
结构体的定义和重载运算符值得学习
利用矩阵乘法的结合律和快速幂优化斐波那契数列求解，十分巧妙！
记晚自习与牛客周赛Round 137 E题鏖战一个多小时，思路部分错误，代码难以实现！
*/
