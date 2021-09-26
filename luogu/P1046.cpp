/*
   P1046 [NOIP2005 普及组] 陶陶摘苹果
 * @Autor: 乌搏猿
 * @Date: 2021-09-26 20:46:03
 * @LastEditTime: 2021-09-26 20:51:41
 * @state: AC
 * @FilePath: \code_for_luogu\luogu\P1046.cpp
 */
#include <cstdio>

//n:陶陶手的最大高度,pg:记录每个苹果的高度,ans:答案
int n,ans=0,pg[15];

int main_1046(){
    for(int i=0;i<10;i++) scanf("%d",&pg[i]);
    scanf("%d",&n);
    for(int i=0;i<10;i++) if(pg[i]<=n+30) ans++;
    printf("%d\n",ans);
    system("pause");
    return 0;
}