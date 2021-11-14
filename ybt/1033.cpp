/*
   1033：计算线段长度
 * @Autor: 乌搏猿
 * @Date: 2021-11-07 13:19:26
 * @LastEditTime: 2021-11-08 21:11:39
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1033.cpp
 */
#include <cstdio>
#include <cmath>

double xa,xb,ya,yb;

int main(){
    scanf("%lf%lf%lf%lf",&xa,&ya,&xb,&yb);
    printf("%.3lf\n",sqrt(pow(xa-xb,2)+pow(ya-yb,2)));
    system("pause");
    return 0;
}