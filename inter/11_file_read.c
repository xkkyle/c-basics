#include <stdio.h>

// 파일로부터 읽기
void main(void)
{
  FILE *fp = fopen("input.txt", "r");

  char buffer[100];

  while(fscanf(fp, "%s", buffer) != EOF) 
  {
    printf("%s", buffer);
  }

  fclose(fp);
}


