/*
   2038：【例5.5】最大数位置
 * @Autor: 乌搏猿
 * @Date: 2021-11-25 20:52:29
 * @LastEditTime: 2021-11-25 20:57:23
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\2038.cpp
 */
#include <cstdio>
typedef long long ll;

int n,maxn;
ll a[1010],max=-2100000000;

int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
        if(a[i]>max) maxn=i,max=a[i];
    }
    printf("%d\n",maxn+1);
    system("pause");
    return 0;
}