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
  char exp = 1;
  char rot = 0;
  int p_1 = 0;
  int p_2 = 0;
  int count = 0;
  // Write a buzzer count down for the code
  while (count < 100000)
  {

    switch (exp)
    {
    case 1:
      Yboard.set_led_color(1, 255, 255, 255);
      delay(50);
      Yboard.set_led_color(1, 0, 0, 0);
      p_2++;
      break;

    case 2:
      Yboard.set_led_color(2, 255, 255, 255);
      delay(50);
      Yboard.set_led_color(2, 0, 0, 0);
      p_2++;
      break;

    case 3:
      Yboard.set_led_color(3, 255, 255, 255);
      delay(50);
      Yboard.set_led_color(3, 0, 0, 0);
      p_2++;
      break;

    case 4:
      Yboard.set_led_color(4, 255, 255, 255);
      delay(50);
      Yboard.set_led_color(4, 0, 0, 0);
      p_2++;
      break;

    case 5:
      Yboard.set_led_color(5, 255, 255, 255);
      delay(50);
      Yboard.set_led_color(5, 0, 0, 0);
      p_2++;
      break;

    case 6:
      Yboard.set_led_color(6, 255, 255, 255);
      delay(50);
      Yboard.set_led_color(6, 0, 0, 0);
      p_2++;
      break;

    case 7:
      Yboard.set_led_color(7, 255, 255, 255);
      delay(50);
      Yboard.set_led_color(7, 0, 0, 0);
      p_2++;
      break;

    case 8:
      Yboard.set_led_color(8, 255, 255, 255);
      delay(50);
      Yboard.set_led_color(8, 0, 0, 0);
      p_2++;
      break;

    case 9:
      Yboard.set_led_color(9, 255, 255, 255);
      delay(50);
      Yboard.set_led_color(9, 0, 0, 0);
      p_2++;
      break;

    case 10:
      Yboard.set_led_color(10, 255, 255, 255);
      delay(50);
      Yboard.set_led_color(10, 0, 0, 0);
      p_2++;
      break;

    case 11:
      Yboard.set_led_color(11, 255, 255, 255);
      delay(50);
      Yboard.set_led_color(11, 0, 0, 0);
      p_1++;
      break;

    case 12:
      Yboard.set_led_color(12, 255, 255, 255);
      delay(50);
      Yboard.set_led_color(12, 0, 0, 0);
      p_1++;
      break;

    case 13:
      Yboard.set_led_color(13, 255, 255, 255);
      delay(50);
      Yboard.set_led_color(13, 0, 0, 0);
      p_1++;
      break;

    case 14:
      Yboard.set_led_color(14, 255, 255, 255);
      delay(50);
      Yboard.set_led_color(14, 0, 0, 0);
      p_1++;
      break;

    case 15:
      Yboard.set_led_color(15, 255, 255, 255);
      delay(50);
      Yboard.set_led_color(15, 0, 0, 0);
      p_1++;
      break;

    case 16:
      Yboard.set_led_color(16, 255, 255, 255);
      delay(50);
      Yboard.set_led_color(16, 0, 0, 0);
      p_1++;
      break;

    case 17:
      Yboard.set_led_color(17, 255, 255, 255);
      delay(50);
      Yboard.set_led_color(17, 0, 0, 0);
      break;

    case 18:
      Yboard.set_led_color(18, 255, 255, 255);
      delay(50);
      Yboard.set_led_color(18, 0, 0, 0);
      p_1++;
      break;

    case 19:
      Yboard.set_led_color(19, 255, 255, 255);
      delay(50);
      Yboard.set_led_color(19, 0, 0, 0);
      p_1++;
      break;

    case 20:
      Yboard.set_led_color(20, 255, 255, 255);
      delay(50);
      Yboard.set_led_color(20, 0, 0, 0);
      p_1++;
      break;

    default:
      break;
    }
    if (rot == 0)
    {
      exp++;
      if (exp > 20)
      {
        exp = 1;
      }
    }
    else
    {
      exp--;
      if (exp < 1)
      {
        exp = 20;
      }
    }
    if ((Yboard.get_button(1) == 0) || (Yboard.get_button(2) == 0))
    {
      if (rot = 0)
      {
        rot = 1;
      }
      else
      {
        rot = 0;
      }
    }
    count++;
  }
  // This section below this line displays the score and provides an oppurtunity to restart the game.
}
