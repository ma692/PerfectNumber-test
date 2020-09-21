#include <stdio.h>
#include <stdlib.h>

int main()
{
    // check if no. is perfect
    int i=1, num, sum = 0;

       printf("\n Please Enter any number to check if it perfect or not \n") ;
       scanf("%d", &num) ;


      for (i=1; i < num ; i++){
        if (num % i == 0) {
            sum = sum + i;
        }

      }
      while (1) {
      if (sum == num){

        printf("\n %d is a Perfect Number", num);
        printf("\n Please Enter another number \n") ;
        scanf("%d", &num) ;
      }

      else{
        printf("\n%d is not the Perfect Number", num) ;
        printf("\n Please Enter another number \n") ;
        scanf("%d", &num) ;
      }
      }


    return 0 ;
}
