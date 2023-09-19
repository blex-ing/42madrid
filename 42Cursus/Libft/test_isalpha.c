#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"
#include <ctype.h>

int main(void)
{
  int str1 = 'A';
  int str2 = 'Z';
  int str3 = ' ';


  printf("%c es alfabetico? %d\n", str1, ft_isalpha(str1));
  printf("%c es alfabetico? %d\n", str2, ft_isalpha(str2));
  printf("%c es alfabetico? %d\n", str3, ft_isalpha(str3));

  printf("%c es alfabetico? %d\n", str1, isalpha(str1));
  printf("%c es alfabetico? %d\n", str2, isalpha(str2));
  printf("%c es alfabetico? %d\n", str3, isalpha(str3));

  return (0);
}