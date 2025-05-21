//다항식 3x^2+7x+11 의 값을 계산하는 프로그램을 작성하라
#include<stdio.h>

int main(void) {
  float x, sum ;

  printf("실수를 입력하시오:");
  scanf("%f", &x);

  sum = (3*x*x)+(7*x)+11;
  printf("다항식의 값은 %f입니다.", sum);

  return 0;
}