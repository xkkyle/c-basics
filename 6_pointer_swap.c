#include <stdio.h>

void swap(int a, int b);
void swap_addr(int *a, int *b);
void change_array(int *ptr);

int main(void) {
  int a = 10;
  int b = 20;

  printf("a의 주소 : %p\n", &a);
  printf("b의 주소 : %p\n", &b);

  // swap 
  // e.g. a 와 b의 값을 바꾼다.

  printf("SWAP 전 | a : %d, b : %d \n", a, b);

  swap(a,b);

  printf("SWAP 함수 밖 (후) | a : %d, b : %d \n", a, b);

  // 값에 의한 복사 (Call by Value) -> 값만 복사

  // 메모리 공간에 있는 주소값을 넘겨 해결
  printf("SWAP_ADDR 밖 (전) | a : %d, b : %d \n", a, b);
  swap_addr(&a, &b);
  printf("SWAP_ADDR 밖 (후) | a : %d, b : %d \n", a, b);


  // 포인터로 배열 값 변경하기
  // 배열일 때, arr2 -> 값이 아닌 arr2 주소를 가리킴 (참조)
  int arr2[3] = { 10, 20, 30 };

  // change_array(arr2);
  change_array(&arr2[0]); // 위와 동일 -> arr2 = arr2[0] 즉 첫 번째 주소의 값과 동일하기 때문

  for(int i = 0; i < 3; i++){
    printf("%d\n", arr2[i]);
  }

  return 0;

}

void swap(int a, int b) 
{
  int temp = a;

  // 전달받은 a와 b의 주소가 다름 (새로운 공간에 a와 b의 주소가 할당됨)
  printf("SWAP 함수 내 a의 주소 %p\n", &a);
  printf("SWAP 함수 내 b의 주소 %p\n", &b);

  a = b;
  b = temp;

  printf("SWAP 함수 내 (후) | a : %d, b : %d \n", a, b);
}


// a와 b는 포인터 변수
// 인수를 전달받은 함수에서는 main의 a 주소를 -> swap_addr의 포인터 a에 저장
// 인수를 전달받은 함수에서는 main의 b 주소를 -> swap_addr의 포인터 b에 저장

void swap_addr(int *a, int *b) 
{
  int temp = *a; // a가 가리키는 곳의 값을 넣어야 함

  printf("%p\n", a); // main 함수 a의 주소
  printf("%p\n", &a); // 포인터 변수 자체의 주소

  *a = *b;
  *b = temp;

  printf("SWAP_ADDR 함수 내 | a : %d, b : %d \n", *a, *b);
}

void change_array(int *ptr) 
{
  ptr[2] = 50;
}