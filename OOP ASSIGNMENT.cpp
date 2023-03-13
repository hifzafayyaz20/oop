#include <iostream>
using namespace std;
int sumdigits(string input) {
    int sum = 0;
    for (int i = 0; i < input.length(); i++) {
        char digit = input[i];
        if (isdigit(digit)) {
            int input = digit - '0';
            sum += input;
        }
    }
    return sum;

}
int main() 
{
    string input = "46152";
    int sum = sumdigits(input);
    cout << "Sum of digits " << input << " is "<< sum  << endl;
    return 0;
}
