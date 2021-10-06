/*
   P1028 [NOIP2001 普及组] 数的计算
 * @Autor: 乌搏猿
 * @Date: 2021-10-06 11:04:44
 * @LastEditTime: 2021-10-06 11:18:08
 * @state: AC
 * @FilePath: \code_for_luogu\luogu\P1028.cpp
 */
#include <cstdio>

//a:记忆化数组
long long n,a[100010];

long long f(long long x){
    if(a[x]!=0) return a[x];
    long long sum=1;
    for(long long i=1;i<=x/2;i++) sum+=f(i);
    a[x]=sum;
    return sum;
}
int main_1028(){
    scanf("%lld",&n);
    printf("%lld\n",f(n));
    system("pause");
    return 0;
}
