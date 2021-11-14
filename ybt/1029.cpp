/*
   1029：计算浮点数相除的余
 * @Autor: 乌搏猿
 * @Date: 2021-11-08 20:55:17
 * @LastEditTime: 2021-11-08 20:58:22
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1029.cpp
 */
#include <cstdio>
#include <iostream>
using namespace std;

double a,b;
int k;

int main(){
    scanf("%lf%lf",&a,&b);
    k=(int)a/b;
    cout<<a-k*b<<endl;
    system("pause");
    return 0;
}