#include <stdio.h>



int main() {
    int x,y,z ;
    float Average;
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    Average = (x+y+z)/3;
    printf("Average: %.2f", Average );
}