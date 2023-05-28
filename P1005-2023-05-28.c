#include<stdio.h>
#include<stdlib.h>
int main(){
    int count_1,count_2,i,k,j,sum=0;
    scanf("%d %d",&count_1,&count_2);
    int str[count_1][count_2],find[count_1][count_2];
    for(i=0;i<count_1;i++){
        for(k=0;k<count_2;k++){
            scanf("%d",&str[i][k]);
        }
    }
    for(i=0;i<count_1;i++){
        int begin=0,end=count_2-1;
        for(k=0;k<count_2;k++){
            if(str[i][begin]<str[i][end]){
                find[i][k]=str[i][begin];
                begin+=1;
                continue;
            }
            if(str[i][begin]>=str[i][end]){
                find[i][k]=str[i][end];
                end-=1;
                continue;
            }
            if(begin==end){
                find[i][k]=str[i][begin];
                break;
            }
        }
    }
    for(i=0;i<count_1;i++){
        for(k=0;k<count_2;k++){
            for(j=0;j<(k+1);j++){
                find[i][k]*=2;
            }
            sum+=find[i][k];
        }
    }
    printf("%d",sum);
    system("pause");
}