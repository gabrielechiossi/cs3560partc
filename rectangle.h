/**
 *   @file: rectangle.h
 * @author: Gabriele Chiossi
 *   @date: 07/27/20
 */

#ifndef RECTANGLE_H
#define RECTANGLE_H
#include"shapes.h"
class Rectangle : public Shape {
    public:
        Rectangle();
        void input();
        double area();
    private:
        double length;
        double width;
};

#endif // !RECTANGLE_H

