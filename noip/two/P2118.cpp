/*
   P2118 [NOIP2014 普及组] 比例简化
 * @Autor: 乌搏猿
 * @Date: 2021-08-30 18:14:53
 * @LastEditTime: 2021-08-30 18:33:36
 * @state: Other
 * @FilePath: \code_for_luogu\noip\two\P2118.cpp
 */
//暂未完成！！！
#include <cstdio>
#include <algorithm>
using namespace std;

int a,b,c;

int main(){
    scanf("%d%d%d",&a,&b,&c);
    printf("%d %d\n",a/__gcd(a,b),b/__gcd(a,b));
    system("pause");
    return 0;
}