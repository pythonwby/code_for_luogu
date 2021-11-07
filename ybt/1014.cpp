/*
   1014：与圆相关的计算
 * @Autor: 乌搏猿
 * @Date: 2021-11-06 18:18:49
 * @LastEditTime: 2021-11-07 10:06:46
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1014.cpp
 */
#include <cstdio>
const double p=3.14159;

double r,d,c,s;

int main(){
    scanf("%lf",&r);
    d=r*2;
    c=2*p*r;
    s=p*r*r;
    printf("%.4lf %.4lf %.4lf\n",d,c,s);
    system("pause");
    return 0;
}