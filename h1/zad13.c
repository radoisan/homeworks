#include<stdio.h>
#include<math.h>
#include<stdio.h>

int main()
{
     int x, i, j, a[10], sum;
     do
     {
      printf("\nEnter x and y (0 < x < 10)");
      printf("\nEnter x:"); scanf("%d", &x);
     }while(x<0 || x>10); 
     
     
     for(i=1;i<11;i++)
     {
        sum = 0;              
        for(j=0;j<1000;j++)
        {              
         if(j%(x*i)==0)
         {
            sum += j;     
         };
        }; 
       a[i-1]=sum;
       printf("The sum of the numbers that can get divided by %d = %d \n", x*i, a[i-1]);     
     };
     
    getchar();
    getchar();
    getchar();  
}     
  
