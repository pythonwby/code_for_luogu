/*
   1062：最高的分数
 * @Autor: 乌搏猿
 * @Date: 2021-11-15 21:31:42
 * @LastEditTime: 2021-11-15 21:33:01
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1062.cpp
 */
#include <cstdio>

int n,ans;

int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int tmp;
        scanf("%d",&tmp);
        if(tmp>ans) ans=tmp;
    }
    printf("%d\n",ans);
    system("pause");
    return 0;
}