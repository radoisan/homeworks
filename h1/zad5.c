#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	int x , i , j ;
	float a[10], temp;

	printf("Vuvedi x (x da e v intervala ot 0 do 10):"); 
	scanf("%d", &x);
	//V tozi cikul zadavame stoinosti na elementite koito sa cos ot koeficienta 		na elementa
	for(i=0; i<10; i++)
	{
		a[i] = cos(i);
	}
	//Tuk printirame masiva nesortiran
	for(i=1 ; i<10; i++)
	{
		printf("%f\n", a[i]);             
	}
	printf("Izvejda gi sortirani:\n");
	//tuk izvur6vame sortiraneto na masiva
	for (i = 9; i > 0; i--)
	{
		for (j = 1; j <= i; j++)
		{
			if (a[j-1] > a[j])
			{
				temp = a[j-1];
				a[j-1] = a[j];
				a[j] = temp;
			}
		}
	}
		//Printirame masiva sortiran v nizhodq6t red
		for(i=1 ; i<10; i++)
		{
			printf("%f\n", a[i]);             
		}
    
	getchar();
	getchar();  
}
