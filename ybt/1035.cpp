/*
   1035：等差数列末项计算
 * @Autor: 乌搏猿
 * @Date: 2021-11-07 13:40:30
 * @LastEditTime: 2021-11-08 21:28:18
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1035.cpp
 */
#include <cstdio>

int a,b,n;

int main(){
    scanf("%d%d%d",&a,&b,&n);
    printf("%d\n",a+(b-a)*(n-1));
    system("pause");
    return 0;
}