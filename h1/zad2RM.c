#include<stdio.h>
	
int main(){
	
	int x,y,c,suma=0;
	printf("Vuvedete nachalna stoinos za intervala:");
	scanf("%d", &x);
	printf("Vuvedi kraina soinost na intervala:");
	scanf("%d", &y);
	
	for(c=x; c<=y; c+=1)
	{
		
		if(c%17==0){
			suma=suma+c;
		}
		else{
		//vru6ta se obratno v cikula for
		}
	
	}
		
	printf("%d\n", suma);
}
