#include<stdio.h>
#include<stdlib.h>
int main(){
    char n;
    scanf("%c",&n);
    if(n=='*'){
        int i,k,j,temp=0;
        for(j=0;j<3;j++){
            for(k=0;k<(2-temp);k++){
                printf(" ");
            }
            for(i=0;i<(1+2*temp);i++){
                printf("%c",n);
            }
            printf("\n");
            temp+=1;
        }
    }
    system("pause");
}