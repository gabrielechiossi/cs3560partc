/**
 *   @file: circle.h
 * @author: Gabriele Chiossi
 *   @date: 07/27/20
 */
#ifndef CIRCLE_H
#define CIRCLE_H
#include"shapes.h"
class Circle : public Shape {
    public:
        Circle();
        void input();
        double area();
    private:
        double radius;
};

#endif // !CIRCLE_H

