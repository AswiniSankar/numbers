/*
ip:
20
100
op:
25 36 49 64 81 100
*/
//to find suqare values in between the range 
#include<stdio.h>
int main()
{
  int a,b,i=1,t;
  scanf("%d%d",&a,&b);
  while(1)
  {
     t=i*i;
     if(t>=a && t<=b)
       printf("%d-->%d\n",i,t);
     i++;
     if(t>b)
      break;
  }
  printf("\n");
  return 0;
}
