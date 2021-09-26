/*
   P1980 [NOIP2013 普及组] 计数问题
 * @Autor: 乌搏猿
 * @Date: 2021-09-26 20:24:15
 * @LastEditTime: 2021-09-26 20:48:31
 * @state: AC
 * @FilePath: \code_for_luogu\luogu\P1980.cpp
 */
#include <cstdio>

//ans是答案,n,x与题目中的变量相同
int n,x,ans=0;

int main_1980(){
    scanf("%d%d",&n,&x);
    for(int i=1;i<=n;i++){
        int tmp=i;
        while(tmp>0){
            if(tmp%10==x) ans++;
            tmp/=10;
        }
    }
    printf("%d\n",ans);
    system("pause");
    return 0;
}