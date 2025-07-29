#include <stdio.h>
#include <math.h>
#define PI 3.1416

int main()
{
    int m1 = 3;
    double lambda1 = 530e-9;
    double theta1_deg = 65.0;
    double theta1_rad = theta1_deg * PI/180.0;
    int m2 = 2;
    double lambda2 = 700e-9;

    double d = (m1 * lambda1) / sin(theta1_rad);
    double sin_theta2 = (m2 * lambda2) / d;

    if (sin_theta2 > 1.0)
    {
        printf("The angle for second order red light is not possible\n");
    }
    else
    {
        double theta2_rad = asin(sin_theta2);
        double theta2_deg = theta2_rad * 180.0 / PI;
        printf("The angle for second order red light: %.2lf degree\n", theta2_deg);
    }

    return 0;
}
