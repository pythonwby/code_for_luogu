/*
   1111：不高兴的津津
 * @Autor: 乌搏猿
 * @Date: 2021-12-01 20:21:19
 * @LastEditTime: 2021-12-01 20:33:30
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1111.cpp
 */
#include <cstdio>

int max=0,m;

int main(){
    for(int i=0;i<7;i++){
        int a,b;
        scanf("%d%d",&a,&b);
        if(a+b>8&&a+b>m) max=i+1,m=a+b;
    }
    printf("%d\n",max);
    system("pause");
    return 0;
}