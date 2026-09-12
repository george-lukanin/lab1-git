// Лабораторная работа № 1. Вариант 36.
// Выполнил: Луканин Г. В., группа ПИ-53.

#include <iostream>
using namespace std;

// ===== Расчётные функции варианта =====
// Сила упругости пружины
double springForce(double k, double x) {
	return k * x;
}

// Энергия упругости пружины
double springEnergy(double k, double x) {
	return k * x * x / 2;
}


// ===== Главная функция: меню =====
int main() {
	int choice;
	double k, x;
	do {
		cout << "\n=== Вариант 36: расчёты для пружины ===\n";
		cout << "1. Сила упругости\n";
		cout << "2. Энергия упругости\n";
		cout << "0. Выход\n";
		cout << "Выберите пункт: ";
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "Введите значения k и x: ";
			cin >> k >> x;
			cout << "Сила упругости = " << springForce(k, x) << "\n";
			break;
		case 2:
			cout << "Введите значения k и x: ";
			cin >> k >> x;
			cout << "Энергия упругости = " << springEnergy(k, x) << "\n";
			break;
		case 0:
			cout << "Работа завершена.\n";
			break;
		default:
			cout << "Такого пункта нет.\n";
		}
	} while (choice != 0);
	return 0;
}