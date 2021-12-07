/*
   1123£ºÍ¼ÏñÏàËÆ¶È
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-12-07 20:19:07
 * @LastEditTime: 2021-12-07 20:24:21
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1123.cpp
 */
#include <cstdio>

int a[110][110],n,m,cnt;

int main(){
    scanf("%d%d",&m,&n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int tmp;
            scanf("%d",&tmp);
            if(tmp==a[i][j]) cnt++;
        }
    }
    printf("%.2lf\n",(cnt*1.0)/(n*m)*100.0);
    system("pause");
    return 0;
}