#include <stdio.h>
float Myfunc(){
  float  power, x, result = 1;
  //int ;

    printf("Enter basenumber: ");
    scanf("%f", &x);

    printf("Enter powernumber: ");
    scanf("%f", &power); 
    int d = power;
    int i = 1;
    if(power != d || power < 0){
      power = -1;
      printf("Exit Program");
      return 0 ;
    }
   while(i <= power)
    {
        result *= power;
        printf("%.3f^%d = %.3f",x, power, result);
        i++;
        return result ;
    }
    printf("%.3f^%d = %.3f",x, power, result);
}
int main(void) {

  Myfunc();
  
  return 0;
}
