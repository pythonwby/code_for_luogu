/*
   P1553 ���ַ�ת�������棩
 * @Autor: �ڲ�Գ
 * @Date: 2021-10-04 16:44:42
 * @LastEditTime: 2021-10-05 10:23:28
 * @state: AC
 * @FilePath: \code_for_luogu\luogu\P1553.cpp
 */
#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

string in;
//la:in�ĳ���,b:������ŵ�λ��
int la,b=-1;

//���ڷ�ת�ַ����ĺ���
string fanzhuan(string x,int l,int r){
    string ans;
    //flag:��ʾ�ǲ���ǰ����
    bool flag=true;
    for(int i=r;i>=l;i--){
        if(flag&&x[i]!='0') flag=false;
        if(flag==false) ans+=x[i];
        if(i==l&&flag) ans+=x[i];
    }
    return ans;
}
int main_1553(){
    cin>>in;
    if(in=="0.0") printf("0.0\n");
    else{
        la=in.length();
        for(int i=0;i<la;i++){
            if(in[i]=='.'||in[i]=='/'||in[i]=='%'){
                b=i;
                break;
            }
        }
        string out=fanzhuan(in,0,b-1);
        if(b>0) out+=in[b];
        out+=fanzhuan(in,b+1,la-1);
        if(in[b]=='.'){
            int lout=out.length()-1;
            while(out[lout]=='0'&&lout>b) lout--;
            for(int i=0;i<=lout;i++) cout<<out[i];
            cout<<endl;
        }else cout<<out<<endl;
    }
    system("pause");
    return 0;
}