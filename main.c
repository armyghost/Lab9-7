#include <stdio.h>
void Myfunc(){
  float x,result = 1;
  int  power;

    printf("Enter basenumber: ");
    scanf("%f", &x);

    printf("Enter powernumber: ");
    scanf("%d", &power); 

    int i = 1;
    

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
