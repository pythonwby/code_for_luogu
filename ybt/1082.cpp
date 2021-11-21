/*
   1082：求小数的某一位
 * @Autor: 乌搏猿
 * @Date: 2021-11-21 09:54:17
 * @LastEditTime: 2021-11-21 10:27:02
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1082.cpp
 */
#include <cstdio>

int a,b,n;

int main(){
    scanf("%d%d%d",&a,&b,&n);
    for(int i=0;i<n;i++){
        a%=b;
        a*=10;
    }
    a/=b;
    printf("%d\n",a);
    system("pause");
    return 0;
}