/*
   1043：整数大小比较
 * @Autor: 乌搏猿
 * @Date: 2021-11-14 12:11:52
 * @LastEditTime: 2021-11-14 12:15:30
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1043.cpp
 */
#include <cstdio>
typedef long long ll;

ll a,b;

int main(){
    scanf("%lld%lld",&a,&b);
    if(a<b) printf("<\n");
    if(a==b) printf("=\n");
    if(a>b) printf(">\n");
    system("pause");
    return 0;
}