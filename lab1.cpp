#include <iostream>
#include <string>

void inputWorkersInfo();
// Перегруженные функции power для различных типов данных
double power(double n, int p = 2) {
    // Возведение числа n в степень p
    double result = 1.0;
    for (int i = 0; i < p; ++i) {
        result *= n;
    }
    return result;
}

char power(char n, int p = 2) {
    int result = 1;
    for (int i = 0; i < p; ++i) {
        result *= static_cast<int>(n);
    }
    return result;
}


short int power(short int n, int p = 2) {
    short int result = 1;
    for (int i = 0; i < p; ++i) {
        result *= n;
    }
    return result;
}

long int power(long int n, int p = 2) {
    long int result = 1;
    for (int i = 0; i < p; ++i) {
        result *= n;
    }
    return result;
}

float power(float n, int p = 2) {
    float result = 1.0f;
    for (int i = 0; i < p; ++i) {
        result *= n;
    }
    return result;
}

int main() {
    using namespace std;
    double base_double;
    char base_char;
    short int base_short;
    long int base_long;
    float base_float;
    int degree;
    cout << "Enter degree (default == 2): ";
    cin >> degree;

    // Ввод базового числа для различных типов данных
    cout << "Enter double number: ";
    cin >> base_double;

    cout << "Enter char number: ";
    cin >> base_char;

    cout << "Enter short int number: ";
    cin >> base_short;

    cout << "Enter long int number: ";
    cin >> base_long;

    cout << "Enter float number: ";
    cin >> base_float;
   

    // Ввод показателя степени (если нужно)
    

    // Вызов перегруженных функций power с введенными значениями для различных типов данных
    cout << "Result (double): " << power(base_double, degree) << std::endl;
    cout << "Result (char): " << (int)base_char << degree << std::endl;
    cout << "Result (short int): " << power(base_short, degree) << std::endl;
    cout << "Result (long int): " << power(base_long, degree) << std::endl;
    cout << "Result (float): " << power(base_float, degree) << std::endl;
    cout << "\nTASK #3:" << endl;
    inputWorkersInfo();
    return 0;
}
using namespace std;
struct Worker {
    string surname;
    int age;
    string specialty;
    double averageSalary;
};

void inputWorkersInfo() {
    const int numFactories = 3; // Количество заводов

    // Массив структур для каждого завода
    Worker workers[numFactories][3];

    // Ввод информации по заводам
    for (int i = 0; i < numFactories; ++i) {
        cout << "Enter info about fabric " << i + 1 << ":" << endl;

        // Ввод информации о работниках
        for (int j = 0; j < 3; ++j) {
            cout << "Worker " << j + 1 << ":" << endl;
            cout << "Surname: ";
            cin >> workers[i][j].surname;
            cout << "age: ";
            cin >> workers[i][j].age;
            cout << "Specialty: ";
            cin >> workers[i][j].specialty;
            cout << "salary: ";
            cin >> workers[i][j].averageSalary;
        }
    }

    // Подсчет количества слесарей и токарей
    int numLocksmiths = 0;
    int numTurners = 0;

    for (int i = 0; i < numFactories; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (workers[i][j].specialty == "locksmith") {
                numLocksmiths++;
            }
            else if (workers[i][j].specialty == "lathe") {
                numTurners++;
            }
        }
    }
        
    // Вывод результатов
    cout << "number of locksmiths: " << numLocksmiths << endl;
    cout << "number of lathes: " << numTurners << endl;

}
