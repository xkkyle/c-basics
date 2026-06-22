#include <stdio.h>

struct GameInfo {
  char *name;
  int year;
  int price;
  char *company;

  struct GameInfo *friendGame;
};


typedef struct GameInformation {
  char *name;
  int year;
  int price;
  char *company;

  struct GameInfo *friendGame;
} GAME_INFO; // typedef struct ~~~를 GAME_INFO로 치환하겠다는 이야기

// GameInformation 키워드는 생략도 가능 (자주 사용)
typedef struct {
  char *name;
  int year;
  int price;
  char *company;

  struct GameInfo *friendGame;
} GAME_INFO_2;


// typedef
// 자료형에 별명 지정 가능
int main(void) {
  typedef int 정수;
  typedef float 실수;
  typedef long 긴정수;

  긴정수 longtype = 3;

  typedef struct GameInfo 게임정보;
  게임정보 game1 = {"피파" , 2015, 15, "피파온라인"};
  printf("%s", game1.name);


  GAME_INFO game2 = {"한글게임", 2020, 15, "한글과컴퓨터"};

  return 0;
}