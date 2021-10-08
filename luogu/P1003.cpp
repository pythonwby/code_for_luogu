/*
   P1003 [NOIP2011 提高组] 铺地毯
 * @Autor: 乌搏猿
 * @Date: 2021-10-08 21:39:59
 * @LastEditTime: 2021-10-08 21:49:18
 * @state: AC
 * @FilePath: \code_for_luogu\luogu\P1003.cpp
 */
#include <cstdio>

//所有变量与题目相同
int n,x,y,a[10010],b[10010],g[10010],k[10010];
//flag:标记询问是否有解
bool flag=false;

int main_1003(){
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d%d%d%d",&a[i],&b[i],&g[i],&k[i]);
    scanf("%d%d",&x,&y);
    for(int i=n-1;i>-1;i--){
        if(x>=a[i]&&y>=b[i]&&a[i]+g[i]>=x&&b[i]+k[i]>y){
            printf("%d\n",i+1);
            flag=true;
            break;
        }
    }
    if(!flag) printf("-1\n");
    system("pause");
    return 0;
}