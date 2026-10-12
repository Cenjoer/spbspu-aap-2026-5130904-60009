#include <iostream>
#include <stdexcept>

int main()
{
  try {
    int max_range = 0;
    int range = 0;
    bool the_first = true;
    int b_num = 0;
    int num;
    while(std::cin >>num)
    {
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
          range = range + 1;
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
    if(std::cin.bad() || (std::cin.fail() && !std::cin.eof()))
    {
      throw std::invalid_argument("invalid input");
    }
    if(range > max_range)
    {
      max_range = range;
    }
    std::cout << max_range << std::endl;
    return 0;
  }
  catch(const std::invalid_argument&)
  {
    return 1;
  }
  catch(...)
  {
    return 1;
  }
}

