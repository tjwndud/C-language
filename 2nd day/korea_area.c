//우리나라에서 많이 사용되는 면적의 단위인 평을 제곱미터로 환산하는 프로그램. 여기서 1평은 3.3m^2이다. 
#include<stdio.h>

int main(void) {
  double pyeong, meter;
  const double SQMETER_PER_PYEONG = 3.3058;

  printf("평을 입력하시오:");
  scanf("%lf", &pyeong);

  meter = pyeong * SQMETER_PER_PYEONG;

  printf("%lf 평방미터입니다.", meter);

  return 0;
}