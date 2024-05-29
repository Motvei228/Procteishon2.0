#include <iostream>
#include <string>
using namespace std;
struct Bus {
	int number;
	string Time;
	string location;
	string TimeLocation;
};

int main()
{
	setlocale(LC_ALL, "Rus");
	//Выделяем память для массива автобусных расписаний 
	int nums;
	cout << "Введите количество автобусов: ";
	cin >> nums;
	Bus* array = new Bus[nums];
	for (int i = 0; i < nums; i++)
	{
		cout << "Введите номер автобуса: ";
		cin >> array[i].number;
		cout << "Введите время отправлени: ";
		cin >> array[i].Time;
		cout << "Введите пункт назначения: ";
		cin >> array[i].location;
		cout << "Введите время прибытия: ";
		cin >> array[i].TimeLocation;
	}
	int count = 0;
	for (int i = 0; i < nums; i++)
	{
		if (array[i].location == "Mogilev")
		{
			cout << "Информация о маршруте в город Магилев:" << "\n";
			cout << "Номер автобуса: " << array[i].number << "\n";
			cout << "Время отправлени: " << array[i].Time << "\n";
			cout << "Направление : " << array[i].location << "\n";
			cout << "время прибытия: " << array[i].TimeLocation << "\n";
			count++;
		}
	}
	if (count == 0)
		cout << "Нет рейсов";
	delete[]array;
	return 0;
}