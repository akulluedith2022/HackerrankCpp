#include <iostream>
using namespace std;

int main(){
    int number_of_words = 0;
    string previous = " ";
    string current;

    while(cin >> current){
        ++number_of_words;
        if(previous == current){
            cout << "The word number " << number_of_words - 1 " ("<< current << ") has been repeated\n";
        }
        previous = current;
    }

    return 0;
}