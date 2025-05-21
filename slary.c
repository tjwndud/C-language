//scanf연습용 연봉 계산기
#include<stdio.h>

int main(void) {
  int Yslary;
  int Mslary;

  printf("연봉을 입력하시오(단위: 만원): ");
  scanf("%d", &Yslary);

  Mslary = Yslary/12;

  printf("월 수령액(단위: 만원): %d\n" , Mslary);
  return 0;
}