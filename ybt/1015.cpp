/*
   1015：计算并联电阻的阻值
 * @Autor: 乌搏猿
 * @Date: 2021-11-06 18:22:18
 * @LastEditTime: 2021-11-07 10:08:05
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1015.cpp
 */
#include <cstdio>

double  r1,r2;

int main(){
    scanf("%lf%lf",&r1,&r2);
    printf("%.2lf\n",1/(1/r1+1/r2));
    system("pause");
    return 0;
}