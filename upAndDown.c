#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// Up and Down Game;
int main(void) {
  srand(time(NULL));

  int randInt = rand() % 100 + 1; // 1 ~ 100;
  printf("숫자 : %d\n" , randInt);

  int answer = 0;
  int chance = 5;

  while(1) {
    printf("남은 기회 %d 번 \n", chance--);
    printf("숫자를 맞혀보세요 (1 ~ 100)");

    scanf("%d", &answer);

    if(answer > randInt) {
      printf("Down \n\n");
    } else if(answer < randInt) {
      printf("UP \n\n");
    } else if (answer == randInt) {
      printf("정답! \n\n");
      break;
    } 

    if(chance == 0) {
      printf("모든 기회를 다 사용하셨어요. 실패했습니다...!");
      break;
    }
  }
}