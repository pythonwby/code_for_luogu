/*
   1010：计算分数的浮点数值
 * @Autor: 乌搏猿
 * @Date: 2021-11-06 15:46:12
 * @LastEditTime: 2021-11-06 15:48:32
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1010.cpp
 */
#include <cstdio>

double a,b;

int main(){
    scanf("%lf%lf",&a,&b);
    printf("%.9lf\n",a/b);
    system("pause");
    return 0;
}