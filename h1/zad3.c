#include<stdio.h>
 
main()
{
   int x, y, i = 3, count, c;
 
   printf("Vuvedix(x<y):");
   scanf("%d",&x);
   printf("Vuvedi(y>x):");
   scanf("%d", &y);
 
   if ( x >= y )
   {
      printf("Greshno vuvedeni danni!!!\n");
   }
 
   for ( count = x ; count <= y ;  )
   {
      for ( c = x ; c <= i - 1 ; c++ )
      {
         if ( i%c == 0 )
            break;
      }
      if ( c%10!=3 )
      {
         printf("%d\n",i);
         count++;
      }
      i++;
   }         
 
   return 0;
}
