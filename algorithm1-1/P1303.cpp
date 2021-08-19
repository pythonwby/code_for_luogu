/* 
   P1303 A*B Problem
 * @Author: 乌搏猿
 * @Date: 2021-08-12 16:44:53
 * @LastEditTime: 2021-08-19 15:59:22
 * @state: AC
 * @FilePath: \code_for_luogu\algorithm1-1\P1303.cpp
 */
#include <cstdio>

//a:数字a,b:数字b,c:数字c,n:答案长度
int a[2010],b[2010],c[4010],n;
//ac:数字a的输入,bb:数字b的输入
char ac[2010],bc[2010];
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
//ch_to_int:字符串转高精度数
void ch_to_int(){
    while(ac[la]!='\0')la++;
    while(bc[lb]!='\0')lb++;
    for(int i=la-1;i>=0;i--) a[i]=ac[abs(i-la)-1]-'0';
    for(int i=lb-1;i>=0;i--) b[i]=bc[abs(i-lb)-1]-'0';
}
//add:高精度乘法函数
void add(){
    ch_to_int();
    for(int i=0;i<la;i++){
        for(int j=0;j<lb;j++){
            c[i+j]+=a[i]*b[j];
        }
    }
    n=la+lb;
    for(int i=0;i<n;i++){
        c[i+1]+=c[i]/10;
        c[i]%=10;
    }
}
int main_1303(){
    scanf("%s%s",ac,bc);
    add();
    //去前导零;
    while(c[n]==0&&n>=1)n--;
    //输出要倒序
    for(int i=n;i>=0;i--){
        printf("%d",c[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}