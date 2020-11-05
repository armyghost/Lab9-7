#include <stdio.h>
float Myfunc(){
  float   power, result = 1;
  float x ;

    printf("Enter basenumber: ");
    scanf("%f", &x);

    printf("Enter powernumber: ");
    scanf("%f", &power); 

    int b = power;
    int i = 1;
    if( (b != power) || (b < 0)){
      power = -1;
      printf("Exit Program");
      return 0 ;
    }
 printf(" +++%.3f",result);

   while(i <= b)
    {
        result *= x;
        i+=1;    
    }
    printf("%.3f^%.0f = %.3f",x, power, result);
}

int main(void) {

  Myfunc();
  
  return 0;
}
