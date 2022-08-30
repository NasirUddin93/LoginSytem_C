#include<stdio.h>
#include<string.h>
int main(){
    printf("Choose the option:\n");
    printf("1.Sign up:\n");
    printf("2.Login:\n");
    printf("3.Exit:\n");
    int opt;
    scanf("%d",&opt);
    if(opt == 1){
        char firstName[20];
        char lastName[20];
        char email[20];
        char contact[20];
        char pass[20];

        printf("===========Registration form==============\n");
        printf("Enter your first Name:\n");
        scanf("%s",&firstName);
        printf("Enter your Last Name:\n");
        scanf("%s",&lastName);
        printf("Enter your Email:\n");
        scanf("%s",&email);
        printf("Enter your Contact:\n");
        scanf("%s",&contact);
        printf("Enter your password:\n");
        scanf("%s",&pass);
        printf("Congratulations....!!!\nYour Signup is completed:\n");
        opt = 2;
        if(opt==2){
            int password;
            char name[20];
            printf("Login form\n");
            printf("Enter username:\n");
            scanf("%s",&name);
            printf("Enter password:\n");
            scanf("%d",&password);
            if(strcmp(name,"Abir")==0 && password==1234){
                printf("Successfully Login:\n");
                return 0;
            }else{
                printf("Access Denied..!!:\n");
                return 0;
            }
        }

    }
    if(opt == 2){
        int password;
        char name[20];
        printf("Login form\n");
        printf("Enter username:\n");
        scanf("%s",&name);
        printf("Enter password:\n");
        scanf("%d",&password);
        if(strcmp(name,"Abir")==0 && password==1234){
            printf("Successfully Login:\n");
        }else{
            printf("Access Denied..!!:\n");
        }
    }
    if(opt == 3){
        return 0;
    }


}
