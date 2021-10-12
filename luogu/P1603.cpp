/*
   P1603 斯诺登的密码
 * @Autor: 乌搏猿
 * @Date: 2021-10-12 20:33:29
 * @LastEditTime: 2021-10-12 21:03:55
 * @state: AC
 * @FilePath: \code_for_luogu\luogu\P1603.cpp
 */
#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

//a:记录每个数字的英文单词
string a[30]={"one","two","three","four","five","six","seven","eight","nine","ten",
              "eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen",
              "eighteen","nineteen","twenty","a","both","another","first","second","third"};
//b:记录同下标单词对应的数字
int b[30]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,1,2,1,2,3};
int c[10],n;
string tmp;

int main_1603(){
    for(int i=0;i<6;i++){
        cin>>tmp;
        for(int j=0;j<26;j++){
            if(tmp==a[j]){
                c[n]=b[j];
                c[n]=c[n]*c[n]%100;
                n++;
            }
        }
    }
    sort(c,c+n);
    printf("%d",c[0]);
    for(int i=1;i<n;i++){
        if(c[i]<10) printf("0");
        printf("%d",c[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}