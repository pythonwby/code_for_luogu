/*
   2026£º¡¾Àý4.12¡¿½×³ËºÍ
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-11-22 21:04:14
 * @LastEditTime: 2021-11-22 21:07:08
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\2026.cpp
 */
#include <cstdio>

int n,ans;

int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int tmp=1;
        for(int j=1;j<=i;j++){
            tmp*=j;
        }
        ans+=tmp;
    }
    printf("%d\n",ans);
    system("pause");
    return 0;
}