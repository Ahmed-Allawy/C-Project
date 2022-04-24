#include <stdio.h>
#include <stdlib.h>
#include<string.h>
char password[30]="banksystem";
int counter=0,counter1;
/********To make the functions take time to run*********/
void deltatime(int t){
int t1,t2;
for(t1=0;t1<t;t1++){
    t2=t1;
}
}
/******* structure for customer data*****/
struct customer {
int ID,phonenumber,balance,deposittype;
int day,month,year;
char name[30],address[50];
};struct customer a [1000];
/*** this function for checking the password if it was corrected or not********/
void passwordcheck(){
system("CLS");
char ps[30];
printf("\n\t\t\t\t\t\tenter the password:");
scanf("%s",ps);
/**************check if the password is correct or not********************/
if(strcmp(ps,password)!=0){
/******* counter to check if the pass entered three times or not*********/
if(counter<2){
counter++;
printf("\n\t\t\t\tyou enter the wrong password!:( ");
printf("(press any key to try again)");
getch();
passwordcheck();
}
 /** if the user enter the password wrong for three times****/
system("CLS");
printf("\n\t\t\t\t\tyou enter the wrong password for three times:(\n");
exit(0);
}
printf("\nloading");
    for(int t=0;t<=50;t++){
        deltatime(9999999);
        printf("\xCD");
    }
mainmenu();
}
/********** this function for showing the options which user can choice one of them****/
void mainmenu(){
system("CLS");
int m;
do{
system("CLS");
/************** draw borders*****/
for(int x=0;x<=19;x++){
    printf("\n\t\t\t\t\t");
    for(int y=0;y<=43;y++){
        if(x==0 && y==0)printf("\xD6");
        if(x==0 && y!=43)printf("=");
        if(x==0 & y==42)printf("\xB7");
        if((y==0 || y==43) && x!=0 && x!=19) printf("|");
        if(x==1 && y==1)printf("\t  BANH MANAGEMENT SYSTEM\t    ");
        if(x==2 && y==1)printf("\t\t\t\t\t    ");
        if(x==3 && y==1)printf("\t\t\t\t\t    ");
        if(x==4 && y==1)printf("\t\t\t\t\t    ");
        if(x==5 && y==1)printf("    [1] open new account\t\t    ");
        if(x==6 && y==1)printf("\t\t\t\t\t    ");
        if(x==7 && y==1)printf("    [2] transaction(deposit and withdraw)  ");
        if(x==8 && y==1)printf("\t\t\t\t\t    ");
        if(x==9 && y==1)printf("    [3] modify account data\t\t    ");
        if(x==10 && y==1)printf("\t\t\t\t\t    ");
        if(x==11 && y==1)printf("    [4] show all accounts data\t\t    ");
        if(x==12 && y==1)printf("\t\t\t\t\t    ");
        if(x==13 && y==1)printf("    [5] delete account data\t\t    ");
        if(x==14 && y==1)printf("\t\t\t\t\t    ");
        if(x==15 && y==1)printf("    [6] change password\t\t    ");
        if(x==16 && y==1)printf("\t\t\t\t\t    ");
        if(x==17 && y==1)printf("    [0] Exit\t\t\t\t    ");
        if(x==18 && y==1)printf("\t\t\t\t\t    ");
        if(x==19 && (y>0 || y>=42))printf("=");
        if(x==19 && y==0)printf("\xD3");
        if(x==19 & y==43)printf("\xBD");
}
}
printf("\nenter number from (0) to (6):");
scanf("%d",&m);
if(m==0)exit(0);
else if(m==1)addaccount();
else if(m==2)depositorwithdraw();
else if(m==3)Updateaccount();
else if(m==4)displayrecord();
else if(m==5)removedata();
else if(m==6)change();
}while(m>=6);
}
/****** this function for adding new account ************/
void addaccount(){
system("CLS");
int accnumber;
printf("\n\t\t\t\t\tOPEN NEW ACCOUNT\n\n\n");
printf("\t\t\t\tEnter Account number: ");
scanf("%d",&accnumber);
/***** check if this number was added before or not*********/
for(int x=0;x<=counter1;x++){
    if(accnumber==a[x].ID){
    printf("\n\t\t\t\this account number not available:(");
    printf("\n\npress any key to enter another ID");
    getch();
    addaccount();
    }
}
/** adding data of account******/
a[counter1].ID=accnumber;
printf("\n\t\t\t\tEnter customer name: ");
scanf("%s",a[counter1].name);
printf("\n\t\t\t\tEnter customer phone number: ");
scanf("%d",&a[counter1].phonenumber);
printf("\n\t\t\t\tEnter customer address: ");
scanf("%s",a[counter1].address);
printf("\n\t\t\t\tenter customer birth date(day/month/year): ");
scanf("%d %d %d",&a[counter1].day,&a[counter1].month,&a[counter1].year);
printf("\n\t\t\t\tEnter customer deposit: ");
scanf("%d",&a[counter1].balance);
printf("\ntype of deposit\n\t\t\t\t\t[0] saving\n\t\t\t\t\t[1] current\n\t\t\t\t\t[2] fixed for one year");
printf("\n\t\t\t\t\t[3] fixed for two year\n\t\t\t\t\t[4] fixed for three year\n");
printf("\n\t\t\t\t\tEnter the type of deposit: ");
scanf("%d",&a[counter1].deposittype);
while(a[counter1].deposittype>4){
    printf("\n\t\t\t\t\tEnter number from 0 to 4 only: ");
    scanf("%d",&a[counter1].deposittype);
}
counter1++;
printf("\nloading");
    for(int t=0;t<=50;t++){
        deltatime(9999999);
        printf("\xCD");
    }
printf("\n\t\t\t\t\tyour account has been created successfully");
printf("\n\npress any key to return to main menu");
getch();
mainmenu();
}
/*************this function for modifying account data************/
void Updateaccount(){
system("CLS");
int u;
printf("\n\t\t\t\t\tUpdate account\n\n\n");
printf("\t\t\t\tEnter Account number: ");
scanf("%d",&u);
for(int x=0;x<=counter1;x++){
    if(u==a[x].ID){
        printf("\n ID\tname\t\tphone number\tAddress\t\tday month year\t\tmoney\tdeposit type\n");
        for(int i=0;i<=116;i++){
            printf("\xCD");
        }
        printf("\n  %d\t%s\t0%d\t%s\t\t%d %d %d\t\t%d\t",a[x].ID,a[x].name,a[x].phonenumber,a[x].address,a[x].day,a[x].month,a[x].year,a[x].balance);
        /***for printing the type if deposit*************/
        if(a[x].deposittype==0)printf("SAVING");
        else if(a[x].deposittype==1)printf("current");
        else if(a[x].deposittype==2)printf("fixed for one year");
        else if(a[x].deposittype==3)printf("fixed for two year");
        else printf("fixed for three year");
        printf("\n");
        for(int i=0;i<=116;i++){
            printf("\xCD");
        }
    /*****enter new data********/
        printf("\n\n\t\t\t\tEnter customer phone number: ");
        scanf("%d",&a[x].phonenumber);
        printf("\n\t\t\t\tEnter customer address: ");
        scanf("%s",a[x].address);
        printf("\nloading");
    for(int t=0;t<=50;t++){
        deltatime(9999999);
        printf("\xCD");
    }
        printf("\n\t\t\t\tyour data has been Updated");
        printf("\n\npress any key to return to main menu");
        getch();
        mainmenu();
    }
}
printf("\n\t\t\t\tthis account did not Exist");
printf("\n\npress any key to try again");
getch();
Updateaccount();
}
/********this function allow the user to make deposit or withdraw by his account***********/
void depositorwithdraw(){
system("CLS");
int number,d,w,z=1;
printf("\n\t\t\t\t\tTransaction:\n\n\n");
printf("\t\t\t\tEnter Account number: ");
scanf("%d",&number);
for(int x=0;x<=counter1;x++){
    if(number==a[x].ID){
        printf("\n ID\tname\t\tphone number\tAddress\t\tday month year\t\tmoney\tdeposit type\n");
        for(int i=0;i<=116;i++){
            printf("\xCD");
        }
        printf("\n  %d\t%s\t0%d\t%s\t\t%d %d %d\t\t%d\t",a[x].ID,a[x].name,a[x].phonenumber,a[x].address,a[x].day,a[x].month,a[x].year,a[x].balance);
        /***for printing the type if deposit*************/
        if(a[x].deposittype==0)printf("SAVING");
        else if(a[x].deposittype==1)printf("current");
        else if(a[x].deposittype==2)printf("fixed for one year");
        else if(a[x].deposittype==3)printf("fixed for two year");
        else printf("fixed for three year");
        printf("\n");
        for(int i=0;i<=116;i++){
            printf("\xCD");
        }
        printf("\n\n\n\t\t\t\twhat is the process which you want to do\n\n\t\t\t\t\t(0) withdraw or(1) deposit:");
        scanf("%d",&d);
        while(d>1){
            printf("\n\t\t\t\tplease enter number from o to 1 only: ");
            scanf("%d",&d);
        }
        if(d==0){
        printf("\n\t\t\t\tenter the amount of withdraw: ");
        while(z==1){
             scanf("%d",&w);
             if(w>a[x].balance){
                printf("\n\t\t\t\tyou do not have enough money");
                printf("\n\t\t\t\tenter another amount of withdraw:");

        }
        else{
            a[x].balance=a[x].balance-w;
            z=2;
        }
        }
        printf("\n\t\t\t\tyour money after withdraw is: %d",a[x].balance);
        printf("\n\npress any key to return to main menu");
        getch();
        mainmenu();
        }
        else{
           printf("\n\t\t\t\tenter the amount of deposit: ");
           scanf("%d",&w);
           a[x].balance=a[x].balance+w;
           printf("\n\t\t\t\tyour money after withdraw is: %d",a[x].balance);
           printf("\n\npress any key to return to main menu");
           getch();
           mainmenu();
        }
}
}
printf("\n\t\t\t\tthis account did not Exist");
printf("\n\npress any key to try again");
getch();
depositorwithdraw();
}
/************function for showing all records*************/
void displayrecord(){
system("CLS");
char ps[30];
printf("\n\t\t\t\t\tSHOW ALL RECORDS\n\n\n");
printf("\n\t\t\t\tEnter password: ");
scanf("%s",ps);
if(strcmp(ps,password)==0){
system("CLS");
printf("\n\t\t\t\t\tSHOW ALL RECORDS\n");
printf("\nloading");
    for(int t=0;t<=50;t++){
        deltatime(9999999);
        printf("\xCD");
    }
printf("\n\n\n ID\tname\t\tphone number\tAddress\t\tday month year\t\tmoney\tdeposit type\n");
        for(int i=0;i<=116;i++){
            printf("\xCD");
        }
   for(int x=0;x<counter1;x++){
        printf("\n  %d\t%s\t0%d\t%s\t\t%d %d %d\t\t%d\t",a[x].ID,a[x].name,a[x].phonenumber,a[x].address,a[x].day,a[x].month,a[x].year,a[x].balance);
        /***for printing the type if deposit*************/
        if(a[x].deposittype==0)printf("SAVING");
        else if(a[x].deposittype==1)printf("current");
        else if(a[x].deposittype==2)printf("fixed for one year");
        else if(a[x].deposittype==3)printf("fixed for two year");
        else printf("fixed for three year");
        printf("\n");
         for(int i=0;i<=116;i++){
            printf("\xCD");
        }
   }
    printf("\n\npress any key to return to main menu");
    getch();
    mainmenu();
}
else {
    printf("\n\t\t\t\tYou enter the wrong password");
    printf("\n\npress any key to return to main menu");
    getch();
    mainmenu();
}
}
/*********this function for deleting data of customer***************/
void removedata(){
system("CLS");
int number;
char r[30];
 printf("\n\t\t\t\t\tDELETE ACCOUNT\n\n\n");
    printf("\t\t\t\tEnter password: ");
    scanf("%s",r);
    if(strcmp(r,password)!=0){
        printf("\n\t\t\t\tYou enter the wrong password");
        printf("\n\npress any key to return to main menu");
        getch();
        mainmenu();
    }
    system("CLS");
    printf("\n\t\t\t\t\tDELETE ACCOUNT\n\n\n");
    printf("\t\t\t\tEnter customer number: ");
    scanf("%d",&number);
    for(int x=0;x<=counter1;x++){
        if(number==a[x].ID){
           a[x].ID=0;
            a[x].phonenumber=0;
            a[x].balance=0;
            a[x].deposittype=0;
            a[x].day=0;
            a[x].month=0;
            a[x].year=0;
            printf("\nloading");
    for(int t=0;t<=50;t++){
        deltatime(9999999);
        printf("\xCD");
    }
            printf("\n\t\t\t\taccount data has been deleted successfully");
            printf("\n\npress any key to return to main menu");
             getch();
             mainmenu();
        }
    }
printf("\n\t\t\t\this account number not available:(");
    printf("\n\npress any key to return to main menu");
             getch();
             mainmenu();

}
/************function for changing password************/
void change(){
    system("CLS");
    char ps[30];
    printf("\n\t\t\t\t\tCHANGE PASSWORD\n\n\n");
    printf("\t\t\t\tEnter old password: ");
    scanf("%s",ps);
    if(strcmp(ps,password)!=0){
        printf("\n\t\t\t\tYou enter the wrong password");
        printf("\n\npress any key to return to main menu");
        getch();
        mainmenu();
    }
    printf("\n\t\t\t\tEnter new password: ");
    scanf("%s",password);
    printf("\nloading");
    for(int t=0;t<=50;t++){
        deltatime(9999999);
        printf("\xCD");
    }
    printf("\n\t\t\t\tpassword changed successfully:)");
    printf("\n\npress any key to return to main menu");
        getch();
        mainmenu();
}
int main()
{
system("color 17");
passwordcheck();

}
