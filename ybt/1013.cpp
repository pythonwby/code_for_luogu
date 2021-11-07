/*
   1013：温度表达转化
 * @Autor: 乌搏猿
 * @Date: 2021-11-06 18:16:14
 * @LastEditTime: 2021-11-07 10:06:15
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1013.cpp
 */
#include <cstdio>

double f;

double c(double f){return 5*(f-32)/9;}
int main(){
    scanf("%lf",&f);
    printf("%.5lf\n",c(f));
    system("pause");
    return 0;
}