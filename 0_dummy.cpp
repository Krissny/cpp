

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/class Student{
    public:
    int Age ,Standard;
    string first,last;
    void set_age(int age ){
        Age=age;
    }
    void set_standard(int standard ){
        Standard=standard;
    }
    void set_first_name(string first_name ){
        first =first_name;
    }  
    void set_last_name(string last_name ){
        last=last_name;
    }
    int get_age( ){
        return Age;
    }
    string get_last_name( ){
        return last;
    }
    string get_first_name( ){
        return first;
    }
    int get_standard( ){
        return Standard;
    }
    string to_string(){
     stringstream ss;
     string ageS , sTa;
     ss<< Age;
     ss>>ageS;
     stringstream ss1;
     ss1<<Standard;
     ss1>>sTa;
     string str = ageS+","+first + "," + last+ ","+sTa;
      return str;
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