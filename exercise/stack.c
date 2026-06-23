#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFFER_SIZE 100

int push(char arr[], int *size, char str);
int pop(char arr[], int *size);

int main(void) 
{
  int size = 0;
  char arr[BUFFER_SIZE];  

  push(arr, &size, 'a');
  push(arr, &size, 'b');
  push(arr, &size, 'c');


  for(int i = 0; i < strlen(arr); i++)
  {
    printf("%c\n", arr[i]);
  }


  pop(arr, &size);

  for(int i = 0; i < strlen(arr); i++)
  {
    printf("%c\n", arr[i]);
  }

}


int push(char arr[], int *size, char str)
{
  if(*size >= BUFFER_SIZE)
  {
    return 0;
  }

  arr[*size] = str;
  (*size)++;

  return 1;
}

int pop(char arr[], int *size)
{
  if(*size == 0)
  {
    return 0;
  }

  (*size)--;
  arr[*size] = '\0';

  return *size;
}