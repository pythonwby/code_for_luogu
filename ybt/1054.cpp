/*
   1054£ºÈý½ÇÐÎÅÐ¶Ï
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-11-14 14:59:19
 * @LastEditTime: 2021-11-14 15:00:28
 * @state: Other
 * @FilePath: \code_for_luogu\ybt\1054.cpp
 */
#include <cstdio>

int a,b,c;

int main(){
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c&&c+c>b&&b+c>a) printf("yes\n");
    else printf("no\n");
    system("pause");
    return 0;
}