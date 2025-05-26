//#define과 const를 사용해보는 프로그램
#include<stdio.h>
#define TAX_RATE 0.2

int main(void) {

  const int MONTH = 12;
  int m_salary, y_salary;

  printf("월급을 입력하시오: ");
  scanf("%d", &m_salary);

  y_salary = MONTH * m_salary;
  printf("연봉은 %d입니다.\n", y_salary);
  printf("세금은 %f입니다.\n", y_salary*TAX_RATE );

  return 0;
}