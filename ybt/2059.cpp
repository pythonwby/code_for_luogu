/*
   2059£º¡¾Àý3.11¡¿Âò±Ê
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-11-14 13:51:38
 * @LastEditTime: 2021-11-14 14:18:56
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\2059.cpp
 */
#include <cstdio>

int x,n4,n5,n6;

int main(){
    scanf("%d",&x);
    if(x>4){
        n4=x/4;
        x%=4;
        if(x==1){
            n5++;
            n4--;
        }
        if(x==2){
            n6++;
            n4--;
        }
        if(x==3){
            n6++;
            n4--;
            if(n4>0){
                n5++;
                n4--;
            }
        }
    }
    printf("%d %d %d\n",n6,n5,n4);
    system("pause");
    return 0;
}