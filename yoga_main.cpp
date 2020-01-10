#include "Teacher.h"

using namespace std;

int main()
{
    Teacher teacher1;

    teacher1.setName("leehyerim");
    teacher1.setAge(33);
    teacher1.setMajor("Pilates");

    cout << teacher1 << endl;

    return 0;
}