/*
   2041£º¡¾Àý5.9¡¿ÐÂ¾ØÕó
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-12-06 20:33:34
 * @LastEditTime: 2021-12-06 20:52:08
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\2041.cpp
 */
#include <cstdio>

int a[50][50],n;

int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=1,j=1;i<=n;i++,j++){
        a[i][j]+=10;
    }
    for(int i=1,j=n;i<=n;i++,j--){
        if(i!=j) a[i][j]+=10;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}