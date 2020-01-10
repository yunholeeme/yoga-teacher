#include "Person.h"

class Teacher : public Person
{
private:
    std::string m_major;
public:
    Teacher(const Teacher& teacher);
    Teacher(const std::string& name_in = "No Name", const int& age_in = 0, const std::string& m_major = "No major");
    ~Teacher();
    void setMajor(const std::string& major_in);
    std::string getMajor();

    friend std::ostream& operator << (std::ostream& out, const Teacher& teacher)
    {
        out << teacher.m_name << " " << teacher.m_age << " " << teacher.m_major;
        return out;
    }
};