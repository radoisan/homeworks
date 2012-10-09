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
    int x , y , i , j ;
    //proverka na vhodnite danni 
    do
    {
    printf("Vuvedi x (0<x<10) :"); scanf("%d", &x);
    }while(x<0 || x>10); 
    j=0;
    i=1;
    do
    {
     if( fib(i)%x==0 )
        {
			printf("%d \n", fib(i));
			j++;
		};
	 i++;	
    }while(j<10);
    getchar();
    getchar();  
}
