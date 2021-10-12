/*
   P1012 [NOIP1998 提高组] 拼数
 * @Autor: 乌搏猿
 * @Date: 2021-10-11 20:38:43
 * @LastEditTime: 2021-10-12 20:32:49
 * @state: AC
 * @FilePath: \code_for_luogu\luogu\P1012.cpp
 */
#include <iostream>
#include <algorithm>
using namespace std;

//a:输入数字的存储数组
string a[25];
int n;

int cmp1(string x,string y){return x+y>y+x;}
int main_1012(){
    scanf("%d",&n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n,cmp1);
    for(int i=0;i<n;i++) cout<<a[i];
    printf("\n");
    system("pause");
    return 0;
}