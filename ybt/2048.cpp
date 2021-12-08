/*
   2048£º¡¾Àý5.18¡¿´®ÅÅÐò
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-12-08 19:38:55
 * @LastEditTime: 2021-12-08 19:41:48
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\2048.cpp
 */
#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;

string a[25];
int n;

int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++) cout<<a[i]<<endl;
    system("pause");
    return 0;
}