#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define MAX 10000

// fputs, fgets : 문자열 저장/불러오기
// 파일 쓰기
int main(void)
{
  char line[MAX]; // char line[10000]
  FILE *file = fopen("./input.txt", "wb"); 
  // r : read / w : write / a : append (이어쓰기)
  // t: text / b : binary data

  if(file == NULL)
  {
    printf("파일 열기 실패\n");
    return 1;
  }

  fputs("fputs 를 이용해서 글을 적어볼게요\n", file);
  fputs("잘 적히는지 확인해주세요\n", file);

  // 파일을 열고 나서 닫지 않은 상태에서 어떤 프로그램에 문제가 생기면?
  // 데이터 손실 발생 가능! 따라서, 항상 파일은 닫아주는 습관 키우기
  fclose(file);
}

