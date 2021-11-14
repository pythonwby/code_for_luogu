/*
   2056：【例3.7】最大的数
 * @Autor: 乌搏猿
 * @Date: 2021-11-08 21:58:38
 * @LastEditTime: 2021-11-14 11:39:24
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\2056.cpp
 */
#include <cstdio>
#include <iostream>
using namespace std;

double a,b,c;

int main(){
    scanf("%lf%lf%lf",&a,&b,&c);
    cout<<max(a,max(b,c))<<endl;
    system("pause");
    return 0;
}