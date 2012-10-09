#include<stdio.h>

int main(){

	int x,y,c,suma=0;
	printf("Vuvedete nachalna stoinos za intervala:");
	scanf("%d", &x);
	printf("Vuvedi kraina soinost na intervala:");
	scanf("%d", &y);

	for(c=x; c<=y; )
	{
		if(c%2 != 0){
			suma=suma+c;
		}
	c+=1;
	
	}	
	printf("%d\n", suma);
}
