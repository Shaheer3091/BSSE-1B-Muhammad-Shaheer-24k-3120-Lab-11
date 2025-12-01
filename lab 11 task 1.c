#include<stdio.h>
#include<string.h>
struct student{
 	int id;
 	char name[15];
 	int sub[3];
 	char grade1,grade2,grade3;
  
 	
 };
struct student s[2];

char gra(int a);
char gra(int a){
	
	if(a>=90){
		return 'A';
	}
	else if(a>=80&&a<90){
		return 'B';
	}
	else if(a>=70&&a<80){
		return 'C';
	}
	else if(a>=60&&a<=50){
		return 'D';
	}
	else if(a<50){
		return 'F';
	}
}

int main(){
int i,check=0,sum=0,j,id;
float avg;
char name[20];
char grade1,grade2,grade3,grade;	
struct student s[2];
float average[2];	

for(j=0;j<2;j++){
	
printf("\nEnter the id of student %d\n",j+1);
scanf("%d",&s[j].id);
printf("\nEnter the name of student %d\n",j+1);
scanf("%s",s[j].name);

 
 for (i=0;i<3;i++) {
 	

    while (1) {   
        printf("Enter marks of subject %d: ", i + 1);
        scanf("%d", &s[j].sub[i]);

        if (s[j].sub[i] >= 0 && s[j].sub[i] <= 100) {
        	sum=s[j].sub[i]+sum;
            break; 
        }
        printf("Invalid input! Please enter a number between 0 and 100.\n");
    }
}

avg=sum/3; 
average[j]=avg;
sum=0;avg=0;

s[j].grade1=gra(s[j].sub[0]);
s[j].grade2=gra(s[j].sub[1]);
s[j].grade3=gra(s[j].sub[2]);
}

for(i=0;i<2;i++){
	sum=average[i]+sum;
}

avg=sum/2;

printf("The average of whole class is %0.2f",avg);

printf("\n\nEnter the id you want to search\n");
scanf("%d",&id);
for(i=0;i<2;i++){ 
if (id==s[i].id){
printf("\nrecord found\n");
printf("\nName:%s",s[i].name);
printf("\nRoll number:%d",s[i].id);
}
else{
	printf("\nRecord not found\n");
}
}


printf("\n\nEnter the name you want to search\n");
scanf("%s",name);
for(i=0;i<2;i++){
 
if (strcmp(name,s[i].name)==0){

printf("\nrecord found\n");
printf("\nName:%s",s[i].name);
printf("\nRoll number:%d",s[i].id);
}
else{
	printf("\nRecord not found\n");
}
}

printf("\n\nEnter the grades you want to search\n");
scanf(" %c",&grade);
for(i=0;i<2;i++){
 
if (grade==s[i].grade1){

printf("\nrecord found\n");
printf("\nName:%s",s[i].name);
printf("\nRoll number:%d",s[i].id);
}
else{
	printf("\nRecord not found\n");
}
}

for(i=0;i<2;i++){
 
if (grade==s[i].grade2){

printf("\nrecord found\n");
printf("\nName:%s",s[i].name);
printf("\nRoll number:%d",s[i].id);
}
else{
	printf("\nRecord not found\n");
}
}

for(i=0;i<2;i++){
 
if (grade==s[i].grade3){

printf("\nrecord found\n");
printf("\nName:%s",s[i].name);
printf("\nRoll number:%d",s[i].id);
}
else{
	printf("\nRecord not found\n");
}
}
}




 
 
	
