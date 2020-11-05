#include <stdio.h>
float Myfunc(float x , float power);
float Myfunc(float x , float power){
    float result = 1;
    int b = power;
    int i = 1;
    if( (b != power) || (b < 0)){
      power = -1;
      printf("Exit Program");
      return 0 ;
    }

   while(i <= b)
    {
        result *= x;
        i+=1;    
    }
    printf("%.3f^%.0f = %.3f",x, power, result);
    return result;
}

int main(void) {
  float num1;
  float num2;
  float get;
    printf("Enter basenumber: ");
    scanf("%f", &num1);

    printf("Enter powernumber: ");
    scanf("%f", &num2); 
    get = Myfunc(num1,num2);
  
  return 0;
}
