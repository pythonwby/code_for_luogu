/*
   1105：数组逆序重存放
 * @Autor: 乌搏猿
 * @Date: 2021-11-28 11:05:22
 * @LastEditTime: 2021-11-28 11:07:16
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1105.cpp
 */
#include <cstdio>

int n,a[110];

int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=n-1;i>-1;i--) printf("%d ",a[i]);
    printf("\n");
    system("pause");
    return 0;
}