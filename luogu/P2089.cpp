/*
   P2089 烤鸡
 * @Autor: 乌搏猿
 * @Date: 2021-10-07 09:38:05
 * @LastEditTime: 2021-10-07 10:26:40
 * @state: AC
 * @FilePath: \code_for_luogu\luogu\P2089.cpp
 */
#include <cstdio>
#include <cstring>

//a~j为循环变量,cnt:记录数量的变量
int a,b,c,d,e,f,g,h,i,j,n,cnt=0;
int main_2089(){
    scanf("%d",&n);
    for(a=1;a<=3;a++){
        for(b=1;b<=3;b++){
            for(c=1;c<=3;c++){
                for(d=1;d<=3;d++){
                    for(e=1;e<=3;e++){
                        for(f=1;f<=3;f++){
                            for(g=1;g<=3;g++){
                                for(h=1;h<=3;h++){
                                    for(i=1;i<=3;i++){
                                        for(j=1;j<=3;j++){
                                            if(a+b+c+d+e+f+g+h+i+j==n){
                                                cnt++;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    printf("%d\n",cnt);
    if(!cnt){
        system("pause");
        return 0;
    }
    for(a=1;a<=3;a++){
        for(b=1;b<=3;b++){
            for(c=1;c<=3;c++){
                for(d=1;d<=3;d++){
                    for(e=1;e<=3;e++){
                        for(f=1;f<=3;f++){
                            for(g=1;g<=3;g++){
                                for(h=1;h<=3;h++){
                                    for(i=1;i<=3;i++){
                                        for(j=1;j<=3;j++){
                                            if(a+b+c+d+e+f+g+h+i+j==n){
                                                printf("%d %d %d %d %d %d %d %d %d %d\n",a,b,c,d,e,f,g,h,i,j);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    system("pause");
    return 0;
}