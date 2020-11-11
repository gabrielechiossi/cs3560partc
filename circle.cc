/**
 *   @file: circle.cc
 * @author: Gabriele Chiossi
 *   @date: 07/27/20
 */
#include"Circle.h"
Circle::Circle() {}
    void Circle::input() {
    cout << "Enter radius:";
    cin >> radius;
}

double Circle::area() {
    return M_PI * radius*radius;
}