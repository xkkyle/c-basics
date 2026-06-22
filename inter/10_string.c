#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 100

// string.h 라이브러리는 문자열을 다루는 다양한 함수를 제공
// - strcpy (문자열 복사)
// - strlen (문자열의 길이)
// - strcat (문자열 합치기)
// - strcmp (문자열 비교)

int main(void) 
{
  char *words[100];
  int n = 0; // number of strings
  char buffer[BUFFER_SIZE];

  // scanf에서는 변수의 주소를 전달해야 하는데, 배열의 이름이 실제 배열의 주소를 저장하고 있는 포인터 변수이다.
  // buffer의 값이 scanf가 읽은 문자열을 저장한 배열의 주소
  // EOF(End of File)는 입력의 끝
  while(n < 4 && scanf("%s", buffer) != EOF)
  {
    // strcpy(str2, str1) 을 쓰려면 str2에 문자열 변수를 할당해야 하는데 현재 없고, words[n]은 단순 포인터 변수이기 때문에 해당사항 없다.
    // words[n] = strcpy(words[n], buffer); 

    words[n] = strdup(buffer); // strdup은 문자열의 복제본은 만들어주는 함수

    n++;
  }

  for(int i = 0; i < 4; i++)
  {
    printf("%s\n", words[i]);
  }

}


// char * strdup(char *s) {
//   char *p;

//   p = (char *)malloc(strlen(s) + 1); // \0 까지 포함해야 하므로 +1

//   if(p != NULL){
//     strcpy(p, s);
//   }

//   return p;
// }