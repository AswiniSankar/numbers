/*
enter the number211 
enter the digit2
433
*/
#include<stdio.h>
int main()
{
   int num,n,r,s,t,c=0,i,a[50],temp;
   printf("enter the number");
   scanf("%d",&num);
   printf("enter the digit");
   scanf("%d",&n);
   while(num>0)
   {
       r=num%10;
       s=r+n;
       a[c]=s;
       c++;
     
       //printf("%d ",s);
       num=num/10;
   }
  // printf("%d",c);
   t=c-1;
   i=0;
   while(i<t)
   {
       temp=a[i];
       a[i]=a[t];
       a[t]=temp;
       i++;
       t--;
   }
  for (i=0;i<c;i++)
    printf("%d",a[i]);
   
  printf("\n");
   
return 0;
}
