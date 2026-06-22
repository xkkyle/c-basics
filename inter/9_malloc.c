#include <stdio.h>
#include <stdlib.h> // malloc 사용을 위해


int main(void) 
{
  int *p;

  // malloc이 반환하는 주소는 타입이 없는 주소(void *) 이다.
  // 정수들을 저장하기 위해서 이것을 int *으로 변환한다. 반드시 필요한 것은 아니다.
  // 할당받을 메모리의 크기를 byte 단위로 지정한다. 여기서는 10개의 정수를 저장하기 위해서 40바이트를 요청하였다.

  p = (int *)malloc(40);

  // 예외처리 (매우 예외적인 상황)
  if(p == NULL) {
    /* 동적 메모리 할당이 실패 
    적절한 조치를 취한다.
    */
  }

  p[0] = 12;
  p[1] = 24;
  *(p+2) = 36;
    

  // 동적할당(malloc)의 사용 예시 : 배열 키우기
  // 동적으로 할당된 배열은 공간이 부족할 경우 더 큰 배열을 할당하여 사용할 수 있다.
  // 단, 엄밀히 말하면 배열의 크기를 키울 수는 없다.
 
  // sizeof(int) : int 정수형의 사이즈(byte 수)가 얼마인지 나타내는 연산자
  int *array = (int *)malloc(4 * sizeof(int)); // 16byte = 4 * 4byte (== int) | 16이라고 정수를 쓰는 것은 좋지않다.
  array[0] = 1;
  *(array+2) = 3;

  int *tmp = (int *)malloc(8 * sizeof(int));

  // 실제 배열을 키우는 방법은?
  // 어딘가 메모리 다른 곳에 더 큰 배열을 할당받고, 기존의 배열을 옮긴 후에 새로 할당 받은 배열의 공간을 사용하는 것
  for (int i =0; i < 4; i++) 
  {
    tmp[i] = array[i];
  }

  array = tmp;
  array[4] = 4;
  *(array + 5) = 5;
  
  printf("답은 %d\n", array[5]);
  
  // 위의 코드는 사실 좋지 않음



  // 이 2개의 코드는 사실상 다름
  int *array = (int *)malloc(4 * sizeof(int)); // 포인터 변수이기 때문에 언제든 바꿀 수 있다.
  int array[4]; // 배열을 선언할 경우, 첫 번째 변수가 고정되어 불변이므로, 값을 바꿀 수가 없다.
}