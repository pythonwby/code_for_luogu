/*
   2016£º¡¾Àý4.1¡¿forÑ­»·ÇóºÍ
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-11-15 21:14:32
 * @LastEditTime: 2021-11-15 21:18:12
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\2016.cpp
 */
#include <cstdio>

int n,ans=0;

int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++) ans+=i;
    printf("%d\n",ans);
    system("pause");
    return 0;
}