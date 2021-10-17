/*
   P1781 宇宙总统
 * @Autor: 乌搏猿
 * @Date: 2021-10-17 17:10:27
 * @LastEditTime: 2021-10-17 17:18:28
 * @state: Other
 * @FilePath: \code_for_luogu\luogu\P1781.cpp
 */
#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

//mn:总统的号码
int n,mn;
//Max:总统的票数
string tmp,Max="";

int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        cin>>tmp;
        if((tmp.length()>Max.length())||(tmp.length()==Max.length()&&tmp>Max)){
            Max=tmp;
            mn=i;
        }
    }
    printf("%d\n",mn+1);
    cout<<Max<<endl;
    system("pause");
    return 0;
}