#include <stdio.h>

int main()
{	
     float x, res, n, i=3;
     do
     {
      printf("Vuvedi x (0<x<1):");
      scanf("%f", &x);
     }while(x<0 || x>1); 
	
	res=4;
	do{
		n = 4/i;
		res -= n;
		i += 2;
		n = 4/i;
		res += n;
		i += 2;
	}while(n>=x);
	
	printf("Rezultat  : %f \n", res);

	getchar();
	getchar();
	getchar();
}
