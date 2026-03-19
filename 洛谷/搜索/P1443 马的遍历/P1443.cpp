#include <bits/stdc++.h>
using namespace std;
int a[405][405];
queue<pair<int, int>> q;//用pair 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    q.push({x,y});
    for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j){
			a[i][j]=-1;
		}
	}
	a[x][y]=0;
    while(!q.empty()){
    	pair<int, int> cur=q.front();
    	 if(cur.first+2<=n&&cur.second+1<=m&&a[cur.first+2][cur.second+1]==-1){
    	 	a[cur.first+2][cur.second+1]=a[cur.first][cur.second]+1;
    	 	q.push({cur.first+2,cur.second+1});
		 }
		 if(cur.first+1<=n&&cur.second+2<=m&&a[cur.first+1][cur.second+2]==-1){
    	 	a[cur.first+1][cur.second+2]=a[cur.first][cur.second]+1;
    	 	q.push({cur.first+1,cur.second+2});
		 }
		 if(cur.first-1>=1&&cur.second+2<=m&&a[cur.first-1][cur.second+2]==-1){
    	 	a[cur.first-1][cur.second+2]=a[cur.first][cur.second]+1;
    	 	q.push({cur.first-1,cur.second+2});
		 }
		 if(cur.first-2>=1&&cur.second+1<=m&&a[cur.first-2][cur.second+1]==-1){
    	 	a[cur.first-2][cur.second+1]=a[cur.first][cur.second]+1;
    	 	q.push({cur.first-2,cur.second+1});
		 }
		 if(cur.first+1<=n&&cur.second-2>=1&&a[cur.first+1][cur.second-2]==-1){
    	 	a[cur.first+1][cur.second-2]=a[cur.first][cur.second]+1;
    	 	q.push({cur.first+1,cur.second-2});
		 }
		 if(cur.first+2<=n&&cur.second-1>=1&&a[cur.first+2][cur.second-1]==-1){
    	 	a[cur.first+2][cur.second-1]=a[cur.first][cur.second]+1;
    	 	q.push({cur.first+2,cur.second-1});
		 }
		 if(cur.first-2>=1&&cur.second-1>=1&&a[cur.first-2][cur.second-1]==-1){
    	 	a[cur.first-2][cur.second-1]=a[cur.first][cur.second]+1;
    	 	q.push({cur.first-2,cur.second-1});
		 }
		  if(cur.first-1>=1&&cur.second-2>=1&&a[cur.first-1][cur.second-2]==-1){
    	 	a[cur.first-1][cur.second-2]=a[cur.first][cur.second]+1;
    	 	q.push({cur.first-1,cur.second-2});
		 }
		 q.pop();
	}
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j){
			cout<<a[i][j]<<" ";
		}
		cout<<'\n';
	}
    return 0;
}
