#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 100

int read_line(char str[], int limit);

int main(void) 
{
  char buffer[BUFFER_SIZE];

  // c 언어는 다양한 표준 입력 함수를 제공한다. (모두 조금씩 다르다.)
  // scanf("%s", buffer)
  // gets()
  // fgets(buffer, BUFFER_SIZE, stdin)

  while(1)
  {
    // #1

    // printf("$ ");
    // scanf("%s", buffer); // 공백을 기준으로 다음줄로 넘겨버리는 문제
    // printf("%s:%d\n", buffer, strlen(buffer));

    // #2 -> this program use gets(), which is unsafe
    // 안전하지 않는 이유
    // - 컴파일러에 따라 지원하지 않는 상황
    // - buffer 바이트 수를 작게 했는데, buffer 사이즈를 초과하여 길게 문자를 출력하는 경우 문제 발생

    // printf("$ ");
    // gets(buffer); // 줄바꿈문자가 나올 때까지 읽어 리턴
    // printf("%s:%d\n", buffer, strlen(buffer));

    // #3 -> 여전히 문제
    // printf("$ ");
    // fgets(buffer, BUFFER_SIZE, stdin); // 키보드를 표준 입력 파일이라고도 부른다. -> 표준 입력 파일 = stdin
    // 엔터키를 눌러 줄바꿈 현상의 문제(\n = new line character 존재)가 발생하기 때문에
    // \0 = NULL 문자를 제공
    // buffer[strlen(buffer) - 1] = '\0';
    // printf("%s:%d\n", buffer, strlen(buffer));


    // #4 -> read_line 함수 활용
    printf("$ ");
    int len = read_line(buffer, BUFFER_SIZE);
    printf("%s:%d\n", buffer, len);
  }

  return 0;
}

// 라인 단위 입력 function
// str[] 의 사이즈를 = limit
int read_line(char str[], int limit) 
{
  int ch, i = 0;

  // getchar - 문자 단위로 한 글자씩 입력하는 함수
  // - int 타입을 반환한다.
  while ((ch == getchar()) != '\n')
  {
    if(i < limit)
    {
      str[i++] = ch; 
    }  
  }

  str[i] = '\0';
  return i;
}