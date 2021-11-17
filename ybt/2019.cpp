/*
   2019£º¡¾Àý4.4¡¿Çó½×³Ë
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-11-15 21:22:32
 * @LastEditTime: 2021-11-15 21:25:58
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\2019.cpp
 */
#include <cstdio>

long long n,ans=1;

int main(){
    scanf("%lld",&n);
    for(int i=1;i<=n;i++) ans*=i;
    printf("%lld\n",ans);
    system("pause");
    return 0;
}