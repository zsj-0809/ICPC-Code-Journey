#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_set<int> s;
        for(int i=1;i<=n;++i){
        	int x;
        	cin>>x;
        	if(s.find(x)==s.end()){
        	   s.insert(x);
			   cout<<x<<" ";	
			}
		}
		cout<<'\n';
    }
    return 0;
}
/*
unordered_set基于哈希表实现,插入和查找的平均时间复杂度为O(1).
set基于红黑树实现,插入和查找的时间复杂度为 O(logn).
*/
