/*
   1055£ºÅÐ¶ÏÈòÄê
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-11-14 15:04:20
 * @LastEditTime: 2021-11-15 20:45:20
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1055.cpp
 */
#include <cstdio>

int a;

int main(){
    scanf("%d",&a);
    if((a%4==0&&a%100!=0)||a%400==0) printf("Y\n");
    else printf("N\n");
    system("pause");
    return 0;
}