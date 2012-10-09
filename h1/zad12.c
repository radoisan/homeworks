#include<stdio.h>
#include<math.h>
#include<stdio.h>

int main()
{
     int x, i, j, n, a[10], sum;
     do
     {
      printf("\nEnter x and y (0 < x < 10)");
      printf("\nEnter x:"); scanf("%d", &x);
     }while(x<0 || x>10); 
     
     n = 1;
     i = 0;
     
     do
     {
      sum = 0;   
      if(n%x==0)          
      {
            for(j=0;j<n;j++)
             {
                  sum += j;          
             };
        printf("\n%d", sum);     
        a[i]=sum;                   
        i++;
      };  
      n++;       
     }while(a[9]==0);
     
    getchar();
    getchar();
    getchar();     
}
