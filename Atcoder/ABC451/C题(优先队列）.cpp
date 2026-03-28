#include<bits/stdc++.h>
using namespace std; 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int q;
	cin>>q;
	priority_queue<int,vector<int>,greater<int>> s;
	while(q--){
		int a,h;
		cin>>a>>h;
		if(a==1)s.push(h);
		else{
			while(!s.empty()&&s.top()<=h)//记得判空 
			s.pop();
		}
		cout<<s.size()<<'\n';
	}
    return 0;
}	
/*
优先队列（Priority Queue）是一种抽象数据结构，
它不遵循先进先出（FIFO）规则，
而是每次出队的元素总是当前队列中优先级最高（或最低）的那个
priority_queue<int> s;          // 默认大根堆（最大值优先）
priority_queue<int, vector<int>, greater<int>> s; // 小根堆（最小值优先）
s.push(x)将元素x插入优先队列 
s.pop()删除堆顶元素（优先级最高的元素）
s.top()回堆顶元素的引用（不删除）
s.empty()判断队列是否为空
s.size()返回队列中元素个数
priority_queue没有迭代器，无法直接遍历内部元素
*/
