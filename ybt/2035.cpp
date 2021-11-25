/*
   2035£º¡¾Àý5.2¡¿Æ½ÒÆÊý¾Ý

 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-11-25 20:47:58
 * @LastEditTime: 2021-11-25 20:49:35
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\2035.cpp
 */
#include <cstdio>

int n,a[1010];

int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    a[n]=a[0];
    for(int i=1;i<=n;i++) a[i-1]=a[i];
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    printf("\n");
    system("pause");
    return 0;
}