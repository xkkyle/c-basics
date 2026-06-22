#include <stdio.h>

#define MAX 10000

int main(void) 
{

  char buffer[MAX];


  int num[6] = { 0, 0, 0, 0, 0, 0 };
  int bonus = 0;
  char str[MAX];
  char str2[MAX];

  FILE *file = fopen("test2.txt", "r");

  if(file == NULL) 
  {
    printf("파일 열기 실패");
    return 1;
  }

  fscanf(file, "%s %d %d %d %d %d %d", str, &num[0], &num[1], &num[2], &num[3], &num[4], &num[5]);

  fprintf(file, "%s %d %d %d %d %d %d\n", "추첨번호", 1, 2, 3, 4, 5, 6);
  fprintf(file, "%s %d\n", "보너스번호", 7);



  fclose(file);
}