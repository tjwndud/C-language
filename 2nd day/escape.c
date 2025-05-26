//간단한 로그인 화면
#include<stdio.h>

int main() {
  int id , pass;

  printf("아이디와 패스워드를 4개의 숫자로 입력하시오: \n");
  printf("id: ____\b\b\b\b");
  scanf("%d" , &id);
  printf("pass: ____\b\b\b\b");
  scanf("%d", &pass);
  printf("\a 입력된 id는 \"%d\" 이고 패스워드는 \"%d\" 입니다.\n", id , pass);
  return 0;
}