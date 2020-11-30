#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
  int i = 5, distance = 0, steps = 0, step;
  std::cin >> step;
  while (distance < step)
  {
    distance += i;
    if (distance > step)
    {
      distance -= i;
      i--;
      steps--;
    }
    steps++;
  }
  std::cout << steps;
}
