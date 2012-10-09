#include<stdio.h>
#include<math.h>
#include<stdio.h>

int main()
{
     int x, z, n;
     float a[10], sum_cos;
     do
     {
      printf("\nEnter x and y (0 < x < 10)");
      printf("\nEnter x:"); scanf("%d", &x);
     }while(x<0 || x>10); 
     sum_cos = 0.0;
     
     for(n=0 ; n <= 10 ; n++)
     {         
      for(z=(n*x) ; z<((n+1)*x) ; z++)
      {
            sum_cos += cos(z);               
      };
      
      a[n]=sum_cos;          
     };
     
     for(n=0 ; n <=10 ; n++)
     {
         printf("\n%f", a[n]);        
     };
     
    getchar();
    getchar();
    getchar();     
}
