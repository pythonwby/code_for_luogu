/*
   P2249 [深基13.例1] 查找
 * @Autor: 乌搏猿
 * @Date: 2021-08-17 13:13:39
 * @LastEditTime: 2021-09-24 21:58:24
 * @state: AC
 * @FilePath: \code_for_luogu\algorithm1-6\P2249.cpp
 */
#include <cstdio>

//a:输入的数组,n:数组长度,m:询问次数
int a[1000010],n,m;

int find(int x){
    int l=0,r=n-1;
    while(l<r){
        int mid=(l+r)/2;
        if(a[mid]>=x) r=mid;
        else l=mid+1;
    }
    if(a[l]==x) return l+1;
    return -1;
}
int main_2249(){
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<m;i++){
        int x;
        scanf("%d",&x);
        printf("%d ",find(x));
    }
    system("pause");
    return 0;
}