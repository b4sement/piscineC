int ft_is_prime(int nb)
{
  if (nb <= 1)
    return 0;
  int i = 2;
  while (i <= nb/2)
    {
      if (nb % i == 0)
	return 0;
      ++i;
    }
  return 1;
}
#include <stdio.h>
int main()
{
  int tab[] = {-1,0,2,3,4,5,6,7,8,9};
  int i = 0;
  while (i < 10)
    {
      printf("%d: %d\n",tab[i],ft_is_prime(tab[i]));
      ++i;
    }
  return 0;
}
      
