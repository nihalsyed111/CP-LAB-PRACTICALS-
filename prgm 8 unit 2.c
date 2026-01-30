#include<stdio.h>
int main()
{
int i,j,key;
int arr[10]={5,2,15,7,10};
for(i=1;i<5;i++)
{
key=arr[i];
j=i-1;
while(j>=0&&arr[j]>key)
{
arr[j+1]=arr[j];
j=j-1;
}
arr[j+1]=key;
}
printf("sorted array:");
for(i=0;i<5;i++)
printf("%d \t",arr[i]);
return 0;

}
