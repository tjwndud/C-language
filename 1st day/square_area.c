//사각형의 둘레와 면적구하는 프로그램
//도전 문제 1.한번의 printf() 호출로 변수 perimeter와 area 값이 동시에 출력되도록 변경하라.
//도전 문제 2.변수들을 한 줄에 모두 선언하여 보자.
//도전 문제 3.w와 h의 값을 사용자로부터 받도록 변경하여 보자 %lf를 사용한다.
#include<stdio.h>;

int main(void) {
/*
  double w;
  double h;
  double area;
  double perimeter; 
*/
  double w, h, area, perimeter; //도전 문제 2

  /*
  w = 10.0;
  h = 5.0;
  */
  printf("직사각형읜 가로값을 입력하시오:");
  scanf("%lf", &w);
  printf("직사각형의 세로값을 입력하시오:");
  scanf("%lf", &h);//도전문제 3

  area = w * h;
  perimeter = 2*(w+h);

  printf("사각형의 넓이: %lf\n 사각형의 둘레: %lf\n", area , perimeter); //도전 문제 1
  
  /*
  printf("사각형의 넓이: %lf\n", area);
  printf("사각형의 둘레: %lf\n", perimeter);
  */

  return 0;
} 