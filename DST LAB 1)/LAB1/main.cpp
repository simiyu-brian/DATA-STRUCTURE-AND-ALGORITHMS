#include <iostream>
#include <string>

class Course {
public:
    std::string course_code;
    std::string course_name;
};

class Grade {
public:
    int mark;
    char the_grade;

    Grade(int mark) {
        this->mark = mark;
        calculateGrade();
    }

private:
    void calculateGrade() {
        if (mark > 69)
            the_grade = 'A';
        else if (mark > 59)
            the_grade = 'B';
        else if (mark > 49)
            the_grade = 'C';
        else if (mark > 39)
            the_grade = 'D';
        else
            the_grade = 'E';
    }
};

class Student {
public:
    std::string registration_number;
    std::string name;
    int age;
    Course course;
    Grade grades;

    Student(std::string reg_number, std::string student_name, int student_age, Course student_course, int mark)
        : registration_number(reg_number), name(student_name), age(student_age), course(student_course), grades(mark) {}

    // Function to edit student details
    void editDetails(std::string new_name, int new_age, Course new_course) {
        name = new_name;
        age = new_age;
        course = new_course;
    }
};

int main() {
    // Sample usage
    Course csCourse{"CS101", "Computer Science"};
    Student student1{"12345", "John Doe", 20, csCourse, 75};

    std::cout << "Original Student Details:" << std::endl;
    std::cout << "Name: " << student1.name << ", Age: " << student1.age << ", Course: " << student1.course.course_name << std::endl;
    std::cout << "Mark: " << student1.grades.mark << ", Grade: " << student1.grades.the_grade << std::endl;

    // Edit student details
    student1.editDetails("Jane Doe", 21, {"CS102", "Advanced Computer Science"});

    std::cout << "\nUpdated Student Details:" << std::endl;
    std::cout << "Name: " << student1.name << ", Age: " << student1.age << ", Course: " << student1.course.course_name << std::endl;

    return 0;
}
