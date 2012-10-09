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

int main(){
	int x, y, i;

	do{
	printf("Vuvedi nachalna stoinost za intervala:\n");
	scanf("%d", &x);
	printf("Vuvedi kraina stoinost za intervala:\n");
	scanf("%d", &y);
 	}while(x>=y);

	for(i=x; i<y; i++)
    {
     if( fib(i)>=x && fib(i)<=y )
        {
printf("%d \n", fib(i));
}
    };
    getchar();
    getchar();
}



	
