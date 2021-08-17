/*
   P1464 Function
 * @Autor: 乌搏猿
 * @Date: 2021-08-16 12:48:03
 * @LastEditTime: 2021-08-17 13:55:20
 * @state: Other
 * @FilePath: \code_for_luogu\algorithm1-4\P1464.cpp
 */
//暂未完成
#include <cstdio>
#define ll long long

//sum:调试变量
int sum;

//w:题目中指定的函数
ll w(ll a,ll b,ll c){
    sum++;
    printf("%d\n",sum);
    if(a<=0||b<=0||c<=0) return 1;
    if(a>20||b>20||c>20) return w(20,20,20);
    if(a<b&&b<c) return w(a,b,c-1)+w(a,b-1,c-1)+w(a,b-1,c);
    return w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
}
int main(){
    while(true){
        ll a,b,c;
        scanf("%lld%lld%lld",&a,&b,&c);
        if(a==-1&&b==-1&&c==-1) break;
        ll d=w(a,b,c);
        printf("w(%lld, %lld, %lld) = %d",a,b,c,d);
    }
    system("pause");
    return 0;
}