/*
   1038£ºÆ»¹ûºÍ³æ×Ó
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-11-07 13:48:39
 * @LastEditTime: 2021-11-08 21:37:12
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1038.cpp
 */
#include <cstdio>
#include <cmath>

int n,x,y;

int main(){
    scanf("%d%d%d",&n,&x,&y);
    printf("%d\n",int(n-ceil((double)y/x))>=0?int(n-ceil((double)y/x)):0);
    system("pause");
    return 0;
}