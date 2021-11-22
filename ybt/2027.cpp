/*
   2027£º¡¾Àý4.13¡¿Èý½ÇÐÎ
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-11-22 21:08:34
 * @LastEditTime: 2021-11-22 21:13:00
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\2027.cpp
 */
#include <cstdio>

int n;

int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
    system("pause");
    return 0;
}