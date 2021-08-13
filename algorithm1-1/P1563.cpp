/* 
   P1563 [NOIP2016 提高组] 玩具谜题
 * @Author: 乌搏猿
 * @Date: 2021-08-13 09:09:54
 * @LastEditTime: 2021-08-13 16:24:13
 * @FilePath: \code_for_luogu\algorithm1-1\P1563.cpp
 */
//暂未完成！！！
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//a:存小人朝向,true朝内,false朝外
vector<bool> a;
//b:存小人工作（名字）
vector<string> b;
//n:小人数,m:指令数,x:单个小人朝向,y:指令中走的步数,now:当前发出指令的小人编号
int n,m,x,y,now;
//tempstr:临时字符串变量
string tempstr;
//tempint:临时数字变量
int tempint;

int main(){
    scanf("%d%d",&n,&m);
    //存小人信息
    for(int i=0;i<n;i++){
        cin>>tempint>>tempstr;
        if(tempint) a.push_back(false);
        else a.push_back(true);
        b.push_back(tempstr);
    }
    //读入指令并执行
    while(m--){
        scanf("%d%d",&x,&y);
        if(a[now]==true&&x==0) now=(now+n-y)%n;
        else if(a[now]==true&&x==1) now=(now+y)%n;
        else if(a[now]==false&&x==0) now=(now+y)%n;
        else if(a[now]==true&&x==1) now=(now+n-y)%n;
    }
    cout<<b[now]<<endl;
    system("pause");
    return 0;
}