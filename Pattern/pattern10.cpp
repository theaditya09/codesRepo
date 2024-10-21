#include <iostream>
using namespace std;

int* abc (int a)
{
  int b = a, count = 0;
  while (a != 0)
    {
      a = a / 10;
      count++;
    }
    const int temp = count;
    int arr[temp];
  for (int i = temp; i > 0; i--)
    {
      arr[i - 1] = b % 10;
      b = b / 10;
    }
    static int arr2[temp] = arr;
  return arr2;
}


int def (int* arr)
{
for (int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    { 
        cout << arr[i] << ' ';
    }
}


void repeat_char (char a, int n)
{
  for (int i = 0; i < n; i++)
    {
      cout << a;
    }
}


int pwr (int a, int b)
{
  int out = 1;
  for (int i = 1; i <= b; i++)
    {
      out = out * a;
    } return out;
}


int main ()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    {
      arr[i] = pwr (11, i);
    }
  for (int i = 0; i < n; i++)
    {
      repeat_char (' ', n - i - 1);
      def (abc (arr[i]));
    }
  return 0;
}