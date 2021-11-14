/*
   1044：判断是否为两位数
 * @Autor: 乌搏猿
 * @Date: 2021-11-14 12:15:49
 * @LastEditTime: 2021-11-14 13:22:34
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1044.cpp
 */
#include <cstdio>

int a;

int main(){
    scanf("%d",&a);
    if(a>=10&&a<=99) printf("1\n");
    else printf("0\n");
    system("pause");
    return 0;
}