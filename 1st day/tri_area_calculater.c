//사용자로부터 삼각형의 높이와 밑변을 받아서 넓이를 계산하는 프로그램
#include<stdio.h>

int main(void) {
  double base , height, area;

  printf("삼각형의 밑변: ");
  scanf("%lf", &base);
  printf("삼각형의 높이: ");
  scanf("%lf", &height);

  area = 0.5* height * base;

  printf("삼각형의 넓이: %lf", area);
  return 0;
}