#include<stdio.h>
#include<stdlib.h>
#include<math.h>

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
    int x, i, k, a[10];
    do
     {
      printf("Enter x(x>0):"); 
      scanf("%d", &x);
     }while(x<0); 
    i=1;
    k=0;
    
    do
    { 
       if(x%i==0 && i%2!=0)
       {
            a[k]=i;
            k++;               
       };                
       i++;             
    }while(k<10);
    
    
    for(i=0;i<10;i++)
    {
        if(prime(a[i]))
        {
           printf("%d", a[i]);               
        };                          
    };
    


    getchar();
    getchar();
    getchar();    
}
