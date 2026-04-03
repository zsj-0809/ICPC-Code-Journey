#include<bits/stdc++.h>
using namespace std;
int n,q,tmp;
map<int,int> a; 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>tmp;
		a[tmp]=i;
	}
	cin>>q;
	while(q--){
		cin>>tmp;
		if(a.find(tmp)!=a.end())
		cout<<a[tmp]<<'\n';
		else cout<<0<<'\n';
	}
	return 0; 
} 
/*
if(a.find(tmp) != a.end())这段代码用于检查map容器中是否存在键为tmp的元素
a.find(tmp)调用map的成员函数find,它在内部通过红黑树（一种平衡二叉搜索树）进行查找。
算法类似于二分查找，时间复杂度为 (O(log n))，其中 (n) 是map中元素的个数。
返回值:如果找到键为tmp的元素，则返回一个指向该元素的迭代器（iterator）;如果未找到,则返回 a.end(),即指向容器末尾的迭代器（表示“不存在”）。
利用map的快速查找能力,判断某个数字是否作为键出现过
*/
