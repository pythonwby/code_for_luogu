/* 
   ����ת��
 * @Author: �ڲ�Գ
 * @Date: 2021-08-12 21:27:44
 * @LastEditTime: 2021-08-13 17:23:42
 * @state: Writing
 * @FilePath: \code_for_luogu\shen_xue_hui\jin_zhi_zhuan_huan.cpp
 */
/********************************
            δ��ɣ�����
********************************/
#include <iostream>
#include <cmath>
using namespace std;

//output:���,input:�ַ�������,x:num�Ľ���,y:Ŀ�����,num:ʮ������
char output[30];
string input;
int x,y,num;

int main_jin_zhi_zhuan_huan(){
    scanf("%d",&x);
    cin>>input;
    scanf("%d",&y);
    for(char i:input){
        if(int(i)>=65){
            num+=pow(10+int(i-'A'),x);
            continue;
        }
        num+=pow(int(i-'0'),x);
    }
    int s=num,j;
    do{
        if(s%y>=10) output[j]=char(s%y-10+65);
        else output[j]=char(s%y+'0');
        s/=y;
        j++;
    }while(s);
    for(int i=j-1;i>=0;i--){
        printf("%c",output[i]);
    }
    system("pause");
    return 0;
}