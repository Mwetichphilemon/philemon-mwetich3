/*how to print out of one dimension array*/
#include<stdio.h>

int main()
{
int arr[5],i;
for /*(i=0;i<5;i++)
{
printf("enter a[%d]:",i);
scanf("%d",&arr[i]);
}
for(i=0;i<5;i++)
{
printf("\n array are[%d]=%d", i,arr[i]);
}
return 0;  
}
