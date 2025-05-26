//원의 면적을 계산하는 프로그램
#include<stdio.h>

int main(void) {
  double radius, area;

  printf("원의 반지름을 입력하시오:");
  scanf("%lf", &radius);

  area = 3.141592*radius*radius;

  printf("원의 면적은 %lf입니다.", area);
  return 0;

}