#include <stdio.h>

int main(void) 
{
  int arr[2][5] = { 
    { 1, 2, 3, 4, 5}, 
    { 1, 2, 3 } 
  };

  for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
    for(int j = 0; j < sizeof(arr[0]) / sizeof(arr[0][0]); j++){
      printf("arr[%d][%d] = %d \n", i, j, arr[i][j] );
    }
  }
}