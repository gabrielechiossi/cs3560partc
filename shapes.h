/**
 *   @file: shapes.h
 * @author: Gabriele Chiossi
 *   @date: 07/27/20
 */
#ifndef SHAPES_H
#define SHAPES_H
#include<iostream>
#include<cmath>
using namespace std;
#define M_PI 3.14

class Shape{
    public:
        Shape();
        virtual void input();
        double cost();
        virtual double area();
    private:
        double thickness;
        double cost_per_cubic_unit;
    };

#endif // !SHAPES_H