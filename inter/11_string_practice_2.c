#include <stdio.h>
#include <string.h>
#include <ctype.h> // white space 문자인지 검사하는 isspace함수 제공

// 공백 문자인 경우, 직전 문자가 존재하며 공백이 아닌 경우에만 저장한다.
// \n 을 만나면 직전에 저장한 문자가


int main()
{
  char line[80];
  while(1)
  {
    printf("$ ");
    int length = read_line_with_compression(line, 80);
    printf("%s:%d\n", line, length);
  }
}

int read_line_with_compression(char compressed[], int limit)
{
  int ch, i = 0;

  while((ch == getchar()) != '\n')
  {
    // !isspace(ch) === ch != ' '
    // tab도 공백으로 처리할 수 있기 때문에, isspace를 쓰는 것이 나음
    if (i < limit - 1 && (!isspace(ch) || i > 0 && !isspace(compressed[i-1])))
    {
      compressed[i++] = ch;
    }

    
  }

  if(i > 0 && isspace(compressed[i-1])) // 마지막 문자가 공백이면
  {
    i--;
  }

  compressed[i] = '\0';
  return i;
}