/*
   2053£º¡¾Àý3.3¡¿Èý¸öÊý
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-11-08 21:43:24
 * @LastEditTime: 2021-11-08 21:45:07
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\2053.cpp
 */
#include <cstdio>
#include <algorithm>
using namespace std;

int a[5];

int main(){
    for(int i=0;i<3;i++) scanf("%d",&a[i]);
    sort(a,a+3);
    for(int i=2;i>-1;i--) printf("%d ",a[i]);
    printf("\n");
    system("pause");
    return 0;
}