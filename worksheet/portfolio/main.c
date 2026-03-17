#include <stdio.h>
#include <stdbool.h>

#include "shapes.h"

int main(void) {
    Point p1 = makePoint(0.0f, 0.0f);
    Point p2 = makePoint(3.0f, 4.0f);
    Point p3 = makePoint(0.0f, 4.0f);
    Point p4 = makePoint(3.0f, 4.0f);

    Line l = makeLine(p1, p2);
    Triangle t = makeTriangle(p1, p2, p3);

    printf("p1 = (%f, %f)\n", p1.x, p1.y);
    printf("p2 = (%f, %f)\n", p2.x, p2.y);

    printf("Line length = %f\n", lineLength(l));
    printf("Triangle area = %f\n", triangleArea(t));

    printf("samePoint(p2, p4) = %s\n", samePoint(p2, p4) ? "true" : "false");
    printf("pointInLine(p1, l) = %s\n", pointInLine(p1, l) ? "true" : "false");
    printf("pointInLine(p3, l) = %s\n", pointInLine(p3, l) ? "true" : "false");
    printf("pointInTriangle(p2, t) = %s\n", pointInTriangle(p2, t) ? "true" : "false");
    printf("pointInTriangle(makePoint(1.0f, 1.0f), t) = %s\n",
           pointInTriangle(makePoint(1.0f, 1.0f), t) ? "true" : "false");

    return 0;
}