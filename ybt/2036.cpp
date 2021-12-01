/*
   2036£º¡¾Àý5.3¡¿¿ª¹ØÃÅ
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-12-01 20:42:13
 * @LastEditTime: 2021-12-01 20:48:56
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\2036.cpp
 */
#include <cstdio>

int n;
bool a[1010];

int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++) a[i]=true;
    for(int i=2;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j%i==0) a[j]=!a[j];
        }
    }
    for(int i=1;i<=n;i++){
        if(a[i]) printf("%d ",i);
    }
    printf("\n");
    system("pause");
    return 0;
}