//태양빛 도달 시간 계산하는 프로그램
//변수의 자료형은 전부 실수
//빛이 도달하는 시간은 (도달 시간 = 거리 / (빛의 속도))로 계산할 수 있다.

#include<stdio.h>
/*
int main(void) {

  double light_speed = 300000;
  double distance= 149600000;
  double arrival_time;
  
  arrival_time = distance / light_speed;

  printf("빛의 속도는 %lfkm\n", light_speed);
  printf("태양과 지구의 거리는 %lfkm\n", distance);
  printf("도달 시간은 %lf초\n", arrival_time);

  return 0;
}
  */
//도전 문제: 위 프로그램의 출력은 498.666667초로 나온다. 이것을 분과 초로 나누어서 8분 20초와 같은 식으로 출력하도록 변경하여라. 나머지를 계산하는 연산자는 %이다.
int main(void) {

  double light_speed = 300000;
  double distance= 149600000;
  double arrival_time;
  const int SECOND_PER_MINUTE = 60;
  int minute;
  int second;
  
  arrival_time = distance / light_speed;

  int total_second = (int)arrival_time;
  minute = total_second / SECOND_PER_MINUTE;
  second = total_second % SECOND_PER_MINUTE;

  printf("빛의 속도는 %lfkm\n", light_speed);
  printf("태양과 지구의 거리는 %lfkm\n", distance);
  printf("도달 시간은 %lf초\n", arrival_time);
  printf("도달 시간은 %d분 %d초 입니다.", minute, second);

  return 0;
}