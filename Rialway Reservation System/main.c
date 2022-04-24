#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/*********this variables are global******/
int passwordkey=4321;counter1=0;counter2=0,counter3=0;
/*********function for animation[load screen]************/
void loadtime(int t){
int t1,t2;
for(t1=0;t1<t;t1++){
    t2=t1;
}
}
/********structure for storing data of trains*************/
struct traindata{
char destination[50],trainnumber[30];
float triptime,cost;
}; struct traindata t[200];
/*********structure for storing data of passengers*************/
struct passengers{
char name[30],address[30];
float balance;
}; struct passengers p[1000];
/**************password function[this function for security of the program]****/
void passwordfunction(){
system("CLS");
int ps;
printf("\n\t\t\t\tEnter password please: ");
scanf("%d",&ps);
/****check if the password is correct  or not*************/
if(ps!=passwordkey){
    /******check if the user enter the password for three times or not**********/
    if(counter1<2){
            printf("\n checking password");
    for(int t=0;t<=50;t++){
        loadtime(9999999);
        printf(".");
    }
    /*********if the user enter wrong password************/
    counter1++;
    printf("\n\t\t\t\tWrong password press any key to try again");
    getch();
    passwordfunction();

    }
    /********if the user enter the wrong password for three times***********/
   else{
     printf("\n checking password");
    for(int t=0;t<=50;t++){
        loadtime(9999999);
        printf(".");
    }
    system("CLS");
    printf("\n\n\t\t\t\tyou enter the wrong password for three times\n\n");
    exit(0);
}
}
 /***********if the user enter the correct password***********/
    else {
         printf("\n\ checking password");
    for(int t=0;t<=50;t++){
        loadtime(9999999);
        printf(".");
    }
   mainmenufunction();
    }
}
/*************main menu function[this function for showing all options**************/
void mainmenufunction(){
system("CLS");
int m;
do{
system("CLS");
printf("\n\t\t\t\t*** Railway Reservation System ***\n");
printf("\n\n\t\t\t\t[0] Insertion of trips information");
printf("\n\n\t\t\t\t[1] Insertion of passenger data");
printf("\n\n\t\t\t\t[2] Reservation of trips");
printf("\n\n\t\t\t\t[3] Modify a trip information");
printf("\n\n\t\t\t\t[4] Exit");
printf("\n\n\t\t\t\tChoice any option: ");
scanf("%d",&m);
if(m==4)exit(0);
else if(m==0)trips();
else if(m==1)addpassenger();
else if(m==2)reservationtickets();
else if(m==3){
system("CLS");
int s;
printf("\n\t\t\t\tEnter password: ");
scanf("%d",&s);
if(s==passwordkey)modifytrain();
else{
    printf("\n\t\t\t\tWrong password:(");
    printf("\npress any key to return to main menu");
                        getch();
                        mainmenufunction();
}
}
}while(m>4);
}
/***********function for insertion of trips information************/
void trips(){
system("CLS");
char n,number[30];
printf("\n\t\t\t\t*** Insertion of trips information ***\n");
printf("\n\n\t\t\t\tenter train number: ");
scanf("%s",number);
for(int x=0;x<=counter2;x++){
        /*******check if the train was added before or not*************/
    if(strcmp(number,t[x].trainnumber)==0){
            printf("\n\t\t\t\tThis train was added before");
            printf("\nPress any key to try again");
            getch();
            trips();
    }
}
strcpy(t[counter2].trainnumber,number);
printf("\n\t\t\t\tEnter train destination: ");
scanf("%s",t[counter2].destination);
printf("\n\t\t\t\tEnter trip time[24 hour]: ");
/*****time with 24 hour***********/
scanf("%f",&t[counter2].triptime);
while(t[counter2].triptime>25){
    printf("\n\t\t\t\tEnter time from 1h to 24h only: ");
    scanf("%f",&t[counter2].triptime);
}
printf("\n\t\t\t\tEnter trip cost: ");
scanf("%f",&t[counter2].cost);
counter2=counter2+1;
printf("\n Loading");
    for(int t=0;t<=50;t++){
        loadtime(9999999);
        printf(".");
    }
printf("\n\n\t\t\t\tTrain information has been added:)");
/******to choice if the user want to add new train or not***********/
printf("\n\nDo you want to add another train[Y/N]: ");
fflush(stdin);
scanf("%c",&n);
switch(n){
case 'y':trips();
break;
default:mainmenufunction();
}

}
/*******function for insertion of data of passengers**************/
void addpassenger(){
system("CLS");
char n, pn[30];
printf("\n\t\t\t\t*** Insertion of passenger data ***");
printf("\n\n\n\t\t\t\tEnter passenger name: ");
scanf("%s",pn);
for(int i=0;i<=counter3;i++){
    /*******check if this passenger was added before or not***********/
    if(strcmp(pn,p[i].name)==0){
         printf("\n\t\t\t\tThis passenger name was added before");
            printf("\nPress any key to try again");
            getch();
            addpassenger();
    }
}
strcpy(p[counter3].name,pn);
printf("\n\t\t\t\tEnter passenger address: ");
scanf("%s",p[counter3].address);
printf("\n\t\t\t\tEnter money the passenger have to pay: ");
scanf("%f",&p[counter3].balance);
counter3=counter3+1;
printf("\n Loading");
    for(int t=0;t<=50;t++){
        loadtime(9999999);
        printf(".");
    }
printf("\n\n\t\t\t\tpassenger data has been added:)");
/******to choice if the user want to add new passenger or not***********/
printf("\n\nDo you want to add another train[Y/N]: ");
fflush(stdin);
scanf("%c",&n);
switch(n){
case 'y':addpassenger();
break;
default:mainmenufunction();
}

}
/***********this function for reservation tickets for trips****************/
void reservationtickets(){
system("CLS");
int a=0;
char n,pn[30],dest[50],number[30];
printf("\n\t\t\t\t*** Reservation of trips ***");
printf("\n\n\n\t\t\t\tEnter passenger name: ");
scanf("%s",pn);
for(int x=0;x<=counter3;x++){
     /*******check if this passenger was added before or not***********/
    if(strcmp(pn,p[x].name)==0){
        printf("\n\t\t\t\tenter your destination: ");
         scanf("%s",dest);
        while(a==0){
            printf("\n Loading");
               for(int t=0;t<=50;t++){
                     loadtime(9999999);
                        printf(".");
                    }
                 printf("\n\n\t\t\t\tTrain number\tdestination\tcost\t\ttrip time\n\t\t\t");
                    for(int i=0;i<=80;i++){
                        printf("=");
                    }
         for(int y=0;y<=counter2;y++){
             /*******check if this destination was added before or not*************/
             if(strcmp(dest,t[y].destination)==0){
                     printf("\n\t\t\t\t %s\t\t%s\t\t%.3f$\t\t%2.3f",t[y].trainnumber,t[y].destination,t[y].cost,t[y].triptime);
                     a=1;

         }

         }
         if(a==0){
             printf("\n\t\tSorry,we do not have any train going to this destination right now:(");
         printf("\n\n\t\t\t\tplease enter another destination: ");
         scanf("%s",dest);
         }

    }
     printf("\n\n\t\t\t\tchoice any train[enter number of train]: ");
                     scanf("%s",number);
                     for(int z=0;z<=counter2;z++){
                        if(strcmp(number,t[z].trainnumber)==0){
                              /******check if the passenger have enough money or not*************/
                    if(t[z].cost<=p[x].balance){
                        p[x].balance=p[x].balance-t[z].cost;
                        printf("\n\t\t\t\tpassenger name is: %s",p[x].name);
                        printf("\n\t\t\t\tpassenger money is: %f$",p[x].balance);
                        printf("\n\t\t\t\ttrain number is: %s",t[z].trainnumber);
                        printf("\n\t\t\t\tdestination is: %s",t[z].destination);
                        printf("\n\t\t\t\tcost of this trip is: %.3f$",t[z].cost);
                        printf("\n\n\t\t\t\tThe ticket was successfully booked:)");
                        printf("\n\npress any key to return to main menu");
                        getch();
                        mainmenufunction();
                    }
                    /********if passenger does not have enough money*********/
                    else{
                        printf("\n\t\t\t\tsorry you do not have enough money for this trip:(");
                        printf("\npress any key to return to main menu");
                        getch();
                        mainmenufunction();
                    }
                     }

             }
}
}
/**********if passenger name not exist***********/
printf("\n\t\t\t\tThis passenger was not added before");
printf("\npress any key to try again");
getch();
reservationtickets();
}
/***************this function for modifying train data**********/
void modifytrain(){
system("CLS");
char number[30];
printf("\n\t\t\t\t*** Modify a trip information ***");
printf("\n\n\n\t\t\t\tEnter train number: ");
scanf("%s",number);
for(int m=0;m<=counter2;m++){
    /********check if this train was added before or not***********/
    if(strcmp(number,t[m].trainnumber)==0){
         printf("\n Loading");
               for(int t=0;t<=50;t++){
                     loadtime(9999999);
                        printf(".");
                    }
                 printf("\n\n\t\t\t\tTrain number\tdestination\tcost\t\ttrip time\n\t\t\t");
                    for(int i=0;i<=80;i++){
                        printf("=");
                    }
                     printf("\n\t\t\t\t %s\t\t%s\t\t%.3f$\t\t%2.2f",t[m].trainnumber,t[m].destination,t[m].cost,t[m].triptime);
                     printf("\n\n\t\t\t\tEnter new train destination: ");
                     scanf("%s",t[m].destination);
                     printf("\n\t\t\t\tEnter trip time[24 hour]: ");
                         /*****time with 24 hour***********/
                     scanf("%f",&t[m].triptime);
                     while(t[m].triptime>25){
    printf("\n\t\t\t\tEnter time from 1h to 24h only: ");
    scanf("%f",&t[m].triptime);
}
printf("\n\t\t\t\tEnter trip cost: ");
scanf("%f",&t[m].cost);
printf("\n Loading");
    for(int t=0;t<=50;t++){
        loadtime(9999999);
        printf(".");
    }
printf("\n\n\t\t\t\tTrain information has been modified:)");
printf("\npress any key to return to main menu");
getch();
mainmenufunction();
    }
}
printf("\n\t\t\t\tThis train was not added before");
printf("\nPress any key to try again");
getch();
trips();
}
int main()
{

   passwordfunction();
}
