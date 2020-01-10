#include <iostream>
#include <string>

class Person
{
protected:
    std::string m_name;
    int m_age;

public:
    Person(const Person &person);
    Person(const std::string& name_in = "No Name", const int& age_in  = 0);
    ~Person();
    std::string getName();
    void setName(const std::string& name_in);
    int getAge();
    void setAge(const int& age_in);
};
