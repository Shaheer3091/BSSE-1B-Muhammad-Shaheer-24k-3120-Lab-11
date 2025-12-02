#include<stdio.h>
#include<string.h>


struct date{
    int day;
    int month;
    int year;
};

struct account{
    char type[20];
    int minimum ;
    float interst;
    struct  date create;
    struct  date lastwithdraw;
    char transtype[10];
};

int main(){
  
   struct account a1;
    int type,ttype;
    printf("Enter the account type\n1.Saving\n2.Fixed Deposit\n3.Current\n");
    scanf("%d",&type);
    switch(type){
        case 01:strcpy(a1.type,"Saving");
        case 02:strcpy(a1.type,"Fixed Deposit");
        case 03:strcpy(a1.type,"Current");
    }

    if(type==1){a1.minimum=1000;}
    if(type==2){a1.minimum=5000;}
    if(type==3){a1.minimum=10000;}

    if(type==1){a1.interst=4;}
    if(type==2){a1.interst=7;}
    if(type==3){a1.interst=0;}
    
    printf("\nEnter date of creation of account in format dd/mm/yyyy\n");
    scanf("%d/%d/%d",&a1.create.day,&a1.create.month,&a1.create.year);
    
    printf("\nEnter date of last transaction from account account in format dd/mm/yyyy\n");
    scanf("%d/%d/%d",&a1.lastwithdraw.day,&a1.lastwithdraw.month,&a1.lastwithdraw.year);
    
    printf("Enter the type of transaction\n1.deposit\n2.Withdraw\n");
    scanf("%d",&ttype);
    if(ttype==1){strcpy(a1.transtype,"deposit");}
    if(ttype==2){strcpy(a1.transtype,"withdraw");}
    

    
}