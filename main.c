#include <stdio.h>

int main(void) {
  int i, a=30,b=60,large;
  if(a>b)
    large = a;
  else 
  large =b;

  for(i=1;i<=large;i++)
  {
    if(i%a==0 && i%b == 0){
      printf("%d",i);
      break;
    }
  }
}