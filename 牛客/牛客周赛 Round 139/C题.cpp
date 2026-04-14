#include<bits/stdc++.h>
using namespace std;
stack<int> s;
queue<int> que;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,q,s1=0,q1=0,q2=0;
    cin>>n>>q;
    vector<int> a(n+9,0),st(n+9,0),qu(n+9,0);
    for(int i=1;i<=n;++i)
        cin>>a[i];
    for(int i=1;i<=q;++i){
        int x;
        cin>>x;
        if(x==1){
            int y;
            cin>>y;
            s.push(y);
            que.push(y);
        }
        else{
            s1++;
            int y1=s.top();//如需获取并删除，应先调用top()再pop()
            st[s1]=y1;
            s.pop();
            int y2=que.front();
            qu[s1]=y2;
            que.pop();
        }
    }
    for(int i=1;i<=n;++i){
        if(a[i]!=st[i])break;
        if(i==n)q1++;
    }
     for(int i=1;i<=n;++i){
        if(a[i]!=qu[i])break;
        if(i==n)q2++;
    }
    if(q1==1&&q2==1)cout<<"both";
    else if(q1==1&&q2==0)cout<<"stack";
    else if(q1==0&&q2==1)cout<<"queue";
    else cout<<"-1";
    return 0;
}
/*
直接使用STL现成的stack和queue模拟即可。保存输出序列，判断是否相等
熟悉stack和queue基本操作
*/
