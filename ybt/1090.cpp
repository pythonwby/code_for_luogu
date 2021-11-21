/*
   1090£ºº¬k¸ö3µÄÊý
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-11-21 15:09:54
 * @LastEditTime: 2021-11-21 15:20:30
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1090.cpp
 */
#include <cstdio>

bool flag1=false,flag2=false;
int m,k,a;

int main(){
    scanf("%d%d",&m,&k);
    if(m%19==0) flag1=true;
    while(m>0){
        if(m%10==3) a++;
        m/=10;
    }
    if(a==k) flag2=true;
    if(flag1&&flag2) printf("YES\n");
    else printf("NO\n");
    system("pause");
    return 0;
}