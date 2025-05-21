//사용자로부터 마일값을 입력받아 미처로 변환된 값을 화면에 출력하는 프로그램
#include<stdio.h>

int main(void) {
  double mile, meter;

  printf("마일을 입력하시오:");
  scanf("%lf", &mile);

  meter = 1609.0 * mile;

  printf("%lf마일은 %lf미터입니다.", mile, meter);

  return 0;
}