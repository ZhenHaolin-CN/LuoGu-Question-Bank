#include<stdio.h>
#include<stdlib.h>
int main(){
    int number,temp=0;
    scanf("%d",&number);
    if(number%3==0){
        printf("3 ");
        temp+=1;
    }
    if(number%5==0){
        printf("5 ");
        temp+=1;
    }
    if(number%7==0){
        printf("7 ");
        temp+=1;
    }
    if(temp==0){
        printf("n");
    }
    system("pause");
}