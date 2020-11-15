#include <stdio.h>
#include <math.h>

void quadraticEq(double root1, double root2, int a, int b, int c, int d)
{
  d = pow(b, b) - 4*a*c;

  //Complex roots
  if (d < 0) 
    printf("COMPLEX");

  //Real roots
  else 
  {
    root1 = (-b + sqrt(d))/(2*a);
    root2 = (-b - sqrt(d))/(2*a);   

    printf("%.4lf, %.4lf", root1, root2);
  }
}

int main()
{
  int a, b, c, d;
  double root1, root2;
      
  do
  {
    printf("\nCoefficients: ");
    scanf("%d", &a);

    //Terminates if input is 0
    if(a == 0)  
      return 0;
    scanf("%d", &b);
    scanf("%d", &c);
          
    quadraticEq(root1, root2, a, b, c, d);
  }
  while(a != 0);

  return 0;
}
