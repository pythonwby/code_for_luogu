/*
   1005：地球人口承载力估计
 * @Autor: 乌搏猿
 * @Date: 2021-11-06 12:40:58
 * @LastEditTime: 2021-11-06 12:53:56
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1005.cpp
 */
#include <cstdio>

int x,a,y,b;

int main(){
    scanf("%d%d%d%d",&x,&a,&y,&b);
    double n=(y*b-x*a)/(b-a);
    printf("%.2lf\n",n);
    system("pause");
    return 0;
}