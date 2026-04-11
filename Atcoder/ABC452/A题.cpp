#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m,d,flag=0;
    cin>>m>>d;
    if(m==1&&d==7) flag++;
    if(m==3&&d==3) flag++;
    if(m==5&&d==5) flag++;
    if(m==7&&d==7) flag++;
    if(m==9&&d==9) flag++;
    if(flag==1)cout<<"Yes";
    else cout<<"No";
    return 0;
}
/*
五节句（ごせっく），是日本传统的五大年度节日，源自中国的阴阳五行与节气文化，在江户时代被定为官方法定节日。
人日（じんじつ）／七草节
日期：1 月 7 日
上巳（じょうし）／桃之节句／女儿节
日期：3 月 3 日
端午（たんご）／菖蒲节／男孩节
日期：5 月 5 日
七夕（しちせき／たなばた）
日期：7 月 7 日
重阳（ちょうよう）／菊之节句
日期：9 月 9 日
*/
