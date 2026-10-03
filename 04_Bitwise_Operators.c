#include <stdio.h>
void calculate_the_maximum(int n, int k)
{
 int max_and = 0;
 int max_or = 0;
 int max_xor = 0;
 for (int i = 1; i <= n; i++)
 {
 for (int j = i + 1; j <= n; j++)
 {
 int and_value = i & j;
 int or_value = i | j;
 int xor_value = i ^ j;
 if (and_value < k && and_value > max_and)
 max_and = and_value;
 if (or_value < k && or_value > max_or)
 max_or = or_value;
 if (xor_value < k && xor_value > max_xor)
 max_xor = xor_value;
 }
 }
 printf("%d\n", max_and);
 printf("%d\n", max_or);
 printf("%d\n", max_xor);
}
int main()
{
 int n, k;
 scanf("%d %d", &n, &k);
 calculate_the_maximum(n, k);
 return 0;
}
