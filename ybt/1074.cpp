/*
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-11-17 20:52:29
 * @LastEditTime: 2021-11-17 21:09:56
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1074.cpp
 */
#include <cstdio>

int n,a=0,b=0,i=0;
bool flag=false;

int main(){
    for(i=1;i<=12&&flag==false;i++){
        scanf("%d",&n);
        b+=300;
        if(b<n)i=-i,flag=true;
        else{
            a+=(b-n)/100*100;
            b=(b-n)%100;
        }
    }
    if(flag) printf("%d\n",i-1);
    else printf("%.0lf\n",a*1.2+b);
    //system("pause");
    return 0;
}