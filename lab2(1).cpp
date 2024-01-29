#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>  

using namespace std;

class Aeroflot {
public:
    int flightNumber; //nomer reisa
    string departure_point;// mesto otpravleniya
    string destination_point;//mesto naznacheniya
    string arrival_time;
    string departure_time;
    int registration_desk;

    Aeroflot() {}

    Aeroflot(int flightNumber, string departure_point, string destination_point, string arrival_time, string departure_time, int registration_desk) {
        this->flightNumber = flightNumber;
        this->departure_point = departure_point;
        this->destination_point = destination_point;
        this->arrival_time = arrival_time;
        this->departure_time = departure_time;
        this->registration_desk = registration_desk;
    }
    //В общем, эти конструкторы позволяют создавать экземпляры класса "Aeroflot" либо без начальных значений, либо с конкретными значениями для атрибутов полета.
};\

bool compareByDestination(const Aeroflot& a, const Aeroflot& b) {
    return a.destination_point < b.destination_point;
}
//а использована,  для сортировки списка объектов класса Aeroflot по их пунктам назначения.В таком случае, она будет передана в функцию сортировки(например, std::sort), которая будет использовать её для сравнения объектов и упорядочивания их по заданному критерию.
int main() {
    int n;
    cout << "Введите количество рейсов: ";
    cin >> n;

    Aeroflot* flights = new Aeroflot[n];

    // Ввод данных с клавиатуры
    for (int i = 0; i < n; ++i) {
        cout << "Введите данные для рейса #" << i + 1 << ":\n";
        cout << "Номер рейса: ";
        cin >> flights[i].flightNumber;
        cout << "Пункт отправления: ";
        cin >> flights[i].departure_point;
        cout << "Пункт назначения: ";
        cin >> flights[i].destination_point;
        cout << "Время прибытия: ";
        cin >> flights[i].arrival_time;
        cout << "Время отправления: ";
        cin >> flights[i].departure_time;
        cout << "Номер секции для регистрации: ";
        cin >> flights[i].registration_desk;
    }

    // Сортировка рейсов по пункту назначения
    sort(flights, flights + n, compareByDestination);

    // Вывод данных
    cout << "\nТаблица рейсов:\n";
    cout << "------------------------------------------------------------------------\n";
    cout << "| Номер | Отправление | Назначение | Прибытие | Отправление | Секция |\n";
    cout << "------------------------------------------------------------------------\n";
    for (int i = 0; i < n; ++i) {
        cout << "| " << flights[i].flightNumber << "     | " << flights[i].departure_point << "   | " << flights[i].destination_point << "   | " << flights[i].arrival_time << "    | " << flights[i].departure_time << "   | " << flights[i].registration_desk << "    |\n";
    }
    cout << "------------------------------------------------------------------------\n";

    delete[] flights;

    return 0;
}
