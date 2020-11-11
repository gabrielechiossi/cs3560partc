/**
 *   @file: trapezoid.h
 * @author: Gabriele Chiossi
 *   @date: 07/27/20
 */
#ifndef TRAPEZOID_H
#define TRAPEZOID_H
#include"shapes.h"
class Trapezoid : public Shape {
    public:
        Trapezoid();
        void input();
        double area();
    private:
        double base1;
        double base2;
        double height;

};

#endif // !TRAPEZOID_H

