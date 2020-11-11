/**
 *   @file: rectangle.cc
 * @author: Gabriele Chiossi
 *   @date: 07/27/20
 */
#include"Rectangle.h"
Rectangle::Rectangle() {}
    void Rectangle::input() {
        cout << "Enter Length:";
        cin >> length;
        cout << "Enter width:";
        cin >> width;
}

double Rectangle::area() {
    return length * width;
}