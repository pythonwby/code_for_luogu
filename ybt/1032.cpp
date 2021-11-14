/*
   1032：大象喝水查
 * @Autor: 乌搏猿
 * @Date: 2021-11-07 12:19:42
 * @LastEditTime: 2021-11-08 21:04:07
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1032.cpp
 */
#include <cstdio>
#include <cmath>

double h,r;

int main(){
    scanf("%lf%lf",&h,&r);
    printf("%.0lf\n",ceil(20000/(3.14*r*r*h)));
    system("pause");
    return 0;
}