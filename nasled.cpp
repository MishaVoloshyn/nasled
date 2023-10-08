#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
	char* name;
	int age;
public:
	Person();
	Person(const char* n, int a) :age(a) {
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);
	}
	void showConsole() {
		cout << "name: " << name << "age: " << age << endl;
	}
};

class Student : public Person
{
private:
	char* Univeritet;
public:
	Student(const char* n, int a, const char* Univer) : Person(n, a) {
		Univeritet = new char[strlen(Univer) + 1];
		strcpy_s(Univeritet, strlen(Univer) + 1, Univer);
	}
	void showConsole() {
		cout << "name: " << name << "age: " << age <<"Universitet: " <<Univeritet << endl;
	}
	~Student() {
		delete[] Univeritet;
	}
};

class Teacher : public Person
{
private:
	string schol;
	int salary;
	int lesons[3] = { 'IT1','IT2' ,'IT3' };
public:
	Teacher(const char* n, int a, string school, double salar) : Person(n, a) {
		schol = school;
		salary = salar;
	}
	void showConsole() {
		cout << "name: " << name << "age: " << age << "School: " << schol << "salary: " << salary << endl;
	}
	void Input() {
		cout << "Enter school: ";
		getline(cin, schol);
		cout << "Enter salary: ";
		cin >> salary;
	}
};
class Doctor : public Person
{
private:
	string spec;
	int level;
	bool chekOnFamily;
public:
	Doctor(const char* n, int a, string specional, int lvl, bool fam) : Person(n, a) {
		spec = specional;
		level = lvl;
		chekOnFamily = fam;
	}
	void showConsole() {
		cout << "name: " << name << "age: " << age << "spec: " << spec << "level: " << level << "chekOnFamily: " << chekOnFamily << endl;
	}
	void Input() {
		cout << "Enter spec: ";
		getline(cin, spec);
		cout << "Enter level: ";
		cin >> level;
		cout << "Enter chekOnFamily: ";
		cin >> chekOnFamily;
	}
};
class Driver : public Person
{
private:
	string carNum;
	string driverPassNum;
public:
	Driver(const char* n, int a, string num, string seria) : Person(n, a) {
		carNum = num;
		driverPassNum = seria;
	}
	void showConsole() {
		cout << "name: " << name << "age: " << age << "carNum: " << carNum << "driverPassNum: " << driverPassNum << endl;
	}
	void Input() {
		cout << "Enter carNum: ";
		getline(cin, carNum);
		cout << "Enter driverPassNum: ";
		cin >> driverPassNum;
	}
};
int main() {
	Student obj("Max", 18, "ITstep");

	Teacher a("Lena", 21, "ITstep", 5000);
	a.showConsole();
	Doctor b("Kostia", 60, "terapevt", 10, false);
	b.showConsole();
	Driver c("Kris", 56, "AA7777AA", "Ao:45-57jA");
	c.showConsole();
}