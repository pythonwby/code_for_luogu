/*
   P2249 (Éî»ù13.Àý1) ²éÕÒ
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-08-17 13:13:39
 * @LastEditTime: 2021-08-17 13:43:53
 * @state: AC
 * @FilePath: \code_for_luogu\algorithm1-6\P2249.cpp
 */
#include <cstdio>

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
int main(){
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