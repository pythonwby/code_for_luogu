/*
   1084£ºÃÝµÄÄ©Î²
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-11-21 10:44:24
 * @LastEditTime: 2021-11-21 10:47:30
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1084.cpp
 */
#include <cstdio>
typedef long long ll;

ll a,b,ans;

int main(){
    scanf("%lld%lld",&a,&b);
    ans=a%1000;
    for(int i=1;i<b;i++){
        ans=(ans%1000*a%1000)%1000;
    }
    printf("%03lld\n",ans);
    system("pause");
    return 0;
}