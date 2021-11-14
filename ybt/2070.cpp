/*
   2070£º¡¾Àý2.13¡¿Êý×Ö¶Ôµ÷
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-11-07 10:58:29
 * @LastEditTime: 2021-11-07 11:11:53
 * @state: Other
 * @FilePath: \code_for_luogu\ybt\2070.cpp
 */
#include <cstdio>

int n;

int main(){
    scanf("%d",&n);
    printf("%d\n",n%10*100+n/10%10*10+n/100);
    system("pause");
    return 0;
}