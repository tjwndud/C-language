//double과 %lf사용을 연습하기 위한 환율계산 프로그램
#include<stdio.h>

int main(void) {
  double rate;
  double usd;
  int krw;

  printf("환율을 입력하시오: ");
  scanf("%lf", &rate);

  printf("원화를 입력하시오: ");
  scanf("%d", &krw);

  usd = krw / rate;

  printf("원화 %d원은 %lf달러입니다.", krw, usd);

  return 0;
}