#include <iostream>

using namespace std;

class MiscFunctions {
public:
    static string getUserInput() {
        string userInput;
        cout << "Enter a string: ";
        cin >> userInput;
        return userInput;
    };

    int hailstone(int num){
        int count = 1;
        while(num != 1){
            if(num % 2 == 0){
                num = num / 2;
            }else{
                num = (num * 3) + 1;
            }
            count++;
        }
        return count;
    };
};


class Car {
public:
    string brand;
    string model;
    int year;

    Car(string x, string y, int z) {
        brand = x;
        model = y;
        year = z;
    };
};

int main() {
//    Car carObj1("BMW", "X5", 1999);
//    Car carObj2("Ford", "Mustang", 1969);
//    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << endl;
//    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << endl;
//    return 0;

    MiscFunctions miscFunctions;
    int num = miscFunctions.hailstone(6);
    cout << num << endl;
    return 0;

//    MiscFunctions mainClass;
//    cout << "Hello, World!" << endl;
//    cout << mainClass.getUserInput() << endl;
//    return 0;
}



