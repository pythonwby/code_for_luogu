/*
   1119£º¾ØÕó½»»»ÐÐ
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-12-06 21:13:24
 * @LastEditTime: 2021-12-06 21:16:47
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1119.cpp
 */
#include <algorithm>
#include <cstdio>
using namespace std;

int a[5][5],n,m;

int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d%d",&n,&m);
    swap(a[n-1],a[m-1]);
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}