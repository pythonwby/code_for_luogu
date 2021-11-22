/*
   2029£º¡¾Àý4.15¡¿Ë®ÏÉ»¨Êý
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-11-22 21:56:34
 * @LastEditTime: 2021-11-22 21:58:32
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\2029.cpp
 */
#include <cstdio>

int main(){
    for(int i=1;i<10;i++){
        for(int j=0;j<10;j++){
            for(int k=0;k<10;k++){
                if(i*i*i+j*j*j+k*k*k==i*100+j*10+k) printf("%d%d%d\n",i,j,k);
            }
        }
    }
    system("pause");
    return 0;
}