#include<stdio.h>

int fib(int x)
{
	if(x == 0)
    {
		return 0;
	}
	else
    {
		if(x == 1 || x == 2)
        {
			return 1;
		}
		else
        {
			return ( fib(x-1) + fib(x-2) );
		}
	}
}

int main()
{
    int x , y , i , k=0, a[10];
    
    do
    {
      printf("\nEnter x and y (0 < x < 10)");
      printf("\nEnter x:"); scanf("%d", &x);
    }while(x<0 || x>10); 
    i=0;
    
    do
    {               
     if( fib(i)%10==x)
        {
            a[k]=fib(i);         
			printf("%d \n", a[k]);
			k++;
		};
		i++;
    }while(k<10);
    getchar();
    getchar();  
}
