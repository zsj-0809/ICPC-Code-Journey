#include<bits/stdc++.h>
using namespace std;
string postorder(string in,string pre){
       if(in.empty()) return "";
       char root=pre[0];
       int pos=in.find(root);
       string left_in=in.substr(0,pos);
       string right_in=in.substr(pos+1);
       string left_pre=pre.substr(1,left_in.size());
       string right_pre=pre.substr(1+left_in.size());
       return postorder(left_in,left_pre)+postorder(right_in,right_pre)+root;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    string in,pre;
    cin>>in>>pre;
    cout<<postorder(in,pre)<<'\n';
    return 0;
}
/*
前序遍历的第一个字符是整棵树的根节点。
在中序遍历中，找到这个根节点的位置，
它左边就是左子树的中序遍历序列，右边是右子树的中序遍历序列。
同时，前序遍历中根节点之后的对应数量字符分别是左子树和右子树的前序遍历序列。
递归处理左右子树，最后将根节点拼接在末尾，即可得到后序遍历序列。 
*/
