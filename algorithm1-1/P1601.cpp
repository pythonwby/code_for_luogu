/* 
   P1303 A*B Problem
 * @Author: �ڲ�Գ
 * @Date: 2021-08-12 16:44:53
 * @LastEditTime: 2021-08-13 17:50:01
 * @state: Other
 * @FilePath: \code_for_luogu\algorithm1-1\P1601.cpp
 */
//ע�͵Ĵ����ǵ���ʱд�ģ�ûɾ
//��δ��ɣ�����
#include <cstdio>

//a:����a,b:����b,c:����c,n:�𰸳���
short a[2010],b[2010],c[2010],n;
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
//ch_to_short:�ַ���ת�߾�����
void ch_to_short(){
    while(ac[la]!='\0')la++;
    while(bc[lb]!='\0')lb++;
    for(int i=la-1;i>=0;i--) a[i]=ac[abs(i-la)-1]-'0';
    for(int i=lb-1;i>=0;i--) b[i]=bc[abs(i-lb)-1]-'0';
}
//add:�߾��ȳ˷�����
void add(){
    ch_to_short();
    for(int i=0;i<lb;i++){
        for(int j=0;j<la;j++){
            c[i+j-1]+=a[i]*b[j];
        }
    }
    n=la+lb;
}
int main(){
    scanf("%s%s",ac,bc);
    add();
    //ȥǰ����;
    while(c[n]==0)n--;
    //���Ҫ����
    printf("%hd\n",c[0]);
    for(short i=n-1;i>=0;i--){
        printf("%hd",c[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}