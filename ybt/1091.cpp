/*
   1091£ºÇó½×³ËµÄºÍ
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-11-24 21:00:45
 * @LastEditTime: 2021-11-24 21:00:46
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1091.cpp
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