  /*Angle Of Triangle By Side size*/
  #include<stdio.h>
  #include<math.h>
  int main()
  {
    float a , b , c , sp , area ;

    printf("Enter first side of Triangle :\n");
    scanf("%f",&a);
    printf("Enter second side of Triangle :\n");
    scanf("%f",&b);
    printf("Enter third side of Triangle :\n");
    scanf("%f",&c);

  sp = (a+b+c)/2;

  area = sqrt(sp*(sp-a)*(sp-b)*(sp-c));

  printf("Area of Triangle = %f\n",area);

  return 0;

}