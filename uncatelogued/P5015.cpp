/*
   P5015 [NOIP2018 �ռ���] ����ͳ��
 * @Autor: �ڲ�Գ
 * @Date: 2021-08-21 14:04:01
 * @LastEditTime: 2021-08-21 14:41:05
 * @state: Other
 * @FilePath: \code_for_luogu\uncatelogued\P5015.cpp
 */
//��δ��ɣ�����
#include <iostream>
using namespace std;

//a:������ַ���
char a[10000],b[10];
//sum:��������
int sum;

int main_5015(){
    //cin.get(a,10);
    FILE* infile=fopen("title2.in","rb");
    if(infile==NULL){printf("open input file error!\n");return -1;}
    fread(a,sizeof(a),1,infile);
    fclose(infile);
    for(char i:a){
        if((i>='A'&&i<='Z')||(i>='a'&&i<='z')||(i>='0'&&i<='9')) sum++;
    }
    //printf("%d\n",sum);
    FILE* outfile=fopen("title2.ans","wb");
    if(outfile==NULL){printf("open output file error!\n");return -1;}
    sprintf(b,"%d",sum);
    fwrite(b,sizeof(b),1,outfile);
    fclose(outfile);
    system("pause");
    return 0;
}