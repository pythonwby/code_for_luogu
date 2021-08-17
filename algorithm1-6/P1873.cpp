/*
   P1873 ����
 * @Autor: �ڲ�Գ
 * @Date: 2021-08-17 14:09:25
 * @LastEditTime: 2021-08-17 19:04:42
 * @state: AC
 * @FilePath: \code_for_luogu\algorithm1-6\P1873.cpp
 */
#include <cstdio>
typedef long long ll;

//a:��¼��ľ�߶ȵ�����,n:��ľ����,m:����ľ�ϳ���
ll a[1000010],n,m;

bool f(ll x){
    ll sum=0;
    for(ll i=0;i<n;i++){
        if(a[i]>x) sum+=a[i]-x;
    }
    return sum>=m;
}
int main(){
    scanf("%lld%lld",&n,&m);
    for(ll i=0;i<n;i++) scanf("%lld",&a[i]);
    ll l=0,r=1000000,mid,ans;
    while(l<=r){
        mid=(l+r)/2;
        if(f(mid)){
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    printf("%lld\n",ans);
    system("pause");
    return 0;
}