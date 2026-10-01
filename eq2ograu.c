#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, d;
    FILE *fp = fopen("abc.txt", "r");
    if (fp == NULL)
        return -1;
    fscanf(fp, "%f %f %f", &a, &b, &c);
    d = pow(b, 2) - 4*a*c;
    if(d == 0){
        printf("x = %.2f", -b/2*a);
    }
    if(d < 0){
        printf("x não é um número real.");
    }
    else if(d > 0){
        printf("x = %.2f ou x = %.2f", (-b+(pow(d, 0.5)))/2*a, (-b-(pow(d, 0.5)))/2*a);
    }
    fclose(fp);
}
