#include <stdio.h>
void Myfunc(){
  float power,x,result = 1;
  //int  power;

    printf("Enter basenumber: ");
    scanf("%f", &x);

    printf("Enter powernumber: ");
    scanf("%f", &power); 
    int b = power;
    int i = 1;
  if(power != b || power < 0){
      printf("Can't Do");
    }
    while(i <= power)
    {
        result *= x;
        i++;
    }
    printf("%.3f^%d = %.3f",x, power, result);
}
int main(void) {

  Myfunc();
  return 0;
}
