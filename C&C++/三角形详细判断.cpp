#include <stdio.h>
#include <math.h>
int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("not a triangle\n");
        return 0;
    }
    if (a == b && b == c) {
        printf("equilateral triangle\n");
    } 
	else {
        if (a == b || a == c || b == c) {
            printf("isoceles triangle\n");
        } 
		else {
            double temp = a * a + b * b;
            if (fabs(temp - c * c) < 1e-6 || fabs(temp - b * b) < 1e-6 || fabs(temp - a * a) < 1e-6) {
                printf("right-angled triangle\n");
            } 
			else {
                printf("arbitrary triangle\n");
            }
        }
    }

    return 0;
}
