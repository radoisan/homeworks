//Inicializira masiv ot 100 elementa, vuvejdame x v intervala 0 do 10 i go sortita taka che purvite chisla da zavur6vat na x.
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){

int x,i,j, arr[100], temp;

	printf("Vuvedi x (x da bude v intervala 0 i 10):"); 
	scanf("%d", &x);
    
	srand(time(NULL));

	for(i=1; i<100; i++)
	{          
		arr[i] = rand()%100;
	}
	j = 0;
	for(i=1; i<100; i++)
	{  
		if(arr[i]%10==x)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			j++;
		}
	} 
	for(i=1; i<100; i++)
	{
	printf("%d\n", arr[i]);         
	} 
getchar();
getchar(); 
getchar();     
}
