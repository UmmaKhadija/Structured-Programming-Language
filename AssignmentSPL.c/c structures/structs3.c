#include <stdio.h>

struct myStructure
{
  int myNum;
  char myLetter;
  char myString[30];
};

int main() 
{
  struct myStructure s1 = {15, 'A', "Hello World"};

  printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);

  return 0;
}