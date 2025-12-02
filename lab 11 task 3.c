#include <stdio.h>
#include <string.h>

struct timejoin{
    int datejoined;
    int monthjoined;
    float yearjoined;
};

struct employ{
    int id;
    char name[20];
    int salary;
    struct timejoin doj;
    int number;
    char email[30];
    char department[20];
    char designation[20];
    float yearexp;
};

int salary(int a , int b){
    int z = 0;

    if(a==1&&b==1) z=5000;
    else if(a==1&&b==2) z=10000;
    else if(a==1&&b==3) z=15000;
    else if(a==1&&b==4) z=20000;
    else if(a==1&&b==5) z=25000;

    else if(a==2&&b==1) z=4000;
    else if(a==2&&b==2) z=8000;
    else if(a==2&&b==3) z=12000;
    else if(a==2&&b==4) z=16000;
    else if(a==2&&b==5) z=20000;

    else if(a==3&&b==1) z=3000;
    else if(a==3&&b==2) z=6000;
    else if(a==3&&b==3) z=9000;
    else if(a==3&&b==4) z=12000;
    else if(a==3&&b==5) z=15000;

    else if(a==4&&b==1) z=3000;
    else if(a==4&&b==2) z=6000;
    else if(a==4&&b==3) z=9000;
    else if(a==4&&b==4) z=12000;
    else if(a==4&&b==5) z=15000;

    else if(a==5&&b==1) z=2000;
    else if(a==5&&b==2) z=4000;
    else if(a==5&&b==3) z=6000;
    else if(a==5&&b==4) z=8000;
    else if(a==5&&b==5) z=10000;

    return z;
}

float experience(int day, int month, float year){
    float join = year + month/12.0 + day/365.0;
    float today = 2025 + 12/12.0 + 2/365.0;
    return today - join;
}

int main(){
    struct employ e1;
    int dep,desig,id,exp,cased=0;
    char name[20],department[20],designation[20];
while(cased!=7){    
    printf("This is Employee data software\n\n");
    printf("1.Add new employee data\n");
    printf("2.Search employee with Id\n");
    printf("3.Search employee wth name\n");
    printf("4.Search employee with designation\n");
    printf("5.Search employee with department\n");
    printf("6.Search employee with experience\n");
    printf("7.Exit");
    scanf("%d",&cased);
    switch(cased){
case 1:{printf("Enter ID: ");
       scanf("%d", &e1.id);

    printf("Enter name: ");
    scanf("%s", e1.name);

    printf("Enter email: ");
    scanf("%s", e1.email);

    printf("Enter number: ");
    scanf("%d", &e1.number);

    printf("Enter department\n1.IT\n2.HR\n3.Finance\n4.Marketing\n5.Operations\n");
    scanf("%d", &dep);

    switch(dep){
        case 1: strcpy(e1.department,"IT"); break;
        case 2: strcpy(e1.department,"HR"); break;
        case 3: strcpy(e1.department,"Finance"); break;
        case 4: strcpy(e1.department,"Marketing"); break;
        case 5: strcpy(e1.department,"Operations"); break;
        default: strcpy(e1.department,"Invalid input");
    }

    printf("Enter designation\n1.Intern\n2.Junior\n3.Senior\n4.Manager\n5.Director\n");
    scanf("%d", &desig);

    switch(desig){
        case 1: strcpy(e1.designation,"Intern"); break;
        case 2: strcpy(e1.designation,"Junior"); break;
        case 3: strcpy(e1.designation,"Senior"); break;
        case 4: strcpy(e1.designation,"Manager"); break;
        case 5: strcpy(e1.designation,"Director"); break;
        default: strcpy(e1.designation,"Invalid input");
    }

    e1.salary = salary(dep, desig);
    printf("Salary = %d\n", e1.salary);

    printf("Enter join date (dd/mm/yyyy): ");
    scanf("%d/%d/%f", &e1.doj.datejoined, &e1.doj.monthjoined, &e1.doj.yearjoined);

    e1.yearexp = experience(e1.doj.datejoined, e1.doj.monthjoined, e1.doj.yearjoined);

    printf("Years of experience: %.2f\n", e1.yearexp);
   ;
}
break;

 case 02:  {printf("Enter the id you want to search\n");
    scanf("%d",&id);
    if(e1.id==id){
        printf("\nRecord found");
        printf("\nNAME:%s\n",e1.name);
        printf("ID:%d\n",e1.id);
        printf("Email:%s\n",e1.email);
        printf("Contact:%d\n",e1.number);
        printf("Department:%s\n",e1.department);
        printf("Designation:%s\n",e1.designation);
        printf("Salary:%d\n",e1.salary);}   else{("\nNO RESULT FOUND");}
 }break;
        
   case 03:{ printf("Enter the name you want to search\n");
    scanf("%s",name);
    if(strcmp(e1.name,name)==0){
        printf("\nRecord found");
        printf("\nNAME:%s\n",e1.name);
        printf("ID:%d\n",e1.id);
        printf("Email:%s\n",e1.email);
        printf("Contact:%d\n",e1.number);
        printf("Department:%s\n",e1.department);
        printf("Designation:%s\n",e1.designation);
        printf("Salary:%d\n",e1.salary); }   else{("\nNO RESULT FOUND");}}break;
        
 case 04:{printf("Enter the designation you want to search  (only first letter uppercase)\n");
    scanf("%s",&designation);
    if(strcmp(e1.designation,designation)==0){
        printf("\nRecord found");
        printf("\nNAME:%s\n",e1.name);
        printf("ID:%d\n",e1.id);
        printf("Email:%s\n",e1.email);
        printf("Contact:%d\n",e1.number);
        printf("Department:%s\n",e1.department);
        printf("Designation:%s\n",e1.designation);
        printf("Salary:%d\n",e1.salary);}
        else{("\nNO RESULT FOUND");}
     
 }break;
        
case 05: {printf("Enter the department you want to search  (only first letter uppercase)\n");
    scanf("%s",&department);
    if(strcmp(e1.department,department)==0){
        printf("\nRecord found");
        printf("\nNAME:%s\n",e1.name);
        printf("ID:%d\n",e1.id);
        printf("Email:%s\n",e1.email);
        printf("Contact:%d\n",e1.number);
        printf("Department:%s\n",e1.department);
        printf("Designation:%s\n",e1.designation);
        printf("Salary:%d\n",e1.salary);
    }  else{("\nNO RESULT FOUND");}}break;
    
    case 06:{printf("Enter the the experience in years above which you want search \n");
    scanf("%d",&exp);
    if(exp<e1.yearexp){
        printf("\nRecord found");
        printf("\nNAME:%s\n",e1.name);
        printf("ID:%d\n",e1.id);
        printf("Email:%s\n",e1.email);
        printf("Contact:%d\n",e1.number);
        printf("Department:%s\n",e1.department);
        printf("Designation:%s\n",e1.designation);
        printf("Salary:%d\n",e1.salary);}    else{("\nNO RESULT FOUND");} 
    }break;}}
}
    


