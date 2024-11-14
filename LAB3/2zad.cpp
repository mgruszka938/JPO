#include <iostream>

class Student {
private:
    std::string m_name;
    int m_age;

public:
    void setAge(int a) {
    	if(a > 0) {
        	m_age = a;
    	}	
	else {
		    std::cout << "Negative age" << std::endl;
    	}
    }
    int getAge() const {
        return m_age;
    }
    void setName(std::string n) {
	if (n.size() == 0) {
      		std::cout << "Empty string" << std::endl;
    	}
	else {
		m_name = n;		
	}
    }
    std::string getName() const {
        return m_name;
    }
};

int main(){
Student student1;
student1.setAge(-1);
student1.setName("Maciej");
student1.getAge();
student1.getName();
}
