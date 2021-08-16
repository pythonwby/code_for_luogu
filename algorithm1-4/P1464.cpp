/*
   P1464 Function
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-08-16 12:48:03
 * @LastEditTime: 2021-08-16 17:02:20
 * @state: Other
 * @FilePath: \code_for_luogu\algorithm1-4\P1464.cpp
 */
//ÔÝÎ´Íê³É
#include <cstdio>
#define ll long long

ll w(ll a,ll b,ll c){
    if(a<=0||b<=0||c<=0) return 1;
    if(a>20||b>20||c>20) return w(20,20,20);
    if(a<b&&b<c) return w(a,b,c-1)+w(a,b-1,c-1)+w(a,b-1,c);
    return w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
}
int main(){
    while(true){
        ll a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if(a==-1&&b==-1&&c==-1) break;
        ll d=w(a,b,c);
        printf("w(%d, %d, %d) = %d",a,b,c,d);
    }
    
    system("pause");
    return 0;
}