#include <stdio.h>
#include <math.h>

void distance(int *x1, int *y1, int *x2, int *y2, float *distance_bw_points);
void area_of_triangle(int *x1, int *y1, int *x2, int *y2, int *x3, int *y3, float *area);

int main()
{
    int x1,x2,x3,y1,y2,y3;
    float distance_bw_points, area;

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
