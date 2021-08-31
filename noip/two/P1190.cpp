/*
   P1190 [NOIP2010 普及组] 接水问题
 * @Autor: 乌搏猿
 * @Date: 2021-08-31 16:17:41
 * @LastEditTime: 2021-08-31 17:40:12
 * @state: AC
 * @FilePath: \code_for_luogu\noip\two\P1190.cpp
 */
#include <cstdio>
//a:学生所需水量,b:水龙头当前状态
int n,m,a[10010],b[110],ans=0;

int main_1190(){
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(i<m) b[i]=a[i];
    }
    int max=-1;
    int k=m;
    while(k<n){
        for(int i=0;i<m;i++){
            b[i]--;
            if(b[i]<=0){
                b[i]=a[k];
                k++;
            }
        }
        ans++;
    }
    for(int i=0;i<m;i++) if(b[i]>max) max=b[i];
    ans+=max;
    printf("%d\n",ans);
    system("pause");
    return 0;
}