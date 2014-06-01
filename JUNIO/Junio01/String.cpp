#include <iostream>
#include <string>
using namespace std;
 
int main(){
    string foo = "fighters";
    string bar = "stool";
 
    // "!=" compares string contents for inequality, even though they are different objects.
    if (foo != bar)
    {
        cout << "The strings are different." << endl;
    }
 
    // Prints "stool fighters" by creating a temporary object, which is automatically freed.
    cout << bar + " " + foo << endl;
 
    return 0;
}
