#include<stdio.h>
void show(int arr[],int n)
{
int i;
printf("array elements:");
for(i=0;i<n;i++)
printf("%d",arr[i]);
}
int main()
{
int arr[10]={10,20,30,40,50,60,70,80,90,100};
show(arr,10);
return 0;
}
