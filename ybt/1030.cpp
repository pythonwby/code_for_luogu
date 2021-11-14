/*
   1030：计算球的体积
 * @Autor: 乌搏猿
 * @Date: 2021-11-07 11:50:09
 * @LastEditTime: 2021-11-08 21:02:10
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1030.cpp
 */
#include <cstdio>
#include <cmath>
const double p=3.14;

double r,v;

int main(){
    scanf("%lf",&r);
    v=(4*p*pow(r,3))/3;
    printf("%.2lf\n",v);
    system("pause");
    return 0;
}