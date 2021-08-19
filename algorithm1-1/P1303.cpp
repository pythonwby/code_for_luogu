/* 
   P1303 A*B Problem
 * @Author: �ڲ�Գ
 * @Date: 2021-08-12 16:44:53
 * @LastEditTime: 2021-08-19 15:59:22
 * @state: AC
 * @FilePath: \code_for_luogu\algorithm1-1\P1303.cpp
 */
#include <cstdio>

//a:����a,b:����b,c:����c,n:�𰸳���
int a[2010],b[2010],c[4010],n;
//ac:����a������,bb:����b������
char ac[2010],bc[2010];
//la:����a�ĳ���,lb,����b�ĳ���
int la,lb;

//max:�Լ�ʵ��max����
int max(int x,int y){
    if(x>y) return x;
    if(y>x) return y;
    return x;
}
//abs:�Լ�ʵ��abs����
int abs(int x){
    if(x<0) return -x;
    return x;
}
//ch_to_int:�ַ���ת�߾�����
void ch_to_int(){
    while(ac[la]!='\0')la++;
    while(bc[lb]!='\0')lb++;
    for(int i=la-1;i>=0;i--) a[i]=ac[abs(i-la)-1]-'0';
    for(int i=lb-1;i>=0;i--) b[i]=bc[abs(i-lb)-1]-'0';
}
//add:�߾��ȳ˷�����
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
    //ȥǰ����;
    while(c[n]==0&&n>=1)n--;
    //���Ҫ����
    for(int i=n;i>=0;i--){
        printf("%d",c[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}