/*
   P2141 [NOIP2014 普及组] 珠心算测验
 * @Autor: 乌搏猿
 * @Date: 2021-09-27 20:18:28
 * @LastEditTime: 2021-09-27 20:47:16
 * @state: AC
 * @FilePath: \code_for_luogu\luogu\P2141.cpp
 */
#include <cstdio>

//a:记录每个数字,b:记录a中的同下标数有没有用过
int n,a[105],ans;
bool b[105];

int main_2141(){
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=0;k<n;k++){
                if(!b[k]&&a[i]+a[j]==a[k]){
                    ans++;
                    b[k]=true;
                    break;
                }
            }
        }
    }
    printf("%d\n",ans);
    system("pause");
    return 0;
}