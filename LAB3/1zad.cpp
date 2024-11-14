#include <iostream>

class Student {
public:
    std::string name;
    int age;
    
    Student() {
        name = "unknown";
        age = 0;
        m_faculty = "what?";
    }

    Student(std::string n, int a, std::string f) : name(n), age(a), m_faculty(f) {
    }

    void introduce(void) const {
        std::cout << "I'm " << name << ", I am a "
            << age << " years old student!" << std::endl;
        std::cout << "My faculty is: " << m_faculty << std::endl;
    }

private:
    std::string m_faculty;
};

int main(){
Student student1;
student1.name = "Jakub";
student1.age = 25;
student1.introduce();

Student student2("Maciej", 22, "EiT");
student2.introduce();

Student student3(student2);
student3.introduce();
}