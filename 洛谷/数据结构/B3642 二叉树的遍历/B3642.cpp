#include<bits/stdc++.h>
using namespace std;
int n;
struct Node{
	int left,right;
}t[1000090];//结构体建立二叉树 
void pre_order(int x){//前序遍历 根左右 
	cout<<x<<" ";
	if(t[x].left) pre_order(t[x].left);
	if(t[x].right) pre_order(t[x].right);
}
void in_order(int x){//中序遍历 左根右 
	if(t[x].left) in_order(t[x].left);
	cout<<x<<" ";
	if(t[x].right) in_order(t[x].right);
}
void post_order(int x){//后序遍历 左右根 
	if(t[x].left) post_order(t[x].left);
	if(t[x].right) post_order(t[x].right);
	cout<<x<<" ";
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>t[i].left>>t[i].right;
	pre_order(1);cout<<'\n';
	in_order(1);cout<<'\n';
	post_order(1);
	return 0; 
} 
