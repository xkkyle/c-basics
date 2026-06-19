#include <stdio.h>

int main(void) {

  int a = 1;
  printf("주소 : %p , 암호 : %d\n", &a, a); // 주소 : 1831479736, 암호 : 1

  int b = 2;
  int *mission; // mission이 가리키는 주소에 있는 값

  mission = &a; // a의 주소를 mission에 넣는 것
  printf("mission visiting address : %p, 암호 : %d\n", mission, *mission);


  int *spy = mission;


  mission = &b;
  *mission *= 3;
  printf("mission visiting address : %p, 암호 : %d\n", mission, *mission);


  spy = &a;
  printf("spy visiting address : %p, 암호 : %d\n", spy, *spy);

  spy = &b;
  *spy *= 2;

  printf("spy visiting address : %p, 암호 : %d\n", spy, *spy); // spy pointer 주소
  printf("spy visiting address : %p, 암호 : %d\n", &spy, *spy); // spy 변수 자체 주소
  printf("mission visiting address : %p, 암호 : %d\n", &mission, *mission);


  return 0;
}