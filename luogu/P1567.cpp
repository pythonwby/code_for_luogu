/*
   P1567 统计天数
 * @Autor: 乌搏猿
 * @Date: 2021-09-27 20:51:59
 * @LastEditTime: 2021-09-27 21:06:44
 * @state: AC
 * @FilePath: \code_for_luogu\luogu\P1567.cpp
 */
#include <cstdio>

//a:记录每一天的最高气温
int n,ans=0,a[1000005],tmp=0;

int main_1567(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    for(int i=1;i<=n;i++){
        if(a[i]>a[i-1]) tmp++;
        else{
            if(tmp>ans) ans=tmp;
            tmp=1;
        }
    }
    if(tmp>ans) ans=tmp;
    printf("%d\n",ans);
    system("pause");
    return 0;
}