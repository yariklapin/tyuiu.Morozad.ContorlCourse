// tyuiu.Morozad.ContorlCourse.V3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "..//tyuiu.Morozad.ContorlCourse.V3.lib/tyuiu.Morozad.ContorlCourse.V3.lib.cpp"
using namespace std; 

int main()	
{
	setlocale(LC_ALL, "Rus");
	ISprint0Task8V3* date = new Service;
	int x;
	int y;
	int z;
	cout << "Введите x \n";
	cin >> x;
	cout << "Введите y \n";
	cin >> y;
	cout << "Введите z \n";
	cin >> z;
	cout << "Ответ  : \n"<<date ->Proizved(x,y,z);
	
}

