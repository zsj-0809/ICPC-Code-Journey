#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k,sp,left=0,right=0,target;
        cin>>n>>k;
        vector<int> a(n+9,0);
        for(int i=1;i<=n;++i)
            cin>>a[i];
        cin>>sp;
        target=a[sp];
        for(int i=1;i<sp;++i){
            if(a[i]!=target){
                for(;;++i){
                    if(a[i]!=target&&a[i+1]==target){
                        left++;
                        break;
                    }
                }
            }
        }
        for(int i=n;i>sp;--i){
            if(a[i]!=target){
                for(;;--i){
                    if(a[i]!=target&&a[i-1]==target){
                        right++;
                        break;
                    }
                }
            }
        }
        cout<<max(left,right)*2<<'\n';
    }
    return 0;
}
/*
贪心题目，每次尽可能多的改变两边的数字。双指针逐步往中间走
因为特殊数字的限制，每次都至少要以特殊数字为起点或者终点。
当两边指针相等并且特殊位置的数字等于目标值的时候结束，此时所有值都被修改完毕。
此方法不幸TLE！
观察反转过程之后重大发现：
每两次翻转实际上是在特殊位置两边各自消除一个多余数字串。
因此思路十分简单：
统计两边不同数字串个数，取最大值乘2即可。
示例：
1
0 1 1 0 1 1 0 1 0 0 1 0 1 0 1 0 1
1次
1 0 0 1 0 0 1 0 1 1 0 1 0 1 0 1 1
2次
1 1 1 0 1 1 0 1 0 0 1 0 1 0 1 1 1
3次
1 1 1 1 0 0 1 0 1 1 0 1 0 1 1 1 1
4 
1 1 1 1 1 1 0 1 0 0 1 0 1 1 1 1 1
5
1 1 1 1 0 0 1 0 1 1 0 1 1 1 1 1 1 
6
1 1 1 1 1 1 0 1 0 0 1 1 1 1 1 1 1
7
1 1 1 1 0 0 1 0 1 1 1 1 1 1 1 1 1 
8
1 1 1 1 1 1 0 1 1 1 1 1 
9
1 1 1 1 0 0 1
*/
