// Copyright 2017 Kulygina Julia

#ifndef MODULES_AREA_OF_THREE_DIMENSIONAL_FIGURES_INCLUDE_THREE_DIMENSIONAL_FIGURES_H_
#define MODULES_AREA_OF_THREE_DIMENSIONAL_FIGURES_INCLUDE_THREE_DIMENSIONAL_FIGURES_H_

#include <string>

class Sphere {
 public:
    Sphere(double _R);
    double CalculateS();
    Sphere(const Sphere& z);

    double getR() const;
    double getS() const;
    void setR(const double _R);
    void setS(const double _S);

 private:
    double R;
    double S;
};

#endif  // MODULES_COMPLEX_NUMBER_INCLUDE_COMPLEX_CALCULATOR_H_
