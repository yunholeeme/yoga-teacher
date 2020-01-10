#include "Teacher.h"

Teacher::Teacher(const Teacher& teacher)
{
    m_major = teacher.m_major;
}
Teacher::Teacher(const std::string& name_in, const int& age_in, const std::string& m_major)
    : Person(name_in, age_in), m_major(m_major)
{}
Teacher::~Teacher()
{}
void Teacher::setMajor(const std::string& major_in)
{
    m_major = major_in;
}

std::string Teacher::getMajor()
{
    return m_major;
}
