#include<stdio.h>
#include<string.h>
struct student
{
int RollNo;
char name[50];
char address[50];
};
int main()
{
struct student S1 = {001,"NEIL","Kr Puram"};
struct student S2 = {002,"NITIN","Banaswadi"};
struct student S3 = {003,"MUKESH","Ramurtynagar"};
struct student *students[3]={&S1,&S2,&S3};
int search,i;
printf("enter the roll no to be searched:");
scanf("%d",&search);
for(i=0;i<3;i++)
{
if(students[i]->RollNo==search){
printf("RollNo:%d\n",students[i]->RollNo);
printf("name:%s\n",students[i]->name);
printf("address:%s\n",students[i]->address);
break; }
else
 printf("student roll no not found");
}
}
