#include <iostream>
#include <sstream>
using namespace std;

class Student{
public:
    int age;
        string first_name;
        string last_name;
        int standard;


void set_age(int age1)
{
    age=age1;
}
void set_first_name(string first_name2)
{
    first_name=first_name2;
}
void set_last_name(string last_name1)
{
    last_name=last_name1;
}
void set_standard(int standard1)
{
    standard=standard1;
}

int get_age(void)
{
    return age;
}
int get_standard(void)
{
    return standard;
}
string get_first_name(void)
{
    return first_name;
}
string get_last_name(void)
{
    return last_name;
}
string to_string()
    {
        stringstream ss;
        char c = ',';
        ss << age << c << first_name << c << last_name << c << standard;
        return ss.str();
    }
};


int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
