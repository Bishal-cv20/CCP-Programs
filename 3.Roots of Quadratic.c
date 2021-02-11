/* WAP to calculate roots of quadratic equation. */
#include<stdio.h>
#include<conio.h>
#include<math.h>

void calculation(float, float, float);

int main()
{
    float a,b,c;
    printf("\nFor equation in form ax^2+bx+c, enter coefficient a,b,c \n");
    scanf("%f %f %f", &a, &b, &c);
    calculation(a,b,c);

    return 0;
}
void calculation(float a, float b, float c)
{
    float root1,root2,disc,realnum,imgnum;
    disc= (b*b)-(4*a*c);

    if (disc>0)             // For real and different roots
        {
        root1= (-b + sqrt(disc))/(2*a);
        root2= (-b - sqrt(disc))/(2*a);
        printf("Root1 = %.2f and Root 2 = %.2f", root1, root2);
        }

    else if (disc==0)       //For real and equal roots
        {
        root1=root2= -b/(2*a);
        printf("Root1 = Root2 = %.2f", root1);
        }
    else                    //For non real roots
        {
        realnum= -b/(2*a);
        imgnum= (sqrt(-disc))/(2*a);
        printf("Root1= %.2f+ %.2f i and Root2= %.2f+ %.2f i", realnum, imgnum, realnum, imgnum);
        }

    getch();
}
