/*
   1095：数1的个数
 * @Autor: 乌搏猿
 * @Date: 2021-11-24 21:07:53
 * @LastEditTime: 2021-11-24 21:10:01
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1095.cpp
 */
#include <cstdio>

int n,ans;

int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int tmp=i;
        while(tmp){
            if(tmp%10==1) ans++;
            tmp/=10;
        }
    }
    printf("%d\n",ans);
    system("pause");
    return 0;
}