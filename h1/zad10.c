#include<stdio.h>
#include<math.h>
#include<stdio.h>

int main()
{
    int x , y , w , h , i , j, x_w, y_h;
    
    printf("\nEnter x, y, w, h (ALL > 0)");
    printf("\nEnter x:"); scanf("%d", &x);
    printf("\nEnter y:"); scanf("%d", &y);
    printf("\nEnter w:"); scanf("%d", &w);
    printf("\nEnter h:"); scanf("%d", &h);  
    
    if((x>w)&&(y>h))
    {
          x_w = div(x,w);
          y_h = div(y,h);
          
    }
    else
    {
          printf("It can't be cut in pieces with that size!\n");    
    };
    printf("\n");
    for(i=0;i<x_w;i++)
    {
        x-=w;      
        printf("It need to be cut at the %dth cm from its width\n", x);
                 
    }
    printf("\n");
    while(y>h)
    {
        y-=h;  
        printf("It need to be cut at the %dth cm from its high\n", y);
               
    }
    
    
    getchar();
    getchar();
    getchar();  
}
