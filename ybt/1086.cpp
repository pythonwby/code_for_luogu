/*
   1086£º½Ç¹È²ÂÏë
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-11-18 20:56:35
 * @LastEditTime: 2021-11-18 21:03:11
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1086.cpp
 */
#include <cstdio>

int n;

int main(){
    scanf("%d",&n);
    while(n!=1){
        if(n%2==0){
            printf("%d/2=%d\n",n,n/2);
            n/=2;
        } else if(n%2==1){
            printf("%d*3+1=%d\n",n,n*3+1);
            n=n*3+1;
        }
    }
    printf("End\n");
    system("pause");
    return 0;
}