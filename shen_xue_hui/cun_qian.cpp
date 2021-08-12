#include <cstdio>

//ys:每月预算,cq:存的钱,sy:每月剩余
int ys[12],cq,sy;
//钱是否不够
bool flag=false;

int main(){
    for(int i=0;i<12;i++){
        scanf("%d",&ys[i]);
    }
    for(int i=0;i<12;i++){
        if(ys[i]>300+sy){
            printf("-%d\n",i+1);
            flag=true;
            break;
        }
        cq+=(300+sy-ys[i])/100*100;
        sy=(300+sy-ys[i])%100;
    }
    if(!flag){
        printf("%.0f\n",float(cq)*1.2+float(sy));
    }
    system("pause");
    return 0;
}