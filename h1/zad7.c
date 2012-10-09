#include<stdlib.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int x , i , j , temp;
	float a[10], cos_val;

	do{

	printf("Enter x (x must be between 0 and 10):\n"); 
	scanf("%d", &x);

	}while(x<0 || x>10); 
		i = 1;
		j = 0;
    
	do{
	cos_val = cos(i);
	temp = cos_val * 1000;
		if(temp%10==x)
		{
			printf("%f\n", cos(i));    
			j++;               
		};
	i++;                     
	}while(j<10);
    
    
getchar();
getchar();  
getchar();
}
