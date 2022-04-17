#include <stdio.h>
int main()
{
int m, p, e, ph, c, Total;
printf("Maths: " );
scanf("%d",&m);

printf("Physics: " );
scanf("%d",&p );

printf("Chemistry: " );
scanf("%d",&c );

printf("Physical Education: " );
scanf("%d",&ph );

printf("English: " );
scanf("%d",&e );


Total = m+p+e+c+ph;
float Percentage =(float)Total/5;
float cgpa = Percentage / 9.5;

printf("Your total marks is %d\n",Total);
printf("Your percentage is %f\n",Percentage);
printf("Your cgpa is %f\n",cgpa);

return 0;

}
