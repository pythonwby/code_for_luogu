/*
   P1035 [NOIP2002 普及组] 级数求和
 * @Autor: 乌搏猿
 * @Date: 2021-09-25 14:23:43
 * @LastEditTime: 2021-09-25 14:29:12
 * @state: AC
 * @FilePath: \code_for_luogu\luogu\P1035.cpp
 */
#include <cstdio>

int n=1,k;

int main_1035(){
    scanf("%d",&k);
    for(double sn=0;sn<=k;n++) sn+=1.0/n;
    printf("%d\n",n-1);
    system("pause");
    return 0;
}