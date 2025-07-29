#include<stdio.h>
#include<math.h>
#define PI 3.1416

float wavelength_calculator(int m, float d, float theta)
{
  d = d * 1e-6 ;
  theta = theta * (PI/180);

  float lambda_m = (d * sin(theta)/m);
  float lambda_nm = lambda_m * 1e9;

  return lambda_nm;
}


int main()
{
  int m;
  float d,theta,result;
  char* color;

  printf("Enter The Value of Order \"m\":\n");
  scanf("%d", &m);

  printf("Enter Distance \"d\" (in um):\n");
  scanf("%f",&d);

  printf("Enter The Value of Angle \"theta\" (in degrees):\n");
  scanf("%f", &theta);


  result = wavelength_calculator(m, d, theta);
  printf("Wavelength is : %.2f nm \n",result);


  if(result>=380 && result <450)
     color = "Violate";
   else if (result>=450 && result <485)
     color = "Blue";
   else if (result>=485 && result <500)
     color = "Cyen";
   else if (result>=500 && result <565)
     color = "Green";
   else if (result>=565 && result <590)
     color = "Yellow";
   else if (result>=590 && result <625)
     color = "Orange";
   else if (result>=625 && result <750)
    color = "Red";
   else
     color = "Invisible Light";

  printf("color :%s\n", color);
   return 0 ;
}
