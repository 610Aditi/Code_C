#include<stdio.h>

int main()
{
    int choice;
    int side, width;
    float c;

    // Menu
    printf("Enter 1 to find the area of a square\n");
    printf("Enter 2 to find the area of a rectangle\n");
    printf("Enter 3 to find the area of a circle\n");
    printf("Enter 4 to find the area of a triangle\n");
    
    scanf("%d", &choice);
    printf("Your choice is: %d\n", choice);

    switch(choice)
    {
        case 1:
            // Square
            printf("Enter the side of the square: ");
            scanf("%d", &side);
            c = side * side;
            printf("Area of square: %.2f\n", c);
            break;

        case 2:
            // Rectangle
            printf("Enter the length and width of the rectangle: ");
            scanf("%d %d", &side, &width);
            c = side * width;
            printf("Area of rectangle: %.2f\n", c);
            break;

        case 3:
            // Circle
            printf("Enter the radius of the circle: ");
            scanf("%d", &side);
            c = 3.14 * side * side;
            printf("Area of circle: %.2f\n", c);
            break;

        case 4:
            // Triangle
            printf("Enter the base and height of the triangle: ");
            scanf("%d %d", &side, &width);
            c = (side * width) / 2.0;
            printf("Area of triangle: %.2f\n", c);
            break;

        default:
            // Invalid input
            printf("Invalid choice\n");
            break;
    }

    return 0;
}

