#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
  int age;
  float weight;
  double height;
  char title[20];

  printf("What's your age?\n");
  scanf("%d", &age);
  
  printf("What's your weight?\n");
  scanf("%f", &weight);

  printf("What's your height?\n");
  scanf("%lf", &height);

  printf("what's your title?\n");
  scanf("%s\n", title);

  switch (age) {
    case 30:
      printf("He is old much\n");
      break;
    default:
      printf("Not yet\n");
      break;
  }

  srand(time(NULL));

  int randInt = rand() % 100 + 1; // 1 ~ 100
  age *= randInt;
  
  printf("age is %d\n",age);
  printf("weight is %.2f\n",weight);
  printf("height is %.2lf\n",height);
  printf("title is %s\n",title);

}