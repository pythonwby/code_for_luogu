/*
   1096£ºÊý×ÖÍ³¼Æ
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-11-25 20:32:51
 * @LastEditTime: 2021-11-25 20:34:40
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1096.cpp
 */
#include <cstdio>

int l,r,ans;

int main(){
    scanf("%d%d",&l,&r);
    for(int i=l;i<=r;i++){
        int tmp=i;
        while(tmp){
            if(tmp%10==2) ans++;
            tmp/=10;
        }
    }
    printf("%d\n",ans);
    system("pause");
    return 0;
}