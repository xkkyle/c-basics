#include <stdio.h>
#include <time.h>

int level;
int arrayFish[6];
int *cursor;
void initData();
void printFishes();

// 물고기가 6마리가 있다.
// 이들은 어항에 살고 있는데 사막이다.
// 사막이 너무 더워서 너무 건조해서 물이 아주 빨리 증ㅇ발한다.
// 물이 다 증발하기 전에 부지런히 어항에 물을 줘서 물고기를 살리기
// 물고기는 시간이 지날수록 점점 커져서 나중에는 냠냠...

int main(void) 
{
    long startTime = 0; // 게임 시작 시간
    long totalElapsedTime = 0; // 총 경과시간
    long prevElapsedTime = 0; //직전 경과 시간 (최근에 물을 준 시간 간격)

    int num = 0;
    initData();

    cursor = arrayFish; // cursor[0] ... cursor[1] : 배열도 참조이므로 인덱스로 접근 가능

    startTime = clock(); // 현재시간을 millisecond 단위로 변환

    while(1)
    {
      printFishes();
      getchar(); // 임시로 사용자 입력 대기

      scanf("%d", &num);

      // 입력값 체크
      if(num < 1 || num > 6)
      {
        printf("입력값이 잘못되었습니다.\n");
        continue;
      }

      totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC; // 초단위
      printf("총 경과 시간 : %ld 초 \n", totalElapsedTime);

      // 직전 물 준 시간 (마지막으로 물 준 시간) 이후로 흐른 시간
      prevElapsedTime = totalElapsedTime - prevElapsedTime;
      printf("최근 경과 시간 %ld 초 \n", prevElapsedTime );
    }

    return 0;
}


void initData()
{
  level = 1; // 게임 레벨 (1 ~ 5)

  for (int i = 0; i < 6; i++){
    arrayFish[i] = 100; // 어항 물 높이 (0 ~ 100)
  }
}

void printFishes()
{
  printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6);

  for(int i = 0; i < 6; i++) 
  {
    printf("  %3d ", arrayFish[i]);
  }

  printf("\n\n");
}