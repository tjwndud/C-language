//자신의 몸무게를 입력받아 달에서의 몸무게를 계산하는 프로그램
#include<stdio.h>

int main(void) {
  double Weight_on_earth, Weight_on_moon;

  printf("몸무게를 입력하세요(단위: kg): ");
  scanf("%lf", &Weight_on_earth);

  Weight_on_moon = Weight_on_earth * 0.17;
  
  printf("달에서의 몸무게는 %lfkg 입니다.", Weight_on_moon);

  return 0;
}