#include <stdio.h>

// 선언
void calculator(int num);
int getNum(int num, int num2, char c);

void func_without_return();
int func_with_return();

void func_without_params();
void func_with_params(int a, int b, int c);

int func_with_return_and_parmas(int a, int b, int c);

int add(int num1, int num2);

int main(void)
{

  int num = 2;
  calculator(num);
  
  // 반환값이 없는 함수
  func_without_return();

  // 반환값이 있는 함수
  int returnValue = func_with_return();
  calculator(returnValue);

  // 매개변수가 없는 함수
  func_without_params();


  // 매개변수가 있는 함수
  func_with_params(1, 2, 3);

  int ret = func_with_return_and_parmas(4, 5, 6);
  calculator(ret);

  int addValue = add(ret, 5);
  calculator(addValue);

  return 0;
}

// 정의

void calculator(int num)
{
  printf("num은 %d 입니다.\n", num);
}

int getNum(int num, int num2, char c) 
{
  return 4;
}

void func_without_return()
{
  printf("반환값이 없는 함수\n");
}

int func_with_return()
{
  printf("반환값이 있는 함수\n");
  return 10;
}

void func_without_params() 
{
  printf("반환값 없는 함수 입니다!!\n");
}


void func_with_params(int a, int b, int c)
{
  printf("반환값이 있는 함수입니다.\n%d %d %d\n", a, b, c);
}

int func_with_return_and_parmas(int a, int b, int c)
{
  printf("a = %d b = %d c = %d\n", a, b, c);
  return a;
}

int add(int num1, int num2) 
{
  return num1 + num2;
}