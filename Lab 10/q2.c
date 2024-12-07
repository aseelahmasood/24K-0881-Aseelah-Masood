#include <stdio.h>
#include <math.h>

struct Point {
    int x;
    int y;
};


double calculateDistance(struct Point p1, struct Point p2) {
    return sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
}


int isInsideRectangle(struct Point p, int x1, int y1, int x2, int y2) {
    return (p.x >= x1 && p.x <= x2 && p.y >= y1 && p.y <= y2);
}

int main() {
    struct Point p1 = {1, 2}, p2 = {4, 6};
    int x1 = 0, y1 = 0, x2 = 5, y2 = 5;

   
    double distance = calculateDistance(p1, p2);
    printf("Distance between points: %.2f\n", distance);

    
    if (isInsideRectangle(p1, x1, y1, x2, y2)) {
        printf("Point (1, 2) is inside the rectangle.\n");
    } else {
        printf("Point (1, 2) is outside the rectangle.\n");
    }

    return 0;
}
