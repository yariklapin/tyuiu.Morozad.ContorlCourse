// tyuiu.Morozad.ContorlCourse.V0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "..//tyuiu.Morozad.ContorlCourse.V0.lib/tyuiu.Morozad.ContorlCourse.V0.lib.cpp"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    ISprint0Task8V0* date = new Service;
    int a;
    cout << "Введите трехзначение число \n";
    cin >> a;
    cout << "произведение = " << date->Control(a);
}

