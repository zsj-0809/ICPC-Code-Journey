#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
      long long n,s=0,ans=0;
      cin>>n;
      vector<long long> a(n+9,0);
      for(int i=1;i<=n;++i)
      	  cin>>a[i];
      sort(a.begin()+1,a.begin()+n+1);
      for(int i=1;i<=n;++i)
      	  if(a[i]==s)
      	     s++;
      if(s-1>=a[n])ans++;
      ans=n*a[n]+(s-1)*s/2+(n-s)*s+ans;
	  cout<<ans<<'\n'; 
    }
    return 0;
}
/*
考虑将最大值放在第一位，然后后续按从0开始的正整数序列，
如max，0，1，2，3，.......其他所有数字
这样一定能保证最大值就是max*n,
讨论mex：
因为按照自然数顺序，所以mex一定为最大。
为什么不把0放在第一位？
因为将max放在第一位，虽然会丢失mex的1（mex从1变0），但只要max>=1，就可以补充丢失的1. 
上述恰好就包括了两种情况，即max为0和不为0的情况。 
求mex：(s-1)*s/2+(n-s)*s
前面序列的mex为等差数列，后面序列的mex就是s。 
没有完整考虑问题 
之前写的特判：if(a[n]==1||a[n]==0) ans++;
难点：max会影响等差数列中的mex，如反例2 0 1 ，此时1位置上的mex为3而不是2.
因此修改特判为if(s-1>=a[n])ans++; 
如果自然数顺序可以延伸到max，则单独加1. 
考虑最大值对上升序列的全影响 
*/。
