#include<stdio.h>
#include<math.h>

int main()
{
  float w , h , bmi ;
  printf("Enter your weight in KG :\n");
  scanf("%f",&w);
  printf("Enter your hight in Meter :\n");
  scanf("%f",&h);

  bmi = ((w)/(pow(h,2)));

  if(bmi<=15)
  {
    printf("Your Body Mass Index(BMI) is %f And You are in Starvation Category:\n",bmi);
  }
  else if((bmi>15)&&(bmi<=17.5))
  {
    printf("Your Body Mass Index(BMI) is %f And You are in Anorexic Category:\n",bmi);
  }
  else if((bmi>17.5)&&(bmi<=18.5))
  {
    printf("Your Body Mass Index(BMI) is %f And You are in Underweight Category:\n",bmi);
  }
  else if((bmi>18.5)&&(bmi<=24.9))
  {
    printf("Your Body Mass Index(BMI) is %f And You are in Ideal Category:\n",bmi);
  }
  else if((bmi>24.9)&&(bmi<=25.9))
  {
    printf("Your Body Mass Index(BMI) is %f And You are in Overweight Category:\n",bmi);
  }
  else if((bmi>25.9)&&(bmi<=30.9))
  {
    printf("Your Body Mass Index(BMI) is %f And You are in Obese Category:\n",bmi);
  }
  else if(bmi>=40)
  {
    printf("Your Body Mass Index(BMI) is %f And You are in Morbidly Obese Category:\n",bmi);
  }
  return 0;
}