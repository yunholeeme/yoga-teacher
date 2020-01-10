#include "Person.h"

Person::Person(const Person &person)
{
    m_name = person.m_name;
}
Person::Person(const std::string& name_in, const int& age_in)
{
    m_name = name_in;
    m_age = age_in;
}
Person::~Person()
{}
void Person::setName(const std::string& name_in)
{
    m_name = name_in;
}

void Person::setAge(const int& age_in)
{
    m_age = age_in;
}

std::string Person::getName()
{
    return m_name;
}
int Person::getAge()
{
    return m_age;
}