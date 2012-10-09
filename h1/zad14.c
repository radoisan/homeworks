#include<stdio.h>
#include<math.h>
#include<stdio.h>

int prime(int x)
{
	int i;
	for (i=2; i<x; i++)
    {
      if (x%i == 0 && i != x)
        return 0;
    }
    return 1;
}

int main()
{
     int x, i, a[10], k;
     do
     {
      printf("\nEnter x (0 < x < 10) :"); 
      scanf("%d", &x);
     }while(x<0 || x>10); 
     i = 1;
     k = 0;
     
     do           
     {
        
	     if(prime(i) && i%10==x)
             {
                    a[k]=i;
                    printf("%d\n", a[k]);
                    k++;             
             } 
         i++;                 
     }while(k<10);
     
     getchar();
     getchar();
     getchar();  
}     
  
