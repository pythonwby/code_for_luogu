/*
   1081£º·ÖÆ»¹û
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-11-18 20:28:13
 * @LastEditTime: 2021-11-18 20:29:21
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1081.cpp
 */
#include <cstdio>

int ans,n;

int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++) ans+=i;
    printf("%d\n",ans);
    system("pause");
    return 0;
}