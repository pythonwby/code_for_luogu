/*
   P1014 [NOIP1999 普及组] Cantor 表
 * @Autor: 乌搏猿
 * @Date: 2021-10-07 11:49:03
 * @LastEditTime: 2021-10-07 11:51:37
 * @state: AC
 * @FilePath: \code_for_luogu\luogu\P1014.cpp
 */
#include <cstdio>

//变量名与题目相同
int n,a=1;

int main_1014(){
    scanf("%d",&n);
    while(n-a>0){
        n-=a;
        a++;
    }
    if(a%2==0) printf("%d/%d",n,a+1-n);
    else printf("%d/%d\n",a+1-n,n);
    system("pause");
    return 0;
}