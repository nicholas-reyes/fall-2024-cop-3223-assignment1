#include <stdio.h>
#include <math.h>
#define PI 3.14159

double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}
// Function to calculate distance between two points
double calculateDistance() {
    double x1, y1, x2, y2;
    printf("Enter coordinates of Point 1 (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter coordinates of Point 2 (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);
    
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The distance between the two points is %.2lf\n", distance);
    return distance;
}
// Function to calculate the perimeter of the circle
double calculatePerimeter() {
    double distance = calculateDistance();
    double perimeter = 2 * PI * (distance / 2); // Perimeter = 2πr, r = distance/2
    printf("The perimeter of the circle is %.2lf\n", perimeter);
    return 4.0; 
}
// Function to calculate the area of the circle
double calculateArea() {
    double distance = calculateDistance(); 
    double area = PI * pow(distance / 2, 2); // Area = πr^2, r = distance/2
    printf("The area of the circle is %.2lf\n", area);
    return 4.0; 
}
// Function to calculate the width
double calculateWidth() {
    double distance = calculateDistance();
    printf("The width of the circle is %.2lf\n", distance);
    return 4.0;
}
// Function to calculate the height
double calculateHeight() {
    double distance = calculateDistance();
    printf("The height of the circle is %.2lf\n", distance);
    return 4.0;
}
