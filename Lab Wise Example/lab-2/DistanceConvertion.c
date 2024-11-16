/*Distance Convertion*/
#include<stdio.h>

int main ()
{
  int x;
  float km , m , cm , inch , ft ;
printf("Which Type of Input Value:\n");
printf("Enter 1 to Meter:\n");
printf("Enter 2 to Kilometer:\n");
printf("Enter 3 to Feet:\n");
printf("Enter 4 to Inch:\n");
printf("Enter 5 to Centimeter:\n");
scanf("%d",&x);

if(x==1)
{
  printf("Enter the Distence in Meter :");
  scanf("%f",&m);
  km = m/1000;
  cm = m*100;
  inch = m*39.37;
  ft = inch/12;
}
else if(x==2)
{
  printf("Enter the Distence in Kilometer :");
  scanf("%f",&km);
  m = km*1000;
  cm = m*100;
  inch = m*39.37;
  ft = inch/12;
}
else if(x==3)
{
  printf("Enter the Distence in Feet :");
  scanf("%f",&ft);
  inch = ft*12;
  m = inch/39.37;
  km = m/1000;
  cm = m*100;
}
else if(x==4)
{
  printf("Enter the Distence in Inches :");
  scanf("%f",&inch);
  m = inch/39.37;
  km = m/1000;
  cm = m*100;
  ft = inch/12;
}
else if(x==5)
{
  printf("Enter the Distence in Centimeter :");
  scanf("%f",&cm);
  m = cm/100;
  km = m/1000;
  inch = m*39.37;
  ft = inch/12;
}
else
{
  printf("Invalide Number PLease Try Again :\n");
}
  printf("Distance in Meters :%f\n",m );
  printf("Distance in Kilometers :%f\n",km );
  printf("Distence in Centimeter :%f\n",cm);
  printf("Distsnce in Inches :%f\n", inch);
  printf("Distance in Feet :%f\n",ft);

  return 0 ;

}
