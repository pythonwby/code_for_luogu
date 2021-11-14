/*
   2069£º¡¾Àý2.12 ¡¿ÌÇ¹ûÓÎÏ·
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-11-07 10:23:46
 * @LastEditTime: 2021-11-07 10:30:38
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\2069.cpp
 */
#include <cstdio>

int a[10];

int main(){
    for(int i=1;i<=5;i++) scanf("%d",&a[i]);
    for(int i=1;i<=5;i++){
        a[i]/=3;
        if(i-1==0) a[5]+=a[i];
        else a[i-1]+=a[i];
        if(i+1==6) a[1]+=a[i];
        else a[i+1]+=a[i];
    }
    for(int i=1;i<=5;i++) printf("%5d",a[i]);
    printf("\n");
    system("pause");
    return 0;
}