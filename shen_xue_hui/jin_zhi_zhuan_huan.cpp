/********************************
            未完成！！！
********************************/
#include <iostream>
#include <cmath>
using namespace std;

//output:输出,input:字符串数字,x:num的进制,y:目标进制,num:十进制数
char output[30];
string input;
int x,y,num;

int main(){
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