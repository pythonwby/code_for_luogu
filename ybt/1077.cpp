/*
   1077：统计满足条件的4位数
 * @Autor: 乌搏猿
 * @Date: 2021-11-17 21:18:22
 * @LastEditTime: 2021-11-17 21:21:33
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1077.cpp
 */
#include <cstdio>

int n,ans;

int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int tmp;
        scanf("%d",&tmp);
        if(tmp%10-tmp%100/10-tmp%1000/100-tmp/1000>0) ans++;
    }
    printf("%d\n",ans);
    system("pause");
    return 0;
}