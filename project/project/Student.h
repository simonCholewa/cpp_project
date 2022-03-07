using namespace std;
#include <iostream>
#include<ctime>
#include <map>
#include <string>

class Student
{
public:
	string first_name;
	string last_name;
	int index_number = generateIndexNumber();
	string studied_subject;
	map  <string, int> grades;

	// Student class constructor
	Student(string _first_name, string _last_name, string _studied_subject) {
		first_name = _first_name;
		last_name = _last_name;
		index_number;
		grades;
		studied_subject = _studied_subject;
	}

	// Shows informations about the Student
	void showStudentInfo() {
		cout << first_name << "\n" << last_name << "\n" << index_number << "\n" << studied_subject << "\n";
	} 

	// Generates random four digit number that is student index number
	int generateIndexNumber() {
		srand(time(NULL));
		int index = rand() % 10000;
		return index;
	}

	// Asks about the subject and grade then adds them into the grades array
	void addGrade() {
		string subject;
		int grade;
		cout << "Eneter subcject: ";
		cin >> subject;
		cout << "Enter grade: ";
		cin >> grade;
		grades.insert({ subject, grade });

		// Loops trough the grades map and shows subjects and grade
		map <string, int>::iterator it;
		for (it = grades.begin(); it != grades.end(); it++) {
			cout << subject << " " << it->second;
		}
	}
};

