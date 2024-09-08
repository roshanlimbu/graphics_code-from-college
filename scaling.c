#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void main() {
    int x, y, x1, y1, x2, y2;
    int scl_fctr_x, scl_fctr_y;
    int gd = DETECT, gm;

    // Initialize graphics mode
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    // Get coordinates of the triangle from the user
    printf("\t\t\t------------- Scaling -------------\n");
    printf("\n\t\t\t Please enter first coordinate of Triangle (x y): ");
    scanf("%d %d", &x, &y);
    printf("\n\t\t\t Please enter second coordinate of Triangle (x y): ");
    scanf("%d %d", &x1, &y1);
    printf("\n\t\t\t Please enter third coordinate of Triangle (x y): ");
    scanf("%d %d", &x2, &y2);

    // Draw the original triangle
    line(x, y, x1, y1);
    line(x1, y1, x2, y2);
    line(x2, y2, x, y);

    // Get scaling factors from the user
    printf("\n\t\t\t Enter scaling factor for x-axis: ");
    scanf("%d", &scl_fctr_x);
    printf("\n\t\t\t Enter scaling factor for y-axis: ");
    scanf("%d", &scl_fctr_y);

    // Apply scaling transformation
    x = x * scl_fctr_x;
    y = y * scl_fctr_y;
    x1 = x1 * scl_fctr_x;
    y1 = y1 * scl_fctr_y;
    x2 = x2 * scl_fctr_x;
    y2 = y2 * scl_fctr_y;

    // Draw the scaled triangle
    setcolor(RED);  // Use a different color for the scaled triangle
    line(x, y, x1, y1);
    line(x1, y1, x2, y2);
    line(x2, y2, x, y);

    getch();
    closegraph();
}
