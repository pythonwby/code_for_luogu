/*
   P1464 Function
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-10-07 11:04:51
 * @LastEditTime: 2021-10-07 11:25:24
 * @state: Other
 * @FilePath: \code_for_luogu\luogu\P1464.cpp
 */
#include <cstdio>
#define ll long long

//f:¼ÇÒä´æ´¢Êý×é
ll f[50][50][50];

ll w(ll x,ll y,ll z){
    if(x<=0||y<=0||z<=0) return 1;
    if(x>20||y>20||z>20) return w(20,20,20);
    if(f[x][y][z]!=0) return f[x][y][z];
    if(x<y&&y<z){
        f[x][y][z]=w(x,y,z-1)+w(x,y-1,z-1)-w(x,y-1,z);
        return f[x][y][z];
    }
    f[x][y][z]=w(x-1,y,z)+w(x-1,y-1,z)+w(x-1,y,z-1)-w(x-1,y-1,z-1);
    return f[x][y][z];

}
int main(){
    for(;;){
        ll a,b,c;
        scanf("%lld%lld%lld",&a,&b,&c);
        if(a==-1&&b==-1&&c==-1) break;
        printf("w(%lld, %lld, %lld) = %lld\n",a,b,c,w(a,b,c));
    }
    system("pause");
    return 0;
}