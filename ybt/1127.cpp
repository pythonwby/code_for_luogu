/*
   1127£ºÍ¼ÏñÐý×ª
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-12-07 21:02:38
 * @LastEditTime: 2021-12-07 21:03:57
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1127.cpp
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
        for(int j=n-1;j>-1;j--){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}