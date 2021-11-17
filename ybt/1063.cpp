/*
   1063：最大跨度值
 * @Autor: 乌搏猿
 * @Date: 2021-11-15 21:34:15
 * @LastEditTime: 2021-11-15 21:36:10
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1063.cpp
 */
#include <cstdio>

int n,min=99999,max=-99999;

int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int tmp;
        scanf("%d",&tmp);
        if(tmp<min) min=tmp;
        else if(tmp>max) max=tmp;
    }
    printf("%d\n",max-min);
    system("pause");
    return 0;
}