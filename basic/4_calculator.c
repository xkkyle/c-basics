#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int getRandomNum(int level);
void showQuestion(int level, int num1, int num2);

void success();
void fail();

int main(void) 
{
 
  // 문이 5개 있고, 각 문마다 점점 어려운 수식 퀴즈가 출제 (랜덤)
  // 맞히면 통과, 틀리면 실패

  srand(time(NULL));

  int count = 0;
  for(int i = 1; i <= 5; i++) {
    // x + y = ?
    int num1 = getRandomNum(i);
    int num2 = getRandomNum(i);

    showQuestion(i, num1, num2);
    
    int answer = -1;

    scanf("%d", &answer);

    if(answer == -1){
      printf("프로그램을 종료합니다.\n");
      exit(0); // 프로그램 종료 -> break와 달리 프로그램 종료
    } else if(answer == num1 * num2) {
      success();
      count += 1;
    } else {
      fail();
    }
  }

  printf("5회 중 %d 회 맞췄습니다\n", count);
  return 0;
}

int getRandomNum(int level)
{ 
  return rand() % (level * 7) + 1;
}

void showQuestion(int level, int num1, int num2)
{
  printf("[ Level %d ] - \n\t%d x %d 의 값은 얼마입니까?", level, num1, num2);
  printf("#############################\n");
  printf("답을 입력하세요! (종료 : -1) >> \n");
}

void success() 
{
  printf("성공하였습니다!!");
}

void fail()
{
  printf("실패하였습니다!!");
}