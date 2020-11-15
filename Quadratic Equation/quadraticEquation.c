#include <stdio.h>
#include <math.h>

int main()
{
  int a, b, c, d;
  double root1, root2;
      
  do
  {
    printf("\nCoefficients: ");
    scanf("%d", &a);
    if(a == 0)  //Terminates if input is 0
      return 0;
    scanf("%d", &b);
    scanf("%d", &c);
          
    d = pow(b, b) - 4*a*c;

    if (d < 0) //Complex roots
      printf("COMPLEX");
    else //Real roots
    {
      root1 = (-b + sqrt(d))/(2*a);
      root2 = (-b - sqrt(d))/(2*a);

      printf("%.4lf, %.4lf", root1, root2);    
    }
  }
  while(a != 0);
}