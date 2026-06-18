#include <stdio.h>

// 경찰관이 범죄자의 정보를 압수(조서 작성)
// 이름, 나이 ,몸무게, 키, 범죄명

int main(void) {

  char name[3];
  int age;
  float weight;
  double height;
  char crime[256];


  // scanf에는 \n (줄바꿈) 넣지 않기
  // printf에는 넣어도 됌
  printf("이름이 뭐예요? ");
  scanf("%s", name, sizeof(name));

  printf("몇 살이예요? ");
  scanf("%d", &age);

  printf("몸무게는? ");
  scanf("%f", &weight);

  printf("키는? ");
  scanf("%lf", &height);
  
  printf("범죄명은? ");
  scanf("%s", crime, sizeof(crime));


  printf("\n\n -- Crime Info -- \n\n");
  printf("이름 : %s\n", name);
  printf("나이 : %d\n", age);
  printf("몸무게 : %.2f\n", weight);
  printf("키 : %.1lf\n", height);
  printf("범죄명 : %s\n", crime);
  return 0;
}