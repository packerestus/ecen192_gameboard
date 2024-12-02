#include "yboard.h"
#include <time.h>
#include <stdlib.h>

void game_1();
void game_2();
void game_3();
void game_4();

int main()
{
  // Code for main game controls
  while (1)
  {
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
}

void game_1()
{
  // Add your code here for Part 1
}

void game_2()
{
  // Add your code here for Part 2
}

void game_3() {
  Yboard.set_led_brightness(50);
  Yboard.set_led_color(1, 0, 0, 256);
  Yboard.set_led_color(13, 256, 0, 0);
  delay(250);
  Yboard.set_all_leds_color(0, 0, 0);
  // Set random timer (at least 2 seconds with variation of 2 seconds)
  srand(time(NULL));
  int timer = rand() % 2000 + 2000;
  delay(timer);
  // Set color to winner
  while (1) {
    if (Yboard.get_button(1) == 0) {
      Yboard.set_all_leds_color(0, 0, 256);
      delay(2000);
      break;
    } else if (Yboard.get_button(2) == 0) {
      delay(2000);
      Yboard.set_all_leds_color(256, 0, 0);
      break;
    }
  }

  Yboard.set_all_leds_color(256, 256, 256);
  // Play again?
  while (1) {
    if (Yboard.get_button(1) == 1) {
      game_4();
    } else if (Yboard.get_button(2) == 1) {
      Yboard.set_all_leds_color(0, 0, 0);
      main();
    }
  }
}

void game_4()
{
  char exp = 7;
  char rot = 0;
  int p_1 = 0;
  int p_2 = 0;
  int count = 0;
  int x = 0;
  int timer = 0;
  // Write a buzzer count down for the code
  while (timer < 1000)
  {
    if (Yboard.get_button(1) == 0 && Yboard.get_button(2) == 0)
    {
      timer++;
      x++;
      if (x > 20)
      {
        x = 1;
      }
      Yboard.set_all_leds_color(0, 0, 0);
      Yboard.set_led_color(x, 250, 0, 0);
    }
    else if (((Yboard.get_button(1) == 1) && (Yboard.get_button(2) == 0)) || ((Yboard.get_button(2) == 1) && (Yboard.get_button(1) == 0)))
    {
      timer++;
      x--;
      if (x < 1)
      {
        x = 20;
      }
      Yboard.set_all_leds_color(0, 0, 0);
      Yboard.set_led_color(x, 0, 250, 0);
    }
    else if ((Yboard.get_button(1) == 1) && (Yboard.get_button(2) == 1))
    {
      timer++;
      x++;
      if (x > 20)
      {
        x = 1;
      }
      Yboard.set_all_leds_color(0, 0, 0);
      Yboard.set_led_color(x, 250, 0, 0);
    }
    if (x > 6 && x < 17)
    {
      p_1++;
    }
    else
    {
      p_2++;
    }
    // Scoring and Disengagement
    Yboard.set_all_leds_color(0, 255, 0);
    if (p_1 >= 50)
    {
      Yboard.set_led_color(7, 255, 0, 0);
    }
    if (p_1 >= 100)
    {
      Yboard.set_led_color(8, 255, 0, 0);
    }
    if (p_1 >= 150)
    {
      Yboard.set_led_color(9, 255, 0, 0);
    }
    if (p_1 >= 200)
    {
      Yboard.set_led_color(10, 255, 0, 0);
    }
    if (p_1 >= 250)
    {
      Yboard.set_led_color(11, 255, 0, 0);
    }
    if (p_1 >= 300)
    {
      Yboard.set_led_color(12, 255, 0, 0);
    }
    if (p_1 >= 350)
    {
      Yboard.set_led_color(13, 255, 0, 0);
    }
    if (p_1 >= 400)
    {
      Yboard.set_led_color(14, 255, 0, 0);
    }
    if (p_1 >= 450)
    {
      Yboard.set_led_color(15, 255, 0, 0);
    }
    if (p_1 >= 500)
    {
      Yboard.set_led_color(16, 255, 0, 0);
    }
    if (p_1 >= 550)
    {
      Yboard.set_led_color(17, 255, 0, 0);
    }
    if (p_1 >= 600)
    {
      Yboard.set_led_color(18, 255, 0, 0);
    }
    if (p_1 >= 650)
    {
      Yboard.set_led_color(19, 255, 0, 0);
    }
    if (p_1 >= 700)
    {
      Yboard.set_led_color(20, 255, 0, 0);
    }
    if (p_1 >= 750)
    {
      Yboard.set_led_color(1, 255, 0, 0);
    }
    if (p_1 >= 800)
    {
      Yboard.set_led_color(2, 255, 0, 0);
    }
    if (p_1 >= 850)
    {
      Yboard.set_led_color(3, 255, 0, 0);
    }
    if (p_1 >= 900)
    {
      Yboard.set_led_color(4, 255, 0, 0);
    }
    if (p_1 >= 950)
    {
      Yboard.set_led_color(5, 255, 0, 0);
    }
    if (p_1 >= 1000)
    {
      Yboard.set_led_color(6, 255, 0, 0);
    }
    while (1)
    {
      if (Yboard.get_button(1) == 1)
      {
        game_4();
      }
      else if (Yboard.get_button(2) == 1)
      {
        Yboard.set_all_leds_color(0, 0, 0);
        main();
      }
    }
  }
}