//물리학에서 운동에너지는 E=mv^2/2.0으로 계산된다. 사용자로부터 질량(m)과 속도(v)를 받아서 운동에너지를 계산하는 프로그램
#include<stdio.h>

int main(void) {

  double m, v, e;

  printf("질량(kg):");
  scanf("%lf", &m);
  printf("속도(m/s):");
  scanf("%lf", &v);

  e = m*v*v/2.0;
  printf("운동에너자(j)= %lf", e);
  return 0;
}