//사용자로부터 화씨 온도를 받아서 섭씨 온도로 환산하는 프로그램
#include<stdio.h>

int main(void) {

  double F, C;

  printf("화씨값을 입력하시오:");
  scanf("%lf", &F);

  C = (5.0/9.0)*(F - 32.0);

  printf("섭씨값은 %lf도 입니다.", C);
  
  return 0;
}