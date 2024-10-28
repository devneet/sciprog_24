#include <stdio.h>
#include <math.h>

#define N 12
float TanArr[N+1];
float degtorad(float degarg);
float traprule();

int main(){
    float deg, area;

    // Calculate the area at pts x1, x2, ......... x11 and add them up
    for(int i=0; i<N; i++){
        deg=i*5.0;
        TanArr[i]=tan(degtorad(deg));
        printf("TanArr[%d] = %f\n", i, TanArr[i]);
    }

    area = traprule();

    // Approximated result
    printf("\nTrapezoidal result is: %f\n", area);
    // Actual result
    // Integral of tan is ln(2)
    printf("\nReal result is: %f\n", log(2.0));
    
    return 0;
}

float degtorad(float degarg){
    float pi = 3.1415927;
    return((pi*degarg)/180.0);
}

float traprule(){
    float area;
    int i;
    float a = 0.0, b_deg = 60.0;

    // Sum tan(a) + tan(b) where a and b are in radians
    area=TanArr[0]+TanArr[N];
    printf("\nInitial area (sum at x(0) and x(12)) = %f\n", area);

    for(int i=1; i<N; i++){
        area=area+2*TanArr[i];
    }

    printf("The value of the sum after the loop is: %f\n", area);

    // Multiply area by (pi/3)/2(12) after converting it to radians
    float mult_rad = degtorad(b_deg-a)/(2*N);
    area=mult_rad*area;

    return area;

}