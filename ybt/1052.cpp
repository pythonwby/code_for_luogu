/*
   1052£º¼ÆËãÓÊ×Ê
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-11-14 14:44:05
 * @LastEditTime: 2021-11-14 14:54:58
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1052.cpp
 */
#include <cstdio>
#include <cmath>

int zl,jg;
char jj;

int main(){
    scanf("%d %c",&zl,&jj);
    if(zl>1000) jg=ceil((zl-1000)/500.0)*4+8;
    else jg=8;
    if(jj=='y') jg+=5;
    printf("%d\n",jg);
    system("pause");
    return 0;
}