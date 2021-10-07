/*
   P1307 [NOIP2011 普及组] 数字反转
 * @Autor: 乌搏猿
 * @Date: 2021-10-07 11:55:56
 * @LastEditTime: 2021-10-07 11:58:27
 * @state: AC
 * @FilePath: \code_for_luogu\luogu\P1307.cpp
 */
#include <cstdio>

//ans:记录答案的变量
int n,ans=0;

int main_1307(){
    scanf("%d",&n);
    if(n<0){
        printf("-");
        n=-n;
    }
    while(n){
        ans*=10;
        ans+=n%10;
        n/=10;
    }
    printf("%d\n",ans);
    system("pause");
    return 0;
}