/*
   1075£ºÒ©·¿¹ÜÀí
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-11-17 21:11:22
 * @LastEditTime: 2021-11-17 21:17:25
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1075.cpp
 */
#include <cstdio>

int m,n,ans;

int main(){
    scanf("%d%d",&m,&n);
    for(int i=0;i<n;i++){
        int tmp;
        scanf("%d",&tmp);
        if(m<tmp) ans++;
        else m-=tmp;
    }
    printf("%d\n",ans);
    system("pause");
    return 0;
}