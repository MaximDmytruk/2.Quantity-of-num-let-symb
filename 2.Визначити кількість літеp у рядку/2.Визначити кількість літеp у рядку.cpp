//2. Дан рядок символів. Визначити кількість літер, цифр та інших символів, присутніх у рядку.

#include <string>	//Бібліотека для рооти з рядками
#include <iostream>
using namespace std;

int main()
{
	string r;
	cout << "Enter some text " << endl;	//Просимо ввести кор. рядок з символів
	getline(cin, r);		//ввiд рядка
	int size = r.size();		//вичисляємо розмір рядка
	int letter = 0;			//Змінна для к-сті букв
	int num = 0;			//Змінна для к-сті цифр
	for (int i = 0; i < size; i++)//запускаємо цикл для первірки кожного елементу 
	{
		if (isalpha(r[i])) {	//Перевірка (фурнкція для пошуку букв)якщо даний ел. це буква
			letter++;			//додаємо +1
		}
		if (isdigit(r[i])) {	//Перевірка (фурнкція для пошуку цифр)якщо даний ел. це цифра
			num++;				//додаємо +1

		}
	}
	cout << endl;
	cout <<"Size of string = "<<r.size() << endl;	//виводимо оновлений рядок.
	cout << "Letter =  = " << letter << endl;	//виводимо кількість букв
	cout << "Numbers = " << num << endl;	//виводимо кількість цифр.
	cout << "Another symbols = " << r.size() - letter - num << endl;	//виводимо кількість цифр.
}