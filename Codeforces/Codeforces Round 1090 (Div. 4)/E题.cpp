#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,ans=0;
        cin>>n;
        vector<int> a(n+9,0);
        for(int i=1;i<=n;++i)
            cin>>a[i];
        for(int i=1;i<=n;++i){
            for(int j=1;j<=n;++j){
                ans=max(ans,a[i]^a[j]);
            }
        }
        cout<<ans<<'\n';   
    }
    return 0;
}
/*
题目第一眼看上去十分复杂，很容易劝退
仔细分析之后：
结合异或性质：两个相同的数字异或为0，任何数与0异或为其本身
a⊕a=0
a⊕0=a
异或具有交换律：对于任意两个数a和b,有 a⊕b=b⊕a
题目意思即为将数组中任意一个数字与其他所有数字异或，然后删掉这个数字，如此往复
当这个过程第二次发生时，原来的数字会因为异或性质被消除，
如数组a,b,c,d
第一次操作之后a^d,b^d,c^d;
第二次操作之后a^d^c^d,b^d^c^d;等同于a^c,b^c;
第三次操作之后等同于a^b;
无论选择数字的顺序如何，到最后一定会变成两个数字之间的异或。
因此题目意思就是求解两个数字之间的异或最大值。
暴力循环即可。
*/
