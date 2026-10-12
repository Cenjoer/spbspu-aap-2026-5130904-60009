#include <iostream>

int main()
{
  bool flag = true;
  int max_range = 0;
  int range = 0;
  bool the_first = true;
  while(flag)
  {
    int b_num = 0;
    int num;
    std::cin >> num;
    if(num == 0)
    {
      break;
    }
    if(the_first)
    {
      b_num = num;
      range = 1;
      max_range = 1;
      the_first = false;
    }
    else
    {
      if(num <= b_num)
      {
        ++range;
      }
      else
      {
        if(max_range < range)
        {
          max_range = range;
        }
        range = 1;  
      }
      b_num = num;
    }

  }
  if(range > max_range)
  {
    max_range = range;
  }
  std::cout << max_range << std::endl;
}
