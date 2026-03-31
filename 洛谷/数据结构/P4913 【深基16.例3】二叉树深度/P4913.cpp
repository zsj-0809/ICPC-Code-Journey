#include<bits/stdc++.h>
using namespace std;
int n;
struct Node{
	int left,right;
}t[1000090];//结构体建立二叉树 
int dfs(int x){
	if(!x) return 0;//到了叶子节点就返回 
	int left_num=dfs(t[x].left);
	int right_num=dfs(t[x].right);
	return max(left_num,right_num)+1;
}//dfs求出树的深度 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>t[i].left>>t[i].right;
	cout<<dfs(1);
	return 0; 
} 
