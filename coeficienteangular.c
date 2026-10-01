#include <stdio.h>
#include <math.h>
//calcular inclinação de uma reta m por dois pontos p e q

typedef struct {
    float x;
    float y;
} ponto;

int main(){
    ponto p, q;
    float a;
    scanf("%f, %f", &p.x, &p.y);
    scanf("%f, %f", &q.x, &q.y);
    a = (q.y-p.y)/(q.x-p.x);
    printf("Θ = %.4f", atan(a));
}
