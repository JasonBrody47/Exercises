// Copyright (C) 2017 Luan Eduardo.
//
// Este arquivo � parte do programa AreaDocirculo.

#include "stdafx.h"
#include "area_do_circulo.h"
#include <iostream>

void getCircleRadius()
{
    std::cout << "Insira o raio do circulo > ";
    double circle_radius;
    std::cin >> circle_radius;

    // Limpa erros e caracteres no buffer de entrada.
    std::cin.clear();
    std::cin.ignore();

    calculateCircleArea(circle_radius);
}

void calculateCircleArea(const double radius)
{
    double circle_area = 3.14 * (radius * radius);
    printCircleArea(circle_area);
}

void printCircleArea(const double print_area)
{
    std::cout << "\nArea do circulo: " << print_area;
}