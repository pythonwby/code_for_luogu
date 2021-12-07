/*
   1126£º¾ØÕó×ªÖÃ
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-12-07 20:43:49
 * @LastEditTime: 2021-12-07 21:01:35
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1126.cpp
 */
#include <cstdio>

int n,m,a[110][110];

int main(){
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}