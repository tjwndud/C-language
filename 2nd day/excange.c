//int형 변수 x와 y의 값을 교환하는 프로그램을 작성하여보자, 별도의 변수가 필요하면 정의하여서 사용한다. 변수 x와 y는 10, 20 으로 초기화한다.
#include<stdio.h>

int main(void) {
  int x , y , tmp;
  x =10;
  y =20;
  tmp = 0;
  printf("%d, %d\n", x, y);
  tmp = x;
  x = y;
  y = tmp;
  printf("%d, %d", x, y);

  return 0;

}