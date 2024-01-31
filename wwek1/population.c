#include <cs50.h>
#include <stdio.h>

int main(void)
{
\\Prompt for start size
    int start;
  do
  {
    start=get_int("What's the start size? ");
  }
  while (start<9)
\\prompt for end size
      int end;
  do
  {
    end=get_int("What's the end size? ");
  }
  while (end<start)
\\calculate number of years until we reach thresold
int year=0;
  do
  {
    start = start+(start/3)-(start/4);
    year++;
  }
  while (start<end);

\\print number of years
   printf("Years: %i\n", year);

}