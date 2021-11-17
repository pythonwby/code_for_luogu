/*
   2018：【例4.3】输出奇偶数之和
 * @Autor: 乌搏猿
 * @Date: 2021-11-15 21:20:40
 * @LastEditTime: 2021-11-15 21:21:49
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\2018.cpp
 */
#include <cstdio>

int n,a,b;

int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++) if(i%2==0) a+=i;else b+=i;
    printf("%d %d\n",a,b);
    system("pause");
    return 0;
}