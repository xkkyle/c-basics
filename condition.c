#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int age = 25;

  if(age >= 8 && age <= 13) {
    printf("초등학생입니다.\n");
  } else if (age >= 14 && age <=16){
    printf("중학생입니다.\n");
  } else if(age >= 17 && age <= 19) {
    printf("고등학생입니다.\n");
  } else {
    printf("학생이 아닌가봐요.\n");
  }

  switch (age) {
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
      printf("초등학생입니다.\n");
      break;

    case 14:
    case 15:
    case 16:
      printf("중학생입니다.\n");
      break;
    case 17:
    case 18:
    case 19:
      printf("고등학생입니다.\n");
      break;
    default :
      printf("학생이 아닌가봅니다.\n");
      break;
  }

  printf("\n\n");


  for(int i = 1; i <= 30; i++){
    if(i >= 6 && i <= 10){

      if(i == 7) {
        printf("%d번 학생은 결석입니다.\n", i);
        continue;
      }

      printf("%d번 학생은 조별 발표를 준비하세요\n", i);
    }
  }

  /**
   * rock scissors paper
   * 가위 0 바위 1 보 2
   * - srand(time(NULL)) : 컴퓨터가 랜덤으로 숫자 구할 때
   * -> 상단 #include <stdlib.h> 필요
   * -> 상단 #include<time.h> 필요
   * 
   * 실행할 때마다 현재 시간(seed)이 다르게 하여, 결과가 달라지도록 유도
   * rand() 실행 전에 한 번만!
   */
  srand(time(NULL));

  // rand()는 진짜 랜덤이라기보다 정해진 규칙에 의해 숫자를 만들어내는 함수
  int i = rand() % 3;
  switch (i) {
    case 0:
      printf("가위입니다.");
      break;
    case 1:
      printf("바위입니다.");
      break;
    case 2:
      printf("보입니다.");
      break;
    default: 
      printf("해당 되는 것이 없습니다.");
      break;
  }

  return 0;
}