/*
   1124£º¾ØÕó¼Ó·¨
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-12-07 20:24:56
 * @LastEditTime: 2021-12-07 20:40:39
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1124.cpp
 */
#include <cstdio>

int a[110][110],b[110][110],n,m;

int main(){
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}