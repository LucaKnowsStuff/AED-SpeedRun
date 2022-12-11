#include <math.h>
#include <stdio.h>


static int triangularNumber(int n) 
{
  if(n == 0) 
  {
    return n;
  }
  if(n==1) 
  {
    return n;
  }else 
  {
    return n + triangularNumber(n - 1);
  }
}

int count_in_array( int* array, int length)
{
    int count = 0;
    int i;
    for(i = 0; i < length; ++i)
    {
        if(array[i] != 0)
            ++count;
    }
    return count;
}

int valueinarray(int val, int* arr)
{
    int i;
    for(i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if(arr[i] == val)
            return 1;
    }
    return 0;
}
int main() {
    int arr[5] = {0,0,1,2,3};
    printf("%d" , count_in_array(arr , 5));
    int val = 1;
    if(valueinarray(val , arr) == 1) {
      printf("works");
    }
}