/*
   P7909 [CSP-J 2021] 分糖果（民间数据）
 * @Autor: 乌搏猿
 * @Date: 2021-10-24 16:15:35
 * @LastEditTime: 2021-10-24 16:22:56
 * @state: Other
 * @FilePath: \code_for_luogu\luogu\P7909.cpp
 */
#include <cstdio>

int n,l,r,maxn=0;

int main(){
    scanf("%d%d%d",&n,&l,&r);
    for(int i=l;i<=r;i++){
        if(maxn==n-1) break;
        if(i%n==0) continue;
        int tmp=i;
        while(tmp>=n) tmp-=n;
        if(tmp>maxn) maxn=tmp;
    }
    printf("%d\n",maxn);
    system("pause");
    return 0;
}