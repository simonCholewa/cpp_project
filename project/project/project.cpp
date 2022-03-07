#include <iostream>
#include "Student.h"
using namespace std;


int main() {
	Student student0("John", "Studer", "Bioinformatics");
	student0.showStudentInfo();
	student0.addGrade();
}