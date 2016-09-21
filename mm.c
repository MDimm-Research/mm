#include <stdio.h>

main()
{

   int a[3][3], b[3][3], c[3][3];
   int i, j, k, m;

      for (i = 1; i < 4; i++){
         printf("\n\nRow  %d \n",i);
         for (j = 1; j < 4; j++){
            printf("\n");
            for (k = 1; k < 4; k++)
               printf("c[%d][%d]=c[%d][%d]+a[%d][%d]*b[%d][%d]\n",
                       i, j, i, j, i, k, k, j);
//                     c     c     a     b
         }
      }
}
