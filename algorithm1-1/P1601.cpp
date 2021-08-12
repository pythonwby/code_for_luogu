/*
P1601 A+B Problem（高精）
注释的代码是调试时写的，没删
*/
#include <cstdio>

//a:数字a,b:数字b,c:数字c,n:答案长度
short a[500],b[500],c[500],n;
//ac:数字a的输入,bb:数字b的输入
char ac[510],bc[510];
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
//add:高精度加法函数
void add(){
    ch_to_short();
    short t;
    /*
    printf("a[i]\tb[i]\tt\n");
    */
    for(int i=0;i<max(la,lb);i++){
        int d;
        if(i<la&&i<lb){
            d=a[i]+b[i]+t;
            t=d/10;
        }
        else if(i<la){
            d=a[i]+t;
            t=d/10;
        }
        else if(i<lb){
            d=b[i]+t;
            t=d/10;
        }
        c[i]=d%10;
        n++;
        /*
        printf("%hd\t%hd\t%hd\n",a[i],b[i],t);
        */
    }
    //记得把最高位的进位也加上
    if(t) c[n++]=t;
}
int main(){
    scanf("%s%s",ac,bc);
    add();
    //输出要倒序
    for(short i=n-1;i>=0;i--){
        printf("%hd",c[i]);
    }
    system("pause");
    return 0;
}