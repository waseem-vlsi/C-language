#include <stdio.h>
int main()
{
    int m1,m2,m3,m4,m5;
    float aggr,pom;
    printf("enter the marks of students in 5 subjects:");
    scanf("%d %d %d %d %d", &m1,&m2,&m3,&m4,&m5);
    aggr = m1+m2+m3+m4+m5;
    pom = aggr/5;
    printf("total marks for each student : %f",aggr );
    printf("percentage of marks for each student : %f",pom );
    return 0;
}
