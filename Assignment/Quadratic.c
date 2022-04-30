#include <stdio.h>
#include<math.h>
int main()
{
	float a, b, c;
	float root1, root2, imaginary, discriminant;
	
	printf("\n Please Enter values of a, b, c :  \n");
  	scanf("%f%f%f", &a, &b, &c);
  	
  	discriminant = (b * b) - (4 * a *c);
  	
  	switch(discriminant > 0)
  	{
  		case 1:
  			root1 = (-b + sqrt(discriminant) / (2 * a));
  			root2 = (-b - sqrt(discriminant) / (2 * a));
			printf("\n Two Distinct Real Roots Exists: root1 = %.2f\n  root2 = %.2f\n", root1, root2);
			break;
		case 0:
			switch(discriminant < 0)
			{
				case 1: //True
					root1 = root2 = -b / (2 * a);
					imaginary = sqrt(-discriminant) / (2 * a);
					printf("\n Two Distinct Complex Roots Exists: root1 = %.2f+%.2f\n  root2 = %.2f-%.2f\n", root1, imaginary, root2, imaginary);
					break;
				case 0: // False (Discriminant = 0)
					root1 = root2 = -b / (2 * a);
					printf("\n Two Equal and Real Roots Exists: root1 = %.2f\n  root2 = %.2f\n", root1, root2);
					break;
			}
  	}
	
  	return 0;
}


/*The term b2; - 4ac is known as the discriminant of a quadratic equation. It tells the nature of the roots.

    If the discriminant is greater than 0, the roots are real and different.
    If the discriminant is equal to 0, the roots are real and equal.
    If the discriminant is less than 0, the roots are complex and different.
*/