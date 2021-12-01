/*
   1102：与指定数字相同的数的个数
 * @Autor: 乌搏猿
 * @Date: 2021-12-01 20:49:52
 * @LastEditTime: 2021-12-01 20:52:49
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1102.cpp
 */
#include <cstdio>

int n,a[110],m,ans;

int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&m);
    for(int i=0;i<n;i++){
        if(a[i]==m) ans++;
    }
    printf("%d\n",ans);
    system("pause");
    return 0;
}