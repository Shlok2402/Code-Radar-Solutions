#include <stdio.h>



int main() {
    int x,y,z ;
    double Average;
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    Average = (x+y+z)/3;
    printf("Average: %.2lf", Average );
}