#include <stdio.h>

int main(void) {
  int arr[3] = { 5, 10, 15 };
  int *ptr = arr; // arr 주소값을 ptr에 가리킨다.

  for(int i = 0; i < 3; i++)
  {
    printf("배열 arr[%d]의 값 : %d\n", i, arr[i]);
  }

  for(int i = 0; i < 3; i++)
  {
      printf("포인터 ptr[%d]의 값 : %d\n", i, ptr[i]);
  } 


  ptr[0] = 100;
  ptr[1] = 200;
  ptr[2] = 300;


  for(int i = 0; i < 3; i++)
  {
    // printf("배열 arr[%d]의 값 : %d\n", i, arr[i]);
    printf("배열 arr[%d]의 값 : %d\n", i, *(arr + i)); // [위와 완전 동일] arr 배열 자체가 처음 시작되는 주소값에서부터 i번째에 해당하는 값을 가져오는 것
  }

  for(int i = 0; i < 3; i++)
  {
      // printf("포인터 ptr[%d]의 값 : %d\n", i, ptr[i]);
      printf("포인터 ptr[%d]의 값 : %d\n", i, *(ptr + i)); // [위와 완전 동일]
  } 

  // *(arr + i) == arr[i] -> 같은 표현
  // arr == arr 배열의 첫 번째 값의 주소와 동일 == &arr[0]
  printf("arr 배열 전체의 주소 : %p\n", &arr); // == int (*)[3] 배열 전체의 주소
  printf("arr[0]의 주소 : %p\n", &arr[0]); // int *, 첫 번째 요소의 주소

  // *&는 아무것도 없는 것과 같다. &는 주소이며, *는 그 주소의 값이기 때문에 상쇄된다.
  printf("arr 자체의 주소가 가지는 실제값, 즉 첫 번째 요소의 값: %d\n", *arr); // 값
  printf("arr 자체의 주소가 가지는 실제값, 즉 첫 번째 요소의 값: %d\n", *&arr[0]);
  printf("arr 자체의 주소가 가지는 실제값, 즉 첫 번째 요소의 값: %d\n", arr[0]); // 값
  // printf("arr[0]의 주소 : %p\n", &arr);


  // char kyle[4] = {'k', 'y', 'l', 'e'};
  // char *kylePtr = kyle;
  
  // for (int i = 0; i < 4; i++) 
  // {
  //   printf("address [%d] : %p\n", i, &kyle[i]);
  //   printf("address [%d] : %c\n", i, kyle[i]);
  //   printf("address [%d] : %c\n", i, *&kyle[i]);
  // }


  return 0;
}