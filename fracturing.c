#include <stdio.h>
#include <math.h>

#define PI 3.14159

// Function declarations
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double askforUserInput();

int main(int argc, char **argv) {
    // Call the functions for calculations
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}

double calculateDistance() {
    // Variables for storing coordinates
    double x1, y1, x2, y2;

    // Input for Point #1 coordinates
    printf("Provide coordinates for Point #1 (x1, y1): ");
    x1 = askforUserInput();
    y1 = askforUserInput();
    
    // Input for Point #2 coordinates
    printf("Provide coordinates for Point #2 (x2, y2): ");
    x2 = askforUserInput();
    y2 = askforUserInput();

    // Calculate the distance using the distance formula
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Display the results
    printf("Point #1: x1 = %.2f, y1 = %.2f\n", x1, y1);
    printf("Point #2: x2 = %.2f, y2 = %.2f\n", x2, y2);
    printf("Calculated distance is: %.2f\n", distance);

    return distance;
}

double calculatePerimeter() {
    double x1, y1, x2, y2;

    // Input for Point #1 coordinates
    printf("Provide coordinates for Point #1 (x1, y1): ");
    x1 = askforUserInput();
    y1 = askforUserInput();
    
    // Input for Point #2 coordinates
    printf("Provide coordinates for Point #2 (x2, y2): ");
    x2 = askforUserInput();
    y2 = askforUserInput();

    // Calculate perimeter (assuming a rectangular structure)
    double width = calculateWidth();
    double height = calculateHeight();
    double perimeter = 2 * (width + height);

    // Display the results
    printf("Point #1: x1 = %.2f, y1 = %.2f\n", x1, y1);
    printf("Point #2: x2 = %.2f, y2 = %.2f\n", x2, y2);
    printf("The perimeter is: %.2f\n", perimeter);

    return 3.0; // Difficulty rating on scale 1-5
}

double calculateArea() {
    double x1, y1, x2, y2;

    // Input for Point #1 coordinates
    printf("Provide coordinates for Point #1 (x1, y1): ");
    x1 = askforUserInput();
    y1 = askforUserInput();
    
    // Input for Point #2 coordinates
    printf("Provide coordinates for Point #2 (x2, y2): ");
    x2 = askforUserInput();
    y2 = askforUserInput();

    // Calculate the area assuming a rectangular shape
    double width = calculateWidth();
    double height = calculateHeight();
    double area = width * height;

    // Display the results
    printf("Point #1: x1 = %.2f, y1 = %.2f\n", x1, y1);
    printf("Point #2: x2 = %.2f, y2 = %.2f\n", x2, y2);
    printf("The area is: %.2f\n", area);

    return 2.0; // Difficulty rating on scale 1-5
}

double calculateWidth() {
    // Variables for x-coordinates
    double x1, x2;

    // Input for the x-coordinates
    printf("Enter x1 for Point #1: ");
    x1 = askforUserInput();
    printf("Enter x2 for Point #2: ");
    x2 = askforUserInput();

    // Calculate the width
    double width = fabs(x2 - x1);

    // Display the width
    printf("Width is: %.2f\n", width);

    return width;
}

double calculateHeight() {
    // Variables for y-coordinates
    double y1, y2;

    // Input for the y-coordinates
    printf("Enter y1 for Point #1: ");
    y1 = askforUserInput();
    printf("Enter y2 for Point #2: ");
    y2 = askforUserInput();

    // Calculate the height
    double height = fabs(y2 - y1);

    // Display the height
    printf("Height is: %.2f\n", height);

    return height;
}

double askforUserInput() {
    // Get user input for coordinates
    double input;
    scanf("%lf", &input);
    return input;
}
