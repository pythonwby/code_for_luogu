/*
   P1075 [NOIP2012 普及组] 质因数分解
 * @Autor: 乌搏猿
 * @Date: 2021-08-27 17:08:26
 * @LastEditTime: 2021-08-27 17:08:27
 * @state: AC
 * @FilePath: \code_for_luogu\noip\P1075.cpp
 */
#include <cstdio>

//n:输入
int n;

int main_1075(){
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        if(n%i==0){
            printf("%d\n",n/i);
            return 0;
        }
    }
    return -1;
}