#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        queue<pair<int,int>> q; 
        vector<int> a(200090,0); 
        q.push({x,0});
        while(!q.empty()){
    	   pair<int, int> cur=q.front();
    	   if(cur.first==y){
    		cout<<cur.second<<'\n';
    		break;
		   }
		   if(a[cur.first+1]==0){
		   	  a[cur.first+1]=1;
		      q.push({cur.first+1,cur.second+1});
		   }
		   if(a[cur.first-1]==0){
		   	  a[cur.first-1]=1;
		      q.push({cur.first-1,cur.second+1});
		   }
    	   if(cur.first*2<y*2&&a[cur.first*2]==0){
		      a[cur.first*2]=1;
    	      q.push({cur.first*2,cur.second+1});
           }
           q.pop();
        }
    }//BFS一定要标记是否来过 
    return 0;
}
