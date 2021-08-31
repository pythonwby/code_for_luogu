/*
   P1308 [NOIP2011 普及组] 统计单词数
 * @Autor: 乌搏猿
 * @Date: 2021-08-31 15:22:58
 * @LastEditTime: 2021-08-31 17:41:29
 * @state: AC
 * @FilePath: \code_for_luogu\noip\two\P1308.cpp
 */
#include <iostream>
#include <string>
using namespace std;

//c:临时字符串,la:a的长度,lb:b的长度
string a,b,c;
int la,lb;
//f:第一次出现的位置
int ans,f=-1;

int main_1308(){
    getline(cin,a);
    getline(cin,b);
    la=a.length();
    lb=b.length();
    for(int i=0;i<la;i++)
        if(a[i]>='A'&&a[i]<='Z') a[i]+='a'-'A';
    for(int i=0;i<lb;i++)
        if(b[i]>='A'&&b[i]<='Z') b[i]+='a'-'A';
    b=' '+b+' ';
    lb=b.length();
    for(int i=0;i<lb;){
        if(b[i]==' '){
            c="";
            i++;
            while(b[i]!=' '&&i<lb){
                c+=b[i];
                i++;
            }
            if(a==c){
                ans++;
                if(f==-1) f=i-la-1;
            }
        }
    }
    if(!ans) printf("-1\n");
    else printf("%d %d\n",ans,f);
    system("pause");
    return 0;
}