/*
   1065£ºÆæÊýÇóºÍ
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-11-17 19:58:59
 * @LastEditTime: 2021-11-17 20:12:41
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1065.cpp
 */
#include <cstdio>

int n,m,ans;

int main(){
    scanf("%d%d",&m,&n);
    for(int i=m;i<=n;i++) if(i%2==1) ans+=i;
    printf("%d\n",ans);
    system("pause");
    return 0;
}