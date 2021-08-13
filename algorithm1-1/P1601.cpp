/* 
   P1303 A*B Problem
 * @Author: 乌搏猿
 * @Date: 2021-08-12 16:44:53
 * @LastEditTime: 2021-08-13 17:23:54
 * @state: Writing
 * @FilePath: \code_for_luogu\algorithm1-1\P1601.cpp
 */
//注释的代码是调试时写的，没删
//暂未完成！！！
#include <cstdio>

//a:数字a,b:数字b,c:数字c,n:答案长度
short a[2000],b[2000],c[2000],n;
//ac:数字a的输入,bb:数字b的输入
char ac[2000],bc[2000];
//la:数字a的长度,lb,数字b的长度
int la,lb;

//max:自己实现max函数
int max(int x,int y){
    if(x>y) return x;
    if(y>x) return y;
    return x;
}
//abs:自己实现abs函数
int abs(int x){
    if(x<0) return -x;
    return x;
}
//ch_to_short:字符串转高精度数
void ch_to_short(){
    while(ac[la]!='\0')la++;
    while(bc[lb]!='\0')lb++;
    for(int i=la-1;i>=0;i--) a[i]=ac[abs(i-la)-1]-'0';
    for(int i=lb-1;i>=0;i--) b[i]=bc[abs(i-lb)-1]-'0';
}
//add:高精度乘法函数
void add(){
    ch_to_short();
    short t,d;
    int e;
    for(int i=0;i<lb;i++){
        for(int j=0;j<la;j++){
            d=a[j]*b[i]+t;
            t=d/10;
            c[j+e]+=d%10;
            if(j+e>n) n++;
        }
        if(t){
            c[n]+=t;
            n++;
        }
        e++;
        t=0;
    }
}
int main_1601(){
    scanf("%s%s",ac,bc);
    add();
    //输出要倒序
    for(short i=n-1;i>=0;i--){
        printf("%hd",c[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}