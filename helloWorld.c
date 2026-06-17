#include <stdio.h>

/**
 * gcc hello.c -o hello
 * 
 * gcc : c 컴파일러
 * -o : output / 출력 파일 이름을 지정하는 옵션
 * hello : 만들어질 실행 파일 이름
 * 
 * - 줄바꿈 "\n"
 * - %d -> 정수형 값 출력을 위한 문자 -> , 뒤에 들어오는 값들을 넣기
 * 
 * 실수(float 4bytes & double 8bytes)
 * - %f -> 실수형 float 값 출력을 위한 문자
 * - %.2f -> 실수형 float 값 소수점 2번째 자리까지
 * 
 * - %lf -> 실수 double 
 * - %.2lf -> 실수 double 값 소수점 2번째 자리까지
 */


/**
 * 입력 : scanf
 * 출력 : printf
 */


int main(void) {
  int age = 12; // 변수
  float fAge = 13.0;
  double dAge = 4.428;

  const int YEAR = 2000; // 상수

  printf("%d\n", age);
  age = 14;


  printf("%d\n", age);
  printf("%.2f\n", fAge);
  printf("%lf\n", dAge);

  printf("태어난 년도 : %d\n", YEAR);


  // printf 에 대하여
  int a = 3 + 7;

  printf("3 + 7 = %d\n", a);
  printf("%d x %d = %d\n", 3, 7, 3 * 7);

  // scanf = 키보드 입력을 받아서 저장
  // scanf_s -> windows, visual studio 보안강화버전
  // linux, macOS에서는 scanf
  
  int input;
  printf("값을 입력하세요 : ");

  scanf("%d", &input);
  printf("입력값은 : %d\n", input);


  // 입력 시 스페이스바로 구분하기
  int one, two, three;
  
  printf("3개의 정수를 입력하세요 : ");
  scanf("%d %d %d", &one, &two, &three);

  printf("one은 : %d\n", one);
  printf("one은 : %d\n", two);
  printf("one은 : %d\n", three);

  // 문자, 문자열
  // 문자 하나는 작은 따옴표
  // 문자열은 큰 따옴표

  char c = 'A';
  printf("%c\n", c);

  // 문자열 접근 시에는 & 표시 없이 가능
  // 단, sizeof(변수이름)을 사용하여 특정 길이의 문자열만 받겠다는 것을 명시
  char str[256];
  scanf("%s\n", str, sizeof(str));

  return 0;
};

