/*
   2042£º¡¾Àý5.10¡¿Ï¡Êè¾ØÕó
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-12-06 20:54:02
 * @LastEditTime: 2021-12-06 20:58:44
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\2042.cpp
 */
#include <cstdio>

int n,m;

int main(){
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            int tmp;
            scanf("%d",&tmp);
            if(tmp!=0) printf("%d %d %d\n",i,j,tmp);
        }
    }
    system("pause");
    return 0;
}