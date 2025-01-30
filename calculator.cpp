#include<iostream>
#include<cmath>
#include<concepts>
using namespace std;

#ifndef M_PI
#define M_PI 3.14159265358979323846  // Define the value of Pi if not already defined
#endif

template <typename T>
concept Arithmetic=std::is_arithmetic_v<T>;

template <Arithmetic T>
T toRadian(T degree){
    return (degree * M_PI)/180.0;
}

template <Arithmetic T>
T Sin(T operand){
    return sin(toRadian(operand));
}

template <Arithmetic T>
T Cos(T operand){
    return cos(toRadian(operand));
}

template <Arithmetic T>
T Tan(T operand){
    return tan(toRadian(operand));
}

template <Arithmetic T>
T sum(T operand1,T operand2){
    return operand1+operand2;
}

template <Arithmetic T>
T sub(T operand1,T operand2){
    return operand1-operand2;
}

template <Arithmetic T>
T multiply(T operand1,T operand2){
    return operand1*operand2;
}

template <Arithmetic T>
T divide(T operand1,T operand2){
    return operand1/operand2;
}

template <Arithmetic T>
T Power(T base,T exponent){
    return pow(base,exponent);
}

template <Arithmetic T>
T Log(T operand){
    int base;
    cout << "Select an option\n1.base 10\n2.base2\n3.Natural logarithm (e base)";
    cin >> base;
    if(base==1){
        return log10(operand);
    }
    else if(base==2){
        return log2(operand);
    }
    else{
        return log(operand);
    }
}

template <Arithmetic T>
T squareRoot(T operand){
    return sqrt(operand);   
}

template <Arithmetic T>
T Exp(T operand){
    return exp(operand);
}

template <Arithmetic T>
T fraction(T operand){
    return (1/operand);
}

int main(){
    cout << "Scientific Calculator\n";
    char choice='Y';
    double a,b;
    while(choice=='Y'){
        cout<< "\nSelect the operation you want to perform:\n\n1.Addition\2.Subtraction\n3.Multiplication\n4.Division\n5.Power\n6.Exponential\n7.Square root\n8.Logarithm\n9.Sine\n10.Cosine\n11.Tangent\n12.Fraction\n\n";
        int operation;
        cin >> operation;
        switch(operation){
            case 1:{
                cout << "Enter the operands\n";
                cin >> a;
                cin >> b;
                cout << "The sum is: " <<sum(a,b);
                break;
            }
            case 2:{
                cout << "Enter the operands\n";
                cin >> a;
                cin >> b;
                cout << "The differcene is: " <<sub(a,b);
                break;
            }
            case 3:{
                cout << "Enter the operands\n";
                cin >> a;
                cin >> b;
                cout << "The product is: " <<multiply(a,b);
                break;
            }
            case 4:{
                cout << "Enter the operands\n";
                cin >> a;
                cin >> b;
                cout << "Result is: " <<divide(a,b);
                break;
            }
            case 5:{
                cout << "Enter the base and exponent\n";
                cin >> a;
                cin >> b;
                cout << "Result is: " <<Power(a,b);
                break;
            }
            case 6:{
                cout << "Enter the operand\n";
                cin >> a;
                cout << "Result is: " <<Exp(a);
                break;
            }
            case 7:{
                cout << "Enter the operand\n";
                cin >> a;
                cout << "Square root is : " <<squareRoot(a);
                break;
            }
            case 8:{
                cout << "Enter the operands\n";
                cin >> a;
                cout << "Result is: " <<Log(a);
                break;
            }
            case 9:{
                cout << "Enter the degree\n";
                cin >> a;
                cout << "Result is: " <<Sin(a);
                break;
            }
            case 10:{
                cout << "Enter the degree\n";
                cin >> a;
                cout << "Result is: " <<Cos(a);
                break;
            }
            case 11:{
                cout << "Enter the degree\n";
                cin >> a;
                cout << "Result is: " <<Tan(a);
                break;
            }
            case 12:{
                cout << "Enter the operand\n";
                cin >> a;
                cout << "Result is: " <<fraction(a);
                break;
            }
        }
        cout << "\nDo you want to continue?(Y/N)";
        cin >> choice;
    }   
    return 0;
}