/*
   1012：计算多项式的值
 * @Autor: 乌搏猿
 * @Date: 2021-11-06 18:00:54
 * @LastEditTime: 2021-11-07 10:05:25
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1012.cpp
 */
#include <cstdio>
#include <cmath>

double a,b,c,d,x;

double f(double x){return pow(x,3)*a+pow(x,2)*b+x*c+d;}
int main(){
    scanf("%lf%lf%lf%lf%lf",&x,&a,&b,&c,&d);
    printf("%.7lf\n",f(x));
    system("pause");
    return 0;       
}