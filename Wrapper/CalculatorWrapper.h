#pragma once
#include "../Core/Calculator.h"
using namespace System;
namespace CalculatorWrapper
{
    public ref class Calculator
    {
    public:
        Calculator();
        ~Calculator();
        double Add(double a, double b);
        double Subtract(double a, double b);
    private:
        CppCalculator::Calculator* _calculator;
    };
}
