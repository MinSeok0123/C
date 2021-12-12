#include <stdio.h>

int reverse(int a, int temp) 
{
  if(a == 0)
    return temp;
  return reverse(a / 10, (temp * 10) + a % 10);
}

int main()
{
   int n, num, count = 0;
   scanf("%d", &n);
   int nums[n];
   
   for(int i = 0; i < n; i++)
   {
      scanf("%d", &nums[i]);
      num = reverse(nums[i], 0);
      nums[i] = num;
   }
   
   for(int i = 0; i < n; i++)
   {
      for(int l = 1; l <= nums[i]; l++)
      {
         if(nums[i] % l == 0)
            count++;
      }
      if(count == 2)
         printf("%d ", nums[i]);
      count = 0;
   }
   return 0;
}
