/*
   1103£ºÌÕÌÕÕªÆ»¹û
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-11-25 21:01:24
 * @LastEditTime: 2021-11-25 21:03:49
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1103.cpp
 */
#include <cstdio>

int tt,ans,pg[15];

int main(){
    for(int i=0;i<10;i++){
        scanf("%d",&pg[i]);
    }
    scanf("%d",&tt);
    for(int i=0;i<10;i++){
        if(tt+30>=pg[i]) ans++;
    }
    printf("%d\n",ans);
    system("pause");
    return 0;
}