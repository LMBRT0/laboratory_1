#define NO_CRT_WARNINGS
#include <cmath>
#include <iostream>

void triangle(){
    
    int a_side, b_side, c_side;

    bool isTriangle;

    while(true){
        std::cout << "Введите значения сторон треугольника\n";
        std::cout << "1 сторона: ";
        std::cin >> a_side;
        std::cout << "2 сторона: ";
        std::cin >> b_side;
        std::cout << "3 сторона: ";
        std::cin >> c_side;

        isTriangle = (a_side + b_side > c_side) && (a_side + c_side > b_side) && (c_side + b_side > a_side);
        
        if (a_side > 0 && b_side > 0 && c_side > 0 && isTriangle){
            break;
        }
    }

    int per = a_side + b_side + c_side;
    std::cout << "Периметр треугольника: " << per << std::endl; 

    double area = sqrt(per * 0.5 * (per * 0.5 - a_side) * (per * 0.5 - b_side) * (per * 0.5 - c_side));
    std::cout << "Площадь треугольника: " <<  area << std::endl;

    bool iso = (a_side == b_side) && (b_side == c_side) && (a_side == c_side);
    if (iso){ 
        std::cout << "Треугольник равносторонний\n"; 
    }
    else {
        std::cout << "Треугольник неравносторонний\n";
    }
}

int main(){
    triangle();
    return 0;
}