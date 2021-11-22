/*
   2028£º¡¾Àý4.14¡¿°ÙÇ®Âò°Ù¼¦
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-11-22 21:16:30
 * @LastEditTime: 2021-11-22 21:56:22
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\2028.cpp
 */
#include <cstdio>

int main(){
    for(int i=0;i<25;i++){
        for(int j=0;j<35;j++){
            for(int k=0;k<305;k++){
                if(i*5+j*3+k/3.0==100&&i+j+k==100&&k%3==0) printf("%d %d %d\n",i,j,k);
            }
        }
    }
    system("pause");
    return 0;
}
