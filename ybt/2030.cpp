/*
   2030£º¡¾Àı4.16¡¿ÕÒËØÊı
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-11-24 20:42:32
 * @LastEditTime: 2021-11-24 20:51:55
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\2030.cpp
 */
#include <cstdio>

int a,b;

bool zs(int x){
    if(x<2) return false;
    for(int i=2;i*i<=x;i++){
        if(x%i==0) return false;
    }
    return true;
}
int main(){
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++){
        if(zs(i)) printf("%d\n",i);
    }
    system("pause");
    return 0;
}