#include <stdio.h>
float power,x,result = 1;
int  i;
float Myfunc(){
for(i=1;i<=power;i++){
  result *= x;
}
return result;
}
int main(void) {
    printf("Enter basenumber: ");
    scanf("%f", &x);
    printf("Enter powernumber: ");
    scanf("%f", &power); 
    int p = power;
    if (power!=p || power<0){
      power = -1;
      printf("Can't do");
    }
    Myfunc();
    while(i <= power)
    {
        printf("%.3f^%d = %.3f",x, power, result);
        result *= x;
        i++;
        
    }
  return 0;
}
