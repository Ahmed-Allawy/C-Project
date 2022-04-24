#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int password=1999,passcounter,ID[2000];age[2000],roomnumber[2000],counter,service[2000];
char name[30][2000],address[30][2000],desdisgrp[100][2000],gender[2][2000];
/********** to add time in the program*********/
void deltatime(int t){
int t1,t2;
for(t1=0;t1<t;t1++){
    t2=t1;
}
}
/**************password function****************/
void passwordfunction(){
    system("CLS");
int p;
printf("\n\t\t\t\t\tenter your password to open the program:");
scanf("%d",&p);
while(passcounter<2)
    {
     if(p==password){
            /********* to show the loading ***********/
            printf("\nchecking password");
            for(int i=0;i<=50;i++){
                    deltatime(9999999);
            printf(".");
            }
        mainmenu();
    }


else {
         /********* to show the loading ***********/
        printf("\nchecking password");
            for(int i=0;i<=50;i++){
                    deltatime(9999999);
            printf(".");
            }
    passcounter++;
    printf("\n\n\t\t\t\t\tyou enter the wrong password!:(");
    printf("\n\npress any key to try again:");
    getch();
    passwordfunction();
}
}
if(passcounter==2 & p==password){
     /********* to show the loading ***********/
   printf("\nchecking password");
            for(int i=0;i<=50;i++){
                    deltatime(9999999);
            printf(".");
            }
   mainmenu();
}
system("CLS");
 printf("\n\t\t\t\t\tyou enter the wrong password for three times!");
}
/**************main menu function***************/
void mainmenu(){
    system("CLs");
    int c=0,x,y;
/********* for draw the title*******/
for(x=0;x<=2;x++){
        printf("\n\t\t\t\t    ");
for(y=0;y<=45;y++){
        system("COLOR ");
        if((x==0 && y==1))printf("\xD6");
        if(x==0 && y==41)printf("\xB7");
        if(x==0 && y>2 && y<40)printf("\xCD");
        if(x==1 && y==0)printf("\xBA      WELCOME TO IN OUR HOSPITAL     \xBA");
        if(x==2 && y==0)printf("\xD3");
        if(x==2 && y>2 && y<40)printf("\xCD");
        if(x==2 && y==41)printf("\xBD");
    }
}
printf("\n");
/********** to draw the body(borders) of the main menu***************/
for(x=0;x<=12;x++){
   printf("\n\t\t\t\t");
   for(y=0;y<=48;y++){
        if((x==0 && y==1))printf("\xD6");
        if(x==0 && y==48)printf("\xB7");
        if(x==0 && y>2 && y<47)printf("\xCD");
        if(x==1 && y==0)printf("\xBA (1) Add New Patient\t\t\t     \xBA");
        if(x==2 && y==0)printf("\xBA\t\t\t\t\t     \xBA");
        if(x==3 && y==0)printf("\xBA (2) Edit Patient Record\t\t\t\b\b\b\xBA");
        if(x==4 && y==0)printf("\xBA\t\t\t\t\t     \xBA");
        if(x==5 && y==0)printf("\xBA (3) List Record Of Patients\t\t\t\b\b\b\xBA");
        if(x==6 && y==0)printf("\xBA\t\t\t\t\t     \xBA");
        if(x==7 && y==0)printf("\xBA (4) Delete Patient Record\t\t\t\b\b\b\xBA");
        if(x==8 && y==0)printf("\xBA\t\t\t\t\t     \xBA");
        if(x==9 && y==0)printf("\xBA (5) Change Password\t\t\t\t\b\b\b\xBA");
        if(x==10 && y==0)printf("\xBA\t\t\t\t\t     \xBA");
        if(x==11 && y==0)printf("\xBA (6) Exit\t\t\t\t\t\b\b\b\xBA");
        if(x==12 && y==0)printf("\xD3");
        if(x==12 && y>2 && y<47)printf("\xCD");
        if(x==12 && y==48)printf("\xBD");
   }
}
printf("\n\n Choice any option:");
scanf("%d",&c);
while(c>6){
      printf("\nenter number from 1 to 6 only: ");
scanf("%d",&c);
}
if(c==1)addpatient();
else if(c==2)Editpatient();
else if(c==3)listshow();
else if(c==4)cleardata();
else if(c==5)changepass();
else if(c==6){
        system("CLS");
        printf("\n\n\t\t\t\t\tThank you for using our program:)\n\n");
        exit(0);
}

}
/**************function for add new patient****************/
void addpatient(){
system("CLS");
int a,s,r,o=1;
printf("\n\t\t\t\t\tAdd New Patient");
printf("\n\t\t\t\t");
for(int i=0; i<=30;i++){
    printf("=");
}
printf("\n\n\t\t\tenter the patient number:");
scanf("%d",&a);
/****** check if the patient ID was entered before or not**************/
for(int j=0;j<=counter;j++){
    if(a==ID[j]){
        printf("\n\t\t\tthis patient already in hospital ");
        printf("\npress any key to enter another patient:");
        getch();
        addpatient();
    }
}
/**********enter data of patient***************/
ID[counter]=a;
printf("\n\t\t\tchoice your service(1)O.P.D OR (2)Emergency: ");
scanf("%d",&service[counter]);
printf("\n\t\t\tenter patient name: ");
scanf("%s",name[counter]);
printf("\n\t\t\tenter patient age:");
scanf("%d",&age[counter]);
printf("\n\t\t\tenter patient address:");
scanf("%s",address[counter]);
printf("\n\t\t\tenter patient gender(F/M)");
scanf("%s",gender[counter]);
printf("\n\t\t\twhat is description of your disease:");
scanf("%s",desdisgrp[counter]);
/************check if the room was available or not*******************/
while(o<=1){
printf("\n\t\t\tenter your room number:");
scanf("%d",&r);
for(int m=0;m<=counter;m++){
    if(r!=roomnumber[m]){
            roomnumber[counter]=r;
            counter=counter+1;
            printf("\n\n\t\t\tAll patient data has been add");
            printf("\n\npress any key to return to main menu:");
            getch();
            mainmenu();
    }
}
 printf("\t\t\tthis room not available\n");
}
}
/*************function for edit patient data************/
void Editpatient(){
system("CLS");
int a,o=1,r;
printf("\n\t\t\t\t\tEdit patient Record");
printf("\n\t\t\t\t");
for(int i=0; i<=30;i++){
    printf("=");
}
printf("\n\n\t\t\tenter patient number:");
scanf("%d",&a);
for(int i=0;i<=counter;i++){
    if(a==ID[i]){
        printf("\npatient data,\n");
        printf("\nname\t\tage\taddress\t\tgender\troom number\ttype of service \tdisease description\n");
        for(int j=0;j<=110;j++){
            printf("\xCD");
        }
        /***********show old data***************/
        printf("\n%s\t%d\t%s\t\t %s\t %d\t\t",name[i],age[i],address[i],gender[i],roomnumber[i]);
        if(service[i]==1)printf("O.P.D\t\t");
        else printf("Emergency\t\t");
        printf("\t%s",desdisgrp[i]);
        printf("\n\nenter new patient data,\n");
        /**********enter new data of patient***************/
printf("\n\t\t\tchoice your service(1)O.P.D OR (2)Emergency: ");
scanf("%d",&service[i]);
printf("\n\t\t\tenter patient name: ");
scanf("%s",name[i]);
printf("\n\t\t\tenter patient age:");
scanf("%d",&age[i]);
printf("\n\t\t\tenter patient address:");
scanf("%s",address[i]);
printf("\n\t\t\tenter patient gender(F/M:)");
scanf("%s",gender[i]);
printf("\n\t\t\twhat is description of your disease:");
scanf("%s",desdisgrp[i]);
/************check if the room was available or not*******************/
while(o==1){
printf("\n\t\t\tenter your room number");
scanf("%d",&r);
for(int m=0;m<=counter;m++){
    if(r!=roomnumber[m]){
        roomnumber[i]=r;
        printf("\n\n\t\t\tAll patient data has been modified");
        printf("\n\npress any key to return to main menu:");
        getch();
        mainmenu();
    }
}
printf("\t\t\tthis room not available\n");
}
}
printf("\n\t\t\tthis patient number did not found");
printf("\n\npress any key to enter another number");
getch();
Editpatient();
}
}
/***********show list of patient**********/
void listshow(){
system("CLS");
int l,s;
printf("\n\t\t\t\t\tList record of patients");
printf("\n\t\t\t\t");
for(int i=0; i<=40;i++){
    printf("=");
}
printf("\n\n\t\t\tenter the password: ");
scanf("%d",&l);
     if(l==password){
            /********* to show the loading ***********/
            printf("checking password");
            for(int i=0;i<=50;i++){
                    deltatime(9999999);
            printf(".");
            }
            /*************show all data of all patients**********/

            printf("\n\t\t\tShow Records of(1) O.P.D. patients OR (2) Emergency patients: ");
            /********* check if the number is 1 or 2 only*************/
            scanf("%d",&s);
            while(s>2){
                    printf("\n\t\t\twrong number please enter number from(1 to 2) only: ");
                   scanf("%d",&s);
            }
            printf("\nname\t\tage\taddress\t\tgender\troom number\ttype of service \tdisease description\n");
            for(int i=0;i<=counter;i++){
                        if(s==service[i]){
                             for(int j=0;j<=110;j++){
                                  printf("\xCD");
                                 }
        printf("\n%s\t%d\t%s\t\t %s\t %d\t\t",name[i],age[i],address[i],gender[i],roomnumber[i]);
        if(s==1)printf("O.P.D\t\t");
        else printf("Emergency\t\t");
        printf("\t%s",desdisgrp[i]);
                }
                printf("\n");

            }
             printf("\n\npress any key to return to main menu:");
            getch();
            mainmenu();
                    }
                    /************* if the user enter the wrong password****************/
else {
        /********* to show the loading ***********/
            printf("checking password");
            for(int i=0;i<=50;i++){
                    deltatime(9999999);
            printf(".");
            }
    printf("\n\n\t\t\tyou enter the wrong password!:(");
    printf("\n\npress any key to return to main menu:");
            getch();
            mainmenu();
}
}
/**********function for delete patient data*************/
void cleardata(){
system("CLS");
int l,n;
printf("\n\t\t\t\t\tDelete record of patients");
printf("\n\t\t\t\t");
for(int i=0; i<=40;i++){
    printf("=");
}
printf("\n\n\t\t\tenter the password: ");
scanf("%d",&l);
     if(l==password){
            /********* to show the loading ***********/
            printf("checking password");
            for(int i=0;i<=50;i++){
                    deltatime(9999999);
            printf(".");
            }
            printf("\n\t\t\tenter number of patient: ");
            scanf("%d",&n);
            for(int i=0;i<=counter;i++){
                if(n==ID[i]){
                     printf("deleting data");
                        for(int j=0;j<=50;j++){
                             deltatime(9999999);
                                   printf(".");
                                       }
                    ID[i]=0;
                    age[i]=0;
                    roomnumber[i]=0;
                    service[i]=0;
                    printf("\n\t\t\tdata has been delete successfully");
                    printf("\n\npress any key to return to main menu:");
                    getch();
                    mainmenu();
                }
            }
            printf("\n\t\t\tthis number did not found press any key to go to main menu:");
            getch();
                    mainmenu();
}
else {
        /********* to show the loading ***********/
            printf("checking password");
            for(int i=0;i<=50;i++){
                    deltatime(9999999);
            printf(".");
            }
    printf("\n\n\t\t\tyou enter the wrong password!:(");
    printf("\n\npress any key to return to main menu:");
            getch();
            mainmenu();
}
}
/************function for change password****************/
void changepass(){
system("CLS");
int c;
printf("\n\t\t\t\t\t\bChange password");
printf("\n\t\t\t\t");
for(int i=0; i<=30;i++){
    printf("=");
}
printf("\n\n\t\t\tenter the old password: ");
scanf("%d",&c);
     if(c==password){
            /********* to show the loading ***********/
            printf("checking password");
            for(int i=0;i<=50;i++){
                    deltatime(9999999);
            printf(".");
            }
            printf("\n\n\t\t\tenter the new password: ");
            scanf("%d",&password);
            /********* to show the loading ***********/
            printf("changing password");
            for(int i=0;i<=50;i++){
                    deltatime(9999999);
            printf(".");
            }
            printf("\n\n\t\t\tpassword has been changed successfully");
            printf("\n\npress any key to return to main menu:");
            getch();
            mainmenu();
    }
else {
        /********* to show the loading ***********/
            printf("checking password");
            for(int i=0;i<=50;i++){
                    deltatime(9999999);
            printf(".");
            }
    printf("\n\n\t\t\tyou enter the wrong password!:(");
    printf("\n\npress any key to try again:");
            getch();
            changepass();
}
}
int main()
{
passwordfunction();
return 0;

}


