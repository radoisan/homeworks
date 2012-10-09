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

int twin_primes(int x, int y)
{
     if (x==y+2 || y==x+2)
     {
           if(prime(x) && prime(y))
             return 1;
     }    
     return 0;
}

int main()
{
    float x, sum, a1, b1;
    int i, a, b;
    
    do
    {
       printf("Enter x, where 0 < x < 1!\n");
       printf("Enter x:");scanf("%f", &x);
    }while(x<0 || x>1);
    a=3; 
    b=5;
    sum=0;
    
    do
    {        
        if(twin_primes(a,b))
        {
            a1=a;
            b1=b;
            printf("%f %f", a1, b1);
            sum=(1/a1)+(1/b1);
            printf("%f", sum);                    
        }
        a=a + 2;
        b=b + 2;  
    }while(sum>x);
    printf("The twin primes are: %d, %d\n", a, b);
    printf("%f", sum);
    


    getchar();
    getchar();
    getchar();
}
