#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
  float weight;
  float height;
  float bmi;

  printf("Please, enter your weight in kg\n");
  scanf("%f", &weight);

  printf("Please, enter your height in cm\n");
  scanf("%f", &height);

  bmi = weight / (height / 100 * height / 100);

  printf("Your BMI is %.2f and ", bmi);

  if (bmi < 16)
  {
    printf("You're fucked up, kid...");
  }
  else if (bmi <= 18.5)
  {
    printf("You must eat more!");
  }
  else if (bmi <= 25)
  {
    printf("it's alright ;-)");
  }
  else if (bmi <= 30)
  {
    printf("You should stop eating McDonalds!");
  }
  else if (bmi <= 35)
  {
    printf("she's not gonna date you...");
  }
  else if (bmi <= 40)
  {
    printf("You smell...");
  }
  else if (bmi > 40)
  {
    printf("You must stay far from us, fat faggot!");
  }
 printf("\n");


  return (0);
}
