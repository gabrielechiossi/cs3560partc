/**
 *   @file: shapes.cc
 * @author: Gabriele Chiossi
 *   @date: 07/27/20
 */
#include"shapes.h"
Shape::Shape() {
    thickness = 4;
    cost_per_cubic_unit = 12;
}

void Shape::input() {
    cout << "Enter thickness:";
    cin >> thickness;
    cout << "Enter cost per cubic unit:";
    cin >> cost_per_cubic_unit;
}

double Shape::cost() {
    return thickness * cost_per_cubic_unit*area();
}

double Shape::area(){
    return 0.0;
}