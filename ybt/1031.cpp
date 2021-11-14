/*
   1031：反向输出一个三位数
 * @Autor: 乌搏猿
 * @Date: 2021-11-07 12:15:22
 * @LastEditTime: 2021-11-08 21:03:19
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1031.cpp
 */
#include <cstdio>

int n,a,b,c;

int main(){
    scanf("%d",&n);
    a=n/100;
    b=n%100/10;
    c=n%100%10;
    printf("%d%d%d\n",c,b,a);
    system("pause");
    return 0;
}