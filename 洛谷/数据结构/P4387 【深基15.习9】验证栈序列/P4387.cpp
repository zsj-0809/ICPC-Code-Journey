#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,poi=1;
        cin>>n;
        stack<int> s;
        vector<int> a(n+9,0),b(n+9,0);
        for(int i=1;i<=n;++i)
            cin>>a[i];
        for(int i=1;i<=n;++i)
            cin>>b[i];
        for(int i=1;i<=n;++i){
            s.push(a[i]);
            while(!s.empty()&&s.top()==b[poi]){//记得判空
                  s.pop();
                  poi++;
            }
        }
        if(s.empty())cout<<"Yes";
        else cout<<"No";
        cout<<'\n';
    }
    return 0;
}
/*
很早之前做过，以为很复杂，其实相当简单。
难点在于出栈时机的无法确定。
如果栈顶和出栈序列元素相同，pop，再检测下一个栈顶。
这样始终符合出栈顺序。
精髓：出栈的元素永远只能是栈顶。
唉，这句话为何有某种难以言喻的意味？
*/
