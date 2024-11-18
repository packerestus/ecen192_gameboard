#include "yboard.h"

void game_1();
void game_2();
void game_3();
void game_4();

int main()
{
  // Code for main game controls
  if (Yboard.get_switch(1) == 0)
  {
    if (Yboard.get_switch(2) == 0)
    {
      game_1();
    }
    else
    {
      game_2();
    }
  }
  else
  {
    if (Yboard.get_switch(2) == 0)
    {
      game_3();
    }
    else
    {
      game_4();
    }
  }
}

void game_1()
{
  // Add your code here for Part 1
}

void game_2()
{
  // Add your code here for Part 2
}

void game_3()
{
  // Add your code here for Part 3
}

void game_4()
{
  // Add your code here for Part 4
}
