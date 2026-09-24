#include <stdio.h>

struct myStructure
{
  int myNum;
  char myLetter;
};

int main() 
{
  struct myStructure s1;
  struct myStructure s2;

  s1.myNum = 07;
  s1.myLetter = 'K';

  s2.myNum = 11;
  s2.myLetter = 'E';

  printf("S1 number: %d\n", s1.myNum);
  printf("S1 letter: %c\n", s1.myLetter);

  printf("S2 number: %d\n", s2.myNum);
  printf("S2 letter: %c\n", s2.myLetter);

  return 0;
}