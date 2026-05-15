#include<bits/stdc++.h>
using namespace std;
const int N=10010;
int n,s=0;
vector<int> e[N],ans(N,0),t(N,0);
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    cin>>n;
    for(int i=1,j;i<=n;++i){
    	int x,time;
    	cin>>x>>time;
    	t[i]=time;
        while(cin>>j,j)
              e[i].push_back(j);
    }
    ans[1]=t[1];
    for(int i=2;i<=n;++i){
    	int ma=0;
    	for(auto v:e[i]){//取出 e[i]里面的每一个数，放进v里,循环每一次v就等于e[i]里的一个元素 
     	    if(ans[v]>ma)
     	    ma=ans[v];
		}
		ans[i]=ma+t[i];
	}
	for(int i=1;i<=n;++i)
		if(ans[i]>s)
		   s=ans[i];//最后一项事情和最短时间没有必然联系，要在所有ans里面寻找
	cout<<s;
    return 0;
}
/*
还是被dp吓到了，其实和dp关系不大。
最核心在于每件事情的最短时间等于本身时间加准备工作的最长时间。
通过每一件事情的最优解推出全局最优解 
类似于拓扑排序，但不需要写拓扑排序
注意邻接表和遍历的用法，含义 
*/
