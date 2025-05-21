//원의 면적을 구하는 프로그램

#include<stdio.h>

int main(void) {
  float radius;
  float area;

  printf("반지름을 입력하시오: " , radius);
  scanf("%f", &radius);

  area = 3.14*radius*radius;

  printf("원의 면적: %f\n", area);
  return 0;
}