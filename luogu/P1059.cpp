/*
   P1059 [NOIP2006 普及组] 明明的随机数
 * @Autor: 乌搏猿
 * @Date: 2021-10-17 14:12:56
 * @LastEditTime: 2021-10-17 14:30:07
 * @state: AC
 * @FilePath: \code_for_luogu\luogu\P1059.cpp
 */
#include <cstdio>
#include <algorithm>
using namespace std;

int n=0,a[110];

int main_1059(){
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]==a[j]&&i!=j){
                for(int k=j;k<n;k++) a[k]=a[k+1];
                n--;
            }
        }
    }
    sort(a,a+n);
    printf("%d\n",n);
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    printf("\n");
    system("pause");
    return 0;
}