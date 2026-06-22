#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct {
  char symbol;
  char *customer;

  struct Calculator *CalculatorInfo;
} Calculator;


#define MAX 10000

int main(int) {

  int n = 0;
  
  int tmp;
  int sum = 0;

  
  Calculator calc_info = {'+', 'Hyde'};

  Calculator calcs = {'*', 'Nonark'};
  calcs.CalculatorInfo = &calc_info;

  while(n < 4 && scanf("%d", &tmp) != EOF) 
  {
    sum += tmp;
    n++;
  }

  printf("%d\n", sum);
}