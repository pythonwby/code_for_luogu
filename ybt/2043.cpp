/*
   2043£º¡¾Àý5.11¡¿Ñî»ÔÈý½ÇÐÎ
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-12-06 21:02:39
 * @LastEditTime: 2021-12-06 21:12:03
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\2043.cpp
 */
#include <cstdio>

int a[23][23]={{0},{0,1},{0,1,1}},n;

int main(){
    scanf("%d",&n);
    printf("1\n1 1\n");
    for(int i=3;i<=n;i++){
        a[i][1]=1;
        a[i][i]=1;
        printf("1 ");
        for(int j=2;j<i;j++){
            printf("%d ",a[i-1][j-1]+a[i-1][j]);
            a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
        printf("1\n");
    }
    system("pause");
    return 0;
}