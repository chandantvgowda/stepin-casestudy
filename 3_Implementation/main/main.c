/*
  */

#include <avr/io.h>
#include"C1.h"
#include"C2.h"

int main(void)
{
    while(1)
    {
        C1();  //Activity 1
        C2();
    }
  return 0;
}
