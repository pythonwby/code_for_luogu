/*
   1113：不与最大数相同的数字之和
 * @Autor: 乌搏猿
 * @Date: 2021-12-01 20:38:11
 * @LastEditTime: 2021-12-01 20:53:02
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1113.cpp
 */
#include <cstdio>

int n,a[110],max=-2100000000,cnt;

int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>max) max=a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]!=max) cnt+=a[i];
    }
    printf("%d\n",cnt);
    system("pause");
    return 0;
}