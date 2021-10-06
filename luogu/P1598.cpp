/*
   P1598 垂直柱状图
 * @Autor: 乌搏猿
 * @Date: 2021-10-05 10:26:56
 * @LastEditTime: 2021-10-06 09:54:49
 * @state: AC
 * @FilePath: \code_for_luogu\luogu\P1598.cpp
 */
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

//a:读入的字符串
//string a;
char a[101];
//cnt:记录每个字母出现的次数
int maxn=-1e9,cnt[30]={0};

int max(int x,int y){return x>y?x:y;}
void read(char x[]){
    for(int i=0;i<101;i++) x[i]='\0';
    char b;
    scanf("%c",&b);
    int i=0;
    while(i<10000){
        if(b=='\n') break;
        x[i++]=b;
        scanf("%c",&b);
    }
    //printf("%s\n",x);
}
int main_1598(){
    //getline(cin,a);
    //fgets(a,1100,stdin);
    //gets(a);
    //read(a);
    cin.getline(a,100);
    for(int i=0;i<strlen(a);i++) cnt[a[i]-'A']++;

    //getline(cin,a);
    //fgets(a,1100,stdin);
    //gets(a);
    //read(a);
    cin.getline(a,100);
    for(int i=0;i<strlen(a);i++) cnt[a[i]-'A']++;

    //getline(cin,a);
    //fgets(a,1100,stdin);
    //gets(a);
    //read(a);
    cin.getline(a,100);
    for(int i=0;i<strlen(a);i++) cnt[a[i]-'A']++;

    //getline(cin,a);
    //fgets(a,1100,stdin);
    //gets(a);
    //read(a);
    cin.getline(a,100);
    for(int i=0;i<strlen(a);i++) cnt[a[i]-'A']++;

    for(int i=0;i<26;i++) maxn=max(maxn,cnt[i]);
    for(int i=maxn;i>0;i--){
        for(int j=0;j<26;j++){
            if(cnt[j]>=i) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
    for(char i='A';i<'[';i++) printf("%c ",i);
    printf("\n");
    //read(a);
    //printf("%s\n",a);
    system("pause");
    return 0;
}