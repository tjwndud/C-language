//변수의 초기화의 중요성
#include<stdio.h>

int main(void) {

  int x, y, z, sum;

  sum = 0; //초기화 하지 않는다면 오류가 발생한다.
  printf("3개의 정수를 입력하시오(x, y, z):");
  scanf("%d %d %d", &x, &y, &z);
  sum += x;
  sum += y;
  sum += z;
  printf("3개의 정수의 합은 %d\n", sum);
  return 0;
}