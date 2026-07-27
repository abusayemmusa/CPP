========================================================================================================
if-else
========================================================================================================
#include <iostream>
using namespace std;

int main() {
    int age a;
    cin >> a;

    if (a >= 18) {
        cout << "You are an adult." << endl;
    } else {
        cout << "You are a minor." << endl;
    }
    return 0;
}
========================================================================================================
else-if-else
========================================================================================================
#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter:";
    cin >> a;

    if (a >= 50 ) {
        cout << "You are an adult." << endl;
    } else if (a >= 18){
        cout << "You are a minor." << endl;
    }else {
        cout << "Not adult";
    }
    return 0;
}
========================================================================================================
for loop
========================================================================================================
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
            cout << i << " "<< endl;
    }
    return 0;
}
========================================================================================================
while loop
========================================================================================================
using namespace std;

int main() {
    int i = 1;

    while (i <= 5) {
        //cout << i << " ";
        cout << i << endl;
        i++;
    }

    return 0;
}
========================================================================================================
# array
========================================================================================================
#include <iostream>
using namespace std;

int main() {
    // declaring and initializing an array of size 5
    int arr[5] = {2, 4, 8, 12, 16};

    // printing array elements
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
========================================================================================================
# string
========================================================================================================
length()
size()
max_size()
capacity()
resize()
reserve()
empty()
clear()
append()
push_back()
pop_back()
insert()
erase()
replace()
swap()
assign()
copy()
substr()
find()
rfind()
find_first_of()
find_last_of()
find_first_not_of()
find_last_not_of()
compare()
at()
front()
back()
c_str()
data()









