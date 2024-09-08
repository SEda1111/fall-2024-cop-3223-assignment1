#include <stdio.h>
#include <math.h>

#define PI 3.14159

// Function prototypes
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double askForUserInput();

int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}

double calculateDistance() {
    double x1, y1, x2, y2;

    // Ask for user input
    printf("Enter coordinates for Point #1 (x1, y1): ");
    x1 = askForUserInput();
    y1 = askForUserInput();
    
    printf("Enter coordinates for Point #2 (x2, y2): ");
    x2 = askForUserInput();
    y2 = askForUserInput();

    // Calculate distance
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Output results
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the two points is %.2f\n", distance);

    return distance;
}

double calculatePerimeter() {
    double width = calculateWidth();
    double height = calculateHeight();
    double perimeter = 2 * (width + height);

    return perimeter; // Just return the computed perimeter
}

double calculateArea() {
    double width = calculateWidth();
    double height = calculateHeight();
    double area = width * height;

    return area; // Just return the computed area
}

double calculateWidth() {
    double x1, x2;

    // Ask for user input
    printf("Enter coordinates for Point #1 (x1): ");
    x1 = askForUserInput();
    
    printf("Enter coordinates for Point #2 (x2): ");
    x2 = askForUserInput();

    // Calculate width
    double width = fabs(x2 - x1);

    // Output results
    printf("Point #1 entered: x1 = %.2f\n", x1);
    printf("Point #2 entered: x2 = %.2f\n", x2);
    printf("The width of the city encompassed by your request is %.2f\n", width);

    return width;
}

double calculateHeight() {
    double y1, y2;

    // Ask for user input
    printf("Enter coordinates for Point #1 (y1): ");
    y1 = askForUserInput();
    
    printf("Enter coordinates for Point #2 (y2): ");
    y2 = askForUserInput();

    // Calculate height
    double height = fabs(y2 - y1);

    // Output results
    printf("Point #1 entered: y1 = %.2f\n", y1);
    printf("Point #2 entered: y2 = %.2f\n", y2);
    printf("The height of the city encompassed by your request is %.2f\n", height);

    return height;
}

double askForUserInput() {
    double input;
    scanf("%lf", &input);
    return input;
}
