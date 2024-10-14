#include <iostream>
#include <string>

using namespace std;

// Класс Applicant, представляет информацию об одном кандидате
class Applicant {
private:
    string fullName;
    int birthYear;
    string education;

public:
    Applicant(const string& name, int year, const string& edu) {
        fullName = name;
        birthYear = year;
        education = edu;
    }

    // Прототип метода printInfo
    void printInfo();
};

// Определение метода printInfo вне класса
void Applicant::printInfo() {
    cout << "Name: " << fullName << endl;
    cout << "Birth year: " << birthYear << endl;
    cout << "Education: " << education << endl;
    cout << endl;
}

int main() {
    // Создаем четыре объекта класса Applicant
    Applicant applicant1("John Doe", 1990, "Bachelor's degree");
    Applicant applicant2("Jane Smith", 1985, "Master's degree");
    Applicant applicant3("Michael Johnson", 1995, "High school diploma");
    Applicant applicant4("Emily Brown", 1992, "PhD");

    // Вывожу информацию о каждом кандидате
    applicant1.printInfo();
    applicant2.printInfo();
    applicant3.printInfo();
    applicant4.printInfo();

    return 0;
}