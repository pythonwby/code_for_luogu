/*
   1110：查找特定的值
 * @Autor: 乌搏猿
 * @Date: 2021-11-28 11:09:43
 * @LastEditTime: 2021-11-28 11:26:25
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1110.cpp
 */
#include <cstdio>

int n,x,a[10010];
bool flag=false;

int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(a[i]==x){
            printf("%d\n",i+1);
            flag=true;
            break;
        }
    }
    if(!flag) printf("-1\n");
    system("pause");
    return 0;
}