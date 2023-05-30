#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    // Information Blank
    int count,i,op,pd,jishu=0,jishu_under=0;;
    float class_aver=0,aver;
    scanf("%d",&count);
    struct student{
        char name[30];
        int number;
        char sex[10];
        struct score{
            float cn;
            float mat;
            float eng;
            float phy;
            float chem;
            float bio;
        }
        sc[count];
    }
    stu[count],*p;
    p=stu;
    // Scan for the Information of every student follow the limitaion
    for(i=0;i<count;i++){
        printf("Please enter the name, number and sex and sep' by single space\n");
        scanf("%s %d %s",&p[i].name,&p[i].number,&p[i].sex);
        printf("Please enter the score by Chinese Math English Phy Chem Bio and use single space to sep'\n");
        scanf("%f %f %f %f %f %f",&p[i].sc[i].cn,&p[i].sc[i].mat,&p[i].sc[i].eng,&p[i].sc[i].phy,&p[i].sc[i].chem,&p[i].sc[i].bio);
    }
    // The averge score of the class
    for(i=0;i<count;i++){
        class_aver+=((p[i].sc[i].cn+p[i].sc[i].mat+p[i].sc[i].eng+p[i].sc[i].phy+p[i].sc[i].chem+p[i].sc[i].bio)/count);
    }
    // Switch the way to read the information , 1 is number , 2 is name , 3 is contniue , q is quit
    printf("If you want to read the information, you can enter 1 to find his/her number,  2 to find his/her name\n");
    scanf("%d",&op);
    do{
        // Number
        if(op==1){
            printf("You can enter the number of the student\n");
            int num;
            scanf("%d",&num);
            for(i=0;i<count;i++){
                // The confirm request
                if(num==p[i].number){
                    printf("The Information of number %d student is here\n",num);
                    printf("name:%s  number:%d  sex:%s\n",p[i].name,p[i].number,p[i].sex);
                    printf("Chinese:%f  Math:%f  English:%f\n",p[i].sc[i].cn,p[i].sc[i].mat,p[i].sc[i].eng);
                    printf("Phy:%f  Chem:%f  Bio:%f",p[i].sc[i].phy,p[i].sc[i].chem,p[i].sc[i].bio);
                    aver=p[i].sc[i].cn+p[i].sc[i].mat+p[i].sc[i].eng+p[i].sc[i].phy+p[i].sc[i].chem+p[i].sc[i].bio;
                    break;
                    if(aver>=class_aver){
                        printf("Over the standard\n");
                    }
                    else{
                        printf("Under the standard\n");
                    }
                }
                if(num!=p[i].number){
                    jishu+=1;
                }
                if(jishu==count){
                    printf("Your number is wrong\n");
                    goto link;
                }
            }
        }
        // Name
        if(op==2){
            printf("You can enter the name of the student\n");
            char nam[30];
                scanf("%s",&nam);
            for(i=0;i<count;i++){
                if(strlen(p[i].name)!=strlen(nam)){
                    jishu_under+=1;
                }
                if(jishu_under==count){
                    printf("Your name is wrong\n");
                    goto link;
                }
                if(strlen(p[i].name)==strlen(nam)){
                    int temp_name=i;
                    for(i=0;i<strlen(nam);i++){
                        if(p[temp_name].name[i]==nam[i]){
                            jishu+=1;
                        }
                        if(jishu==strlen(nam)){
                            // check point
                            printf("The Information of %s is here\n",nam);
                            printf("name:%s  number:%d  sex:%s\n",p[temp_name].name,p[temp_name].number,p[temp_name].sex);
                            printf("Chinese:%f  Math:%f  English:%f\n",p[temp_name].sc[temp_name].cn,p[temp_name].sc[temp_name].mat,p[temp_name].sc[temp_name].eng);
                            printf("Phy:%f  Chem:%f  Bio:%f\n",p[temp_name].sc[temp_name].phy,p[temp_name].sc[temp_name].chem,p[temp_name].sc[temp_name].bio);
                            aver=p[temp_name].sc[temp_name].cn+p[temp_name].sc[temp_name].mat+p[temp_name].sc[temp_name].eng;
                            aver+=p[temp_name].sc[temp_name].phy+p[temp_name].sc[temp_name].chem+p[temp_name].sc[temp_name].bio;
                            if(aver>=class_aver){
                                printf("Over the standarn\n");
                            }
                            else{
                                printf("Under the standard\n");
                            }
                            break;
                        }
                        if(p[temp_name].name[i]!=nam[i]){
                            printf("Your name is wrong\n");//checkpoint error
                            goto link;
                        }
                    }
                }
            }
        }
        link:
        printf("The information is here, if you want to continue, please enter 1, enter q to quit\n");
    }
    while(scanf("%d",&pd)==1);
    system("pause");
}