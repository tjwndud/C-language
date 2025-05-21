//welcome 프로그램
#include <stdio.h>

int main(void) {
  char name [256];
  printf("이름을 작성하시오:");
  scanf("%s" , name);
  printf("%s님, 환영합니다.", name);
  return 0; 
}
