/*
P1601 A+B Problem���߾���
ע�͵Ĵ����ǵ���ʱд�ģ�ûɾ
*/
#include <cstdio>

//a:����a,b:����b,c:����c,n:�𰸳���
short a[500],b[500],c[500],n;
//ac:����a������,bb:����b������
char ac[510],bc[510];
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
//add:�߾��ȼӷ�����
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
    //�ǵð����λ�Ľ�λҲ����
    if(t) c[n++]=t;
}
int main(){
    scanf("%s%s",ac,bc);
    add();
    //���Ҫ����
    for(short i=n-1;i>=0;i--){
        printf("%hd",c[i]);
    }
    system("pause");
    return 0;
}