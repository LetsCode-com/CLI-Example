using System;
using CalculatorWrapper;
namespace CalculatorApp
{
    class Program
    {
        static void Main(string[] args)
        {
            var calculator = new Calculator();
            double result = calculator.Add(2.0, 3.0);
            Console.WriteLine("2 + 3 = " + result);
            result = calculator.Subtract(5.0, 3.0);
            Console.WriteLine("5 - 3 = " + result);
            Console.ReadLine();
        }
    }
}