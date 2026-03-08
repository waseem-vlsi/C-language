#include <stdio.h>
#include <math.h>

void distance(int *x1, int *y1, int *x2, int *y2, float *distance_bw_points);
void area_of_triangle(int *x1, int *y1, int *x2, int *y2, int *x3, int *y3, float *area);
void equation(int *x1, int *y1, int *x2, int *y2, int *x3, int *y3, int *x ,int*y ,float *p , float *q, float *r );

int main()
{
    int x1,x2,x3,y1,y2,y3,x,y;
    float distance_bw_points, area;
    float p,q,r;
     printf("Enter the values of (x,y): ");
    scanf("%d %d", &x,&y);
    printf("Enter the values of (x1,y1): ");
    scanf("%d %d", &x1,&y1);

    printf("Enter the values of (x2,y2): ");
    scanf("%d %d", &x2,&y2);

    printf("Enter the values of (x3,y3): ");
    scanf("%d %d", &x3,&y3);

    distance(&x1,&y1,&x2,&y2,&distance_bw_points);
    printf("Distance between (x1,y1) & (x2,y2) is %f\n",distance_bw_points);

    area_of_triangle(&x1,&y1,&x2,&y2,&x3,&y3,&area);
    printf("Area of triangle formed by (x1,y1),(x2,y2) & (x3,y3) is %f\n",area);
    
    equation(&x1,&y1,&x2,&y2,&x3,&y3,&x,&y,&p,&q,&r);
    printf("The values of p,q,r respectively are : %f, %f, %f\n", p,q,r);
    if((p>=0 && q>=0 && r>=0) || (p<=0 && q<=0 && r<=0))
{
    printf("Point lies inside the triangle\n");
}
else
{
    printf("Point lies outside the triangle\n");
}

    return 0;
}

void distance(int *x1, int *y1, int *x2, int *y2, float *distance_bw_points)
{
    *distance_bw_points = sqrt((*x2 - *x1)*(*x2 - *x1) + (*y2 - *y1)*(*y2 - *y1));
}

void area_of_triangle(int *x1, int *y1, int *x2, int *y2, int *x3, int *y3, float *area)
{
    *area = 0.5 * fabs((*x1)*((*y2)-(*y3)) + (*x2)*((*y3)-(*y1)) + (*x3)*((*y1)-(*y2)));
}

void equation(int *x1, int *y1, int *x2, int *y2, int *x3, int *y3, int *x ,int*y,float*p , float *q, float *r)
{
    *p = ((*x) - (*x1))*((*y2) - (*y1)) - ((*y) - (*y1))*((*x2) - (*x1));
    *q = ((*x) - (*x2))*((*y3) - (*y2)) - ((*y) - (*y2))*((*x3) - (*x2));
    *r = ((*x) - (*x3))*((*y1) - (*y3)) - ((*y) - (*y3))*((*x1) - (*x3));
}
