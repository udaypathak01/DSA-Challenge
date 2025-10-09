#include <iostream>
using namespace std;
int main()
{
  int x = 144, start = 0, end = x, ans = -1;
  while (start <= end)
  {
    int mid = (start + end) / 2;
    if ((mid * mid) == x)
    {
      cout << mid;
      return 0;
    }
    else if ((mid * mid) < x)
    {
      ans = mid;
      start = mid + 1;
    }
    else if ((mid * mid) > x)
    {
      end = mid - 1;
    }
  }
  cout<<ans;
}