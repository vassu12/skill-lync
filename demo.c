#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function to calculate the area and perimeter of a rectangle
void calculateRectangle(float length, float width) {
  float area = length * width;
  float perimeter = 2 * (length + width);

  printf("Rectangle:\n");
  printf("Area: %.2f\n", area);
  printf("Perimeter: %.2f\n", perimeter);
}

// Function to calculate the area and perimeter of a circle
void calculateCircle(float radius) {
  float area = M_PI * radius * radius;
  float perimeter = 2 * M_PI * radius;

  printf("Circle:\n");
  printf("Area: %.2f\n", area);
  printf("Perimeter: %.2f\n", perimeter);
}

// Function to calculate the area and perimeter of a square
void calculateSquare(float side) {
  float area = side * side;
  float perimeter = 4 * side;

  printf("Square:\n");
  printf("Area: %.2f\n", area);
  printf("Perimeter: %.2f\n", perimeter);
}

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("Usage: ./myprogram <shape>\n");
    printf("Available shapes: rectangle, circle, square\n");
    return 1;
  }

  char *shape = argv[1];

  if (strcmp(shape, "rectangle") == 0) {
    // Call the rectangle calculation function with appropriate parameters
    calculateRectangle(5.0, 4.0);
  } else if (strcmp(shape, "circle") == 0) {
    // Call the circle calculation function with appropriate parameters
    calculateCircle(3.0);
  } else if (strcmp(shape, "square") == 0) {
    // Call the square calculation function with appropriate parameters
    calculateSquare(5.0);
  } else {
    printf("Invalid shape specified.\n");
    return 1;
  }

  return 0;
}

