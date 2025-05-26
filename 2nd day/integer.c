//정수형 변수들을 선언하여보고 정수값을 대입하는 프로그램
#include<stdio.h>

int main(void) {

  short year = 0;
  int sale = 0;
  long total_sale = 0;
  long long large_value;

  year = 10;
  sale = 200000000;
  total_sale = year * sale;

  printf("total_sale = %ld \n",total_sale);
  return 0;
}