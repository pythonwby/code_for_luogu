/*
   1121：计算矩阵边缘元素之和
 * @Autor: 乌搏猿
 * @Date: 2021-12-06 21:19:12
 * @LastEditTime: 2021-12-06 21:28:38
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1121.cpp
 */
#include <cstdio>

int n,m,ans;

int main(){
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int tmp;
            scanf("%d",&tmp);
            if(i==0||i==n-1) ans+=tmp;
            else if(j==0||j==m-1) ans+=tmp;
        }
    }
    printf("%d\n",ans);
    system("pause");
    return 0;
}