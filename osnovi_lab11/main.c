#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

#include <stdio.h>
#include <math.h>

typedef struct {
    double x1;
    double y1;
    double x2;
    double y2;
    double x3;
    double y3;
    double x4;
    double y4;
} parallelogram;

double calculate_area(parallelogram p);
double calculate_perimeter(parallelogram p);
parallelogram create_parallelogram();

#endif

#include "parallelogram.h"

double calculate_area(parallelogram p) {
    double base = sqrt(pow(p.x2 - p.x1, 2) + pow(p.y2 - p.y1, 2));
    double height = sqrt(pow(p.x3 - p.x2, 2) + pow(p.y3 - p.y2, 2));
    return base * height;
}

double calculate_perimeter(parallelogram p) {
    double side1 = sqrt(pow(p.x2 - p.x1, 2) + pow(p.y2 - p.y1, 2));
    double side2 = sqrt(pow(p.x3 - p.x2, 2) + pow(p.y3 - p.y2, 2));
    double side3 = sqrt(pow(p.x4 - p.x3, 2) + pow(p.y4 - p.y3, 2));
    double side4 = sqrt(pow(p.x1 - p.x4, 2) + pow(p.y1 - p.y4, 2));
    return side1 + side2 + side3 + side4;
}

parallelogram create_parallelogram() {
    parallelogram p;
    printf("Enter x1: ");
    scanf("%lf", &p.x1);
    printf("Enter y1: ");
    scanf("%lf", &p.y1);
    printf("Enter x2: ");
    scanf("%lf", &p.x2);
    printf("Enter y2: ");
    scanf("%lf", &p.y2);
    printf("Enter x3: ");
    scanf("%lf", &p.x3);
    printf("Enter y3: ");
    scanf("%lf", &p.y3);
    printf("Enter x4: ");
    scanf("%lf", &p.x4);
    printf("Enter y4: ");
    scanf("%lf", &p.y4);
    return p;
}