#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"
#include <ctype.h>

int main(void)
{
  char str1 = 'A';
  char str2 = 'Z';
  char str3 = ' ';


  printf("%c es alfabetico? %d\n", str1, ft_isalpha(str1));
  printf("%c es alfabetico? %d\n", str2, ft_isalpha(str2));
  printf("%c es alfabetico? %d\n", str3, ft_isalpha(str3));

  printf("%c es alfabetico? %d\n", str1, isalpha(str1));
  printf("%c es alfabetico? %d\n", str2, isalpha(str2));
  printf("%c es alfabetico? %d\n", str3, isalpha(str3));

  return (0);
}