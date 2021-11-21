/*
   1089£ºÊý×Ö·´×ª

 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-11-21 15:06:10
 * @LastEditTime: 2021-11-21 15:08:12
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1089.cpp
 */
#include <cstdio>

bool flag=false;
int n,m;

int main(){
    scanf("%d",&n);
    if(n<0){
        flag=true;
        n=-n;
    }
    while(n>0){
        m*=10;
        m+=n%10;
        n/=10;
    }
    if(flag) m=-m;
    printf("%d\n",m);
    system("pause");
    return 0;
}