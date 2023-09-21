#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"
#include <ctype.h>

int main(void)
{
  int num1 = '1';
  int num2 = '2';
  int num3 = ' ';


  printf("%c es numero? %d\n", num1, ft_isdigit(num1));
  printf("%c es numero? %d\n", num2, ft_isdigit(num2));
  printf("%c es numero? %d\n", num3, ft_isdigit(num3));

  printf("%c es numero? %d\n", num1, isdigit(num1));
  printf("%c es numero? %d\n", num2, isdigit(num2));
  printf("%c es numero? %d\n", num3, isdigit(num3));

  return (0);
}