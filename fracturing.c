//********************************************************
// fracturing.c
// Author: Shriyans Komaragiri Sadhasivam
// UCFID: 5666231
// Date: 9/8/24
// Class: COP 3223, Professor Parra
// Purpose: This program calculates different properties of a circle based on the two points the user gives that represent the endpoints of its diameter.
// Input: Coordinates of two points; Point 1 (x1,y1) and Point 2 (x2,y2)
// Output: Coordinates of the points user enters, the distance between them (diameter), the perimeter (circumference), the area of the circle, and the width/height

#include <stdio.h>
#include <math.h>

#define PI 3.14159  // Defining the value of PI

// Function declarations
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

// Main function
int main() {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}

// Function to calculate the distance between two points (diameter)
double calculateDistance() {
    double x1, y1, x2, y2, distance;

    // Get input for two points
    printf("Enter point #1 (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter point #2 (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    // Calculate the distance (diameter)
    distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    // Print the results
    printf("Point #1 entered: x1 = %f; y1 = %f\n", x1, y1);
    printf("Point #2 entered: x2 = %f; y2 = %f\n", x2, y2);
    printf("The distance between the two points is %f\n", distance);
    
    return distance;
}

// Function to calculate the perimeter (circumference) of the circle
double calculatePerimeter() {
    double distance = calculateDistance();
    double radius = distance / 2;
    double perimeter = 2 * PI * radius;

    printf("The perimeter of the circle is %f\n", perimeter);
    return perimeter;
}

// Function to calculate the area of the circle
double calculateArea() {
    double distance = calculateDistance();
    double radius = distance / 2;
    double area = PI * radius * radius;

    printf("The area of the circle is %f\n", area);
    return area;
}

// Function to calculate the width (diameter)
double calculateWidth() {
    double width = calculateDistance();
    printf("The width (diameter) of the circle is %f\n", width);
    return width;
}

// Function to calculate the height (same as diameter here)
double calculateHeight() {
    double height = calculateDistance();
    printf("The height (diameter) of the circle is %f\n", height);
    return height;
}
