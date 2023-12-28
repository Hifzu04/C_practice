#include <stdio.h>
int main()
{
    printf("Enter the cubeside , cylinderHeight, cylinder radius , circleRadius respctively \n");
    float cubeside, cylinderHeight, cylinderRadius, circleRadius;
    scanf("%f"
          "%f"
          "%f"
          "%f",
          &cubeside, &cylinderHeight, &cylinderRadius, &circleRadius);
    float volcube =0;
    float volcylinder =0;
    float volSphere = 0;
    volcube = cubeside * cubeside * cubeside;
    volcylinder = 3.14 * cylinderRadius * cylinderRadius * cylinderHeight;
    volSphere = 4 / 3 * (3.14 * circleRadius * circleRadius * circleRadius);
    printf("vol of cube , cylinder, and sphere is %f , %f , %f  respectivily\n" , volcube, volcylinder ,volSphere  );
    if (volcube < volcylinder)
    {
        if (volcube < volSphere)
        {
            float tsa_of_cube = 0;
            tsa_of_cube = 6 * cubeside * cubeside;
            printf("vol of cube is smallest and its tsa is %f" ,tsa_of_cube );
        }
        else
        {
            float tsa_of_sphere = 0;
            tsa_of_sphere = 4 * 3.14 * circleRadius * circleRadius;
            printf("vol of sphere is smallest and its tsa is %f" , tsa_of_sphere);
        }
    }
    else
    {
        if (volSphere > volcylinder)
        {
            float tsa_of_cylinder;
            tsa_of_cylinder = 2 * 3.14 * cylinderRadius * cylinderHeight;
            printf("vol of cylinder is smallest and its tsa is %f" , tsa_of_cylinder);
        }
    }
    return 0;
}