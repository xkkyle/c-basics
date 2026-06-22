#include <stdio.h>

struct GameInfo {
  char *name;
  int year;
  int price;
  char *company;

  // 구조체 안의 구조체 가능
  struct GameInfo *friendGame; // 연관 업체 게임
};

int main(void) 
{
  char *name = "나도게임";
  int year = 2017;
  int price = 50;
  char *company = "나도회사";


  // struct 사용
  struct GameInfo gameInfo1;
  gameInfo1.name = "나도게임";
  gameInfo1.year = 2017;
  gameInfo1.price = 50;
  gameInfo1.company = "나도회사";

  printf("-- 출시 정보 --\n");
  printf(" 게임명 : %s\n", gameInfo1.name);
  printf(" 연도 : %d\n", gameInfo1.year);
  printf(" 가격 : %d\n", gameInfo1.price);
  printf(" 회사 : %s\n", gameInfo1.company);


  // 구조체를 배열처럼 초기화
  struct GameInfo gameInfo2 = {"너도게임", 2017, 100, "너도회사"};
  printf("-- 출시 정보 --\n");
  printf(" 게임명 : %s\n", gameInfo2.name);
  printf(" 연도 : %d\n", gameInfo2.year);
  printf(" 가격 : %d\n", gameInfo2.price);
  printf(" 회사 : %s\n", gameInfo2.company);

  // 구조체 배열
  struct GameInfo gameArray[2] = {
    {"나도게임", 2017, 100, "나도회사"},
    {"너도게임", 2017, 100, "너도회사"}
  };

  // 구조체 포인터

  struct GameInfo *gamePtr;
  gamePtr = &gameInfo1;

  printf("-- 출시 정보 --\n");
  printf(" 게임명 : %s\n", (*gamePtr).name); // gamePtr 구조체의 값에 접근하려면 *을 붙이고, .name으로 속성에 접근
  printf(" 연도 : %d\n", (*gamePtr).year);
  printf(" 가격 : %d\n", (*gamePtr).price);
  printf(" 회사 : %s\n", (*gamePtr).company);

  // 위의 방식은 불편함이 있음
  // 구조체에 있는 변수에 접근하기 위해 '->' 를 사용
  // 위의 방식과 동일

  printf("-- 출시 정보 --\n");
  printf(" 게임명 : %s\n", gamePtr -> name); // gamePtr 구조체의 값에 접근하려면 *을 붙이고, .name으로 속성에 접근
  printf(" 연도 : %d\n", gamePtr -> year);
  printf(" 가격 : %d\n", gamePtr -> price);
  printf(" 회사 : %s\n", gamePtr -> company);


  // 연관 업체 게임 소개
  struct GameInfo gameInfo3 = { "친구도 코딩", 2020, 15, "친구도 회사" };
  gameInfo1.friendGame = &gameInfo3;

  printf("-- 출시 정보 --\n");
  printf(" 게임명 : %s\n", gameInfo1.friendGame -> name);
  printf(" 연도 : %d\n", gameInfo1.friendGame -> year);
  printf(" 가격 : %d\n", gameInfo1.friendGame -> price);
  printf(" 회사 : %s\n", gameInfo1.friendGame -> company);

  return 0;
}