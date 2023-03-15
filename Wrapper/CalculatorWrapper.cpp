#include "CalculatorWrapper.h"
namespace CalculatorWrapper
{
    Calculator::Calculator()
    {
        _calculator = new CppCalculator::Calculator();
    }
    Calculator::~Calculator()
    {
        delete _calculator;
    }
    double Calculator::Add(double a, double b)
    {
        return _calculator->Add(a, b);
    }
    double Calculator::Subtract(double a, double b)
    {
        return _calculator->Subtract(a, b);
    }
}