#include <stdio.h>
#include <string.h>


int main(){
  const int count = 0;
  int subway_arr[3];
  int length = sizeof(subway_arr) / sizeof(subway_arr[0]);

  subway_arr[0] = 1;
  subway_arr[1] = 2;
  subway_arr[2] = 3;


  for(int i = 0; i < length; i++){
    printf("지하철 %d호차에 %d 명이 타고 있어요.\n", i+1, subway_arr[i]);
  }

  // 배열의 값 설정 방법
  int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; // 값을 초기화 하지 않으면 -858993460 (dummy 값)

  for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++){
    printf("%d\n", i);
  }

  // 일부값만 설정하는 경우
  int arr2[10] = { 1, 2 };
    for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++){
    printf("%d\n", i); // 1 2 0 0 0 0 0 0 0 0 0 -> 자동으로 0으로 초기화
  }


  // 값 초기화를 하고, 굳이 배열의 길이를 설정하지 않는 경우
  int newArr = { 1, 2 }; // == arr[2]


  float float_arr[5] = { 1.0f, 2.0f, 3.0f };
  for(int i = 0; i < 5; i++){
    printf("%.2f\n", float_arr[i]);
  }


  // ⭐️ 문자 vs 문자열
  char smallChar = 'A';
  printf("%c\n", smallChar);

  // 문자열 끝에는 "끝"을 의미하는 NULL 문자 '\0' 이 포함되어야함
  char str[7] = "AAAAAA"; // [A] [A] [A] [A] [A] [A]
  printf("%s\n", str);

  char str2[] = "coding";
  printf("%s\n", str2);
  printf("%d\n", sizeof(str2)); // NULL 문자 \0이 들어가기 때문에 길이는 7

  for(int i = 0; i < sizeof(str); i++){
    printf("%c\n", str[i]); // c o d i n g \0
  }

  char kor[] = "나도코딩";
  printf("%s\n", kor);
  printf("%d\n", sizeof(kor));

  // 한 글자 : 영어는 1byte, 한글은 3byte(UTF-8) / 2byte(windows CP949 / EUC-KR)
  // char 크기는 1byte

  char c_array[7] = {'c', 'o', 'd', 'i', 'n', 'g', '\0'};
  printf("%s\n", c_array);

  // 남는 공간이 있는 경우 문자열 끝이 자동으로 들어감
  char c_array2[10] = {'c', 'o', 'd', 'i', 'n', 'g'};
  printf("%s\n", c_array2);
  
  // sizeof(c_array2)가 문자열의 길이가 아닌 배열의 크기를 의미한다.
  // 문자열의 실제 글자수를 구하려면, "coding"의 경우
  // #include <string.h>
  // printf("%zu\n", strlen(str2)) // 6
  for(int i = 0; i < sizeof(c_array2); i++) {
    printf("%c\n", c_array2[i]);
  }

  printf("this c_array length is %zu\n", strlen(c_array2));

  for(int i = 0; i < sizeof(c_array2); i++) {
    printf("%d\n", c_array2[i]); 
    // ASCII 코드 결과값이 나온다 -> 99 111 100 105 110 103
    // NULL 문자는 0
  }

  char name[256];
  printf("이름을 입력하세요 : ");
  scanf("%s", name, sizeof(name));
  printf("%s\n", name);
  

  printf("hello %c\n", 'a'); // a
  printf("hello %d\n", 'a'); // 97

  printf("hello %c\n", 'A'); // A
  printf("hello %d\n", '1A'); // 65

  printf("hello %c\n", '1'); // 1
  printf("hello %d\n", '1'); // 49

  // 0 ~ 127 사이의 아스키코드 정수값에 해당하는 문자 확인
  // for (int i = 0; i < 128; i++){
  //   printf("아스키코드 정수 %d : %c\n", i, i);
  // }

  return 0;
}



