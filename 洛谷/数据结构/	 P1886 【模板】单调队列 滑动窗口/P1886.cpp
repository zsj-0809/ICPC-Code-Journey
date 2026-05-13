#include<bits/stdc++.h>//单调队列 O(n)
using namespace std;//模板来自董晓算法 
const int N=1000010;
int n,k,a[N];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    cin>>n>>k;
    for(int i=1;i<=n;++i) 
	    cin>>a[i]; 
    deque<int> q;
    for(int i=1;i<=n;++i){
        if(!q.empty()&&q.front()<i-k+1) q.pop_front(); //队头弹出（比下标）
        while(!q.empty()&&a[q.back()]>a[i]) q.pop_back(); //队尾弹出（比元素）
        q.push_back(i);                      //队尾压入（当前下标）
        if(i>=k) cout<<a[q.front()]<<" "; //输出最小值
    }
    cout<<'\n';
    q.clear();
    for(int i=1;i<=n;++i){
        if(!q.empty()&&q.front()<i-k+1) q.pop_front();
        while(!q.empty()&&a[q.back()]<a[i]) q.pop_back();
        q.push_back(i);
        if(i>=k) cout<<a[q.front()]<<" ";
    }
    return 0;
}
/*
单调队列的精髓是：
通过维护一个严格单调（递增/递减）的队列，
使队首元素就是当前窗口的答案。
为此，我们在队尾弹出所有"不可能成为未来答案"的元素，
并在队首弹出所有"离开窗口"的元素。
*/
