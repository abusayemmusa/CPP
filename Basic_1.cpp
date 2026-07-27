========================================================================================================
# print statement
========================================================================================================
#include <iostream>
using namespace std;

int main() {
    cout << "Hello World" << endl;
    return 0;
}
========================================================================================================
# comment
# next line (\n),(endl)
# multiple line print
========================================================================================================
#include <iostream>
using namespace std;

int main() {
    cout << "Hello World " << "Musa" << endl;
    cout << "I live in \n Rangpur";
    return 0;
}
========================================================================================================
# variable
========================================================================================================
#include <iostream>
using namespace std;

int main() {
    int age = 20;
    float height = 5.9;
    char gender = 'M';
    bool isStudent = true;
    double weight = 70.5;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Gender: " << gender << endl;
    cout << "Is Student: " << isStudent << endl;
    cout << "Weight: " << weight << endl;
    return 0;
}
========================================================================================================
# input output
========================================================================================================
cin (Input)
cout (Output) 
cerr (Error)
clog (Log)
========================================================================================================
#include <iostream>
using namespace std;

int main() {
    cout << "Enter two numbers: ";
    int a;
    cin >> a;
    cout << "Enter another number: ";
    int b;
    cin >> b;
    cout << "The sum of " << a << " and " << b << " is: " << (a + b) << endl;
    return 0;
}
========================================================================================================
