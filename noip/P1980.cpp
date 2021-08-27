/*
   P1980 [NOIP2013 普及组] 计数问题
 * @Autor: 乌搏猿
 * @Date: 2021-08-27 17:10:28
 * @LastEditTime: 2021-08-27 18:29:37
 * @state: AC
 * @FilePath: \code_for_luogu\noip\P1980.cpp
 */
#include <cstdio>

//x:要统计的数字
int n,x,ans=0;

int main_1980(){
    scanf("%d%d",&n,&x);
    for(int i=1;i<=n;i++){
        int t=i;
        while(t){
            if(t%10==x) ans++;
            t/=10;
        }
    }
    printf("%d\n",ans);
    system("pause");
    return 0;
}