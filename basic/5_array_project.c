#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>


int main(void) 
{
  srand(time(NULL));

  printf("\n\n --- Game Start --- \n\n");

  int answer; // 사용자 입력값
  int treatment = rand() % 4; // 0 ~ 3

  int cntShowBottle = 0; // 이번 게임에 보여줄 병의 갯수
  int prevCntShowBottle = 0; // 앞 게임에 보여준 병의 갯수
  // 서로 보여주는 병의 갯수를 다르게 하여 정답률 향상 (처음 2개 -> 다음 3개)

  // 3번의 기회
  for(int i = 1; i <= 3; i++)
  {
    int bottle[4] = { 0, 0, 0, 0 };

    do {
      cntShowBottle = rand() % 2 + 2; // 2, 3
    } while(cntShowBottle == prevCntShowBottle);
    
    prevCntShowBottle = cntShowBottle;

    int isIncluded = 0; // 보여줄 병 중에 발모제가 포함되었는지 여부 (1 이면 포함)
    printf(" > %d번째 시도 : ", i);

    // 보여줄 병 종류 선택
    for(int j = 0; j < cntShowBottle; j++)
    {
      int randomBottle = rand() % 4; // 0 - 3

      // 아직 선택되지 않는 병이면, 선택 처리 (0 이면 선택안됀 것)
      if (bottle[randomBottle] == 0) 
      {
        bottle[randomBottle] = 1;

        if(randomBottle == treatment) {
          isIncluded = 1;
        }
      } 
      else 
      {
        // 이미 선택된 병이면, 중복이므로 다시 선택
        j--;
      }
    }

    // 사용자에게 문제 표시
    for (int k = 0; k < 4; k++) 
    {
      if (bottle[k] == 1) 
      {
        printf("%d ", k + 1);
      }
    }

    printf(" 물약을 머리에 바릅니다\n\n");

    if (isIncluded == 1)
    {
      printf(" >> 성공! 머리가 났어요 !! \n");
    } 
    else 
    {
      printf(" >> 실패ㅠㅠ 머리가 나지 않았어요 \n\n");
    }

    printf("\n ... 계속하려면 아무키나 누르세요 ...");
    getchar(); // 사용자가 어떤 입력을 할 때까지 기다리게 하는 것
  }

  printf("\n\n 발모제는 몇 번일까요? \n");
  scanf("%d", &answer);

  if(answer == treatment + 1) 
  {
    printf("\n >> 정답입니다!\n");
  } 
  else 
  {
    printf("\n >> 땡 ! 틀렷어요. 정답은 %d 입니다.", treatment + 1);
  }

  return 0;
}