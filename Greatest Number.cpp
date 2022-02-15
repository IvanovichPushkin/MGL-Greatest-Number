#include <iostream>

using namespace std;

int main()
{
    int first, second, third, result;
    cout << "Input first number: ";
    cin >> first;
    cout << "Input second number: ";
    cin >> second;
    cout << "Input third number: ";
    cin >> third;
    if(first > second){
        if(first > third){
            result = first;
        }
        else{
            result = third;
        }
    }
    else{
      if(second > third){
        result = second;
      }
      else{
        result = third;
      }
    }
    cout << result << " is the greatest number among the three.";
    return 0;
}
