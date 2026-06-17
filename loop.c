#include <stdio.h>


int main(void) {
  printf("Hello World\n");

  // i++, ++i
  int b = 1;
  printf("%d\n", b++);
  printf("%d\n", ++b);
  printf("%d\n", b);

  // for loop
  for(int i = 0; i <= 10; i++){
    printf("%d\n", i);
  };

  // while
  int i = 1;
  while(i <= 10){
    printf("Hello World %d\n", i++);
    
    if(i == 5) {
      break;
    }
  }

  // do - while
  int j = 1;
  do{
    printf("Hello it's %d\n", j++);
  } while(j <= 10);


  // double loop
  for(int i = 1; i <= 9; i++){
    printf("\n\n-- %d 단 계산 --\n", i);
    for(int j = 1; j <= 9; j++){
      printf("%d x %d = %d\n", i, j, i * j);
    }
  }

  for(int i = 0; i < 5; i++){
    printf("\n");
    for(int j = 0; j <= i; j++){
      printf("*");
    }

    printf("\n");
    printf("\n");
  }

  for(int i = 0; i < 5; i++) {
    
    for(int j = i; j < 5 - 1; j++) {
      printf("S");
    }

    for(int k = 0; k <= i; k++){
      printf("*");
    }
    
    printf("\n");
  }

  return 0;
};

