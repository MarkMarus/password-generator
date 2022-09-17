#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;
// declaring all the characters and symbols
int main(){
    
    char characters[] = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM123456789";
    string password;
    
    int length;
    
    ofstream out_file;
    out_file.open("Password.txt");
    // creating a variable for number of digits in a passord
    cout << "Enter the number of digits in your password" << endl;
    cin >> length;
    
    srand(time(NULL));
    // the function where the magic happens lmao. Generating declared amount of numbers
    for(int i = 1; i <= length; i++){
        int rNum = rand() %63 + 1;
        
        out_file << characters[rNum];
    }
    
    cout << "Done\n";
    
    return 0;
}

// This is a very-very raw code i'm using for learing basics of c++
// My ToDo list atm is creating gui and maybe a chrome ext idk
// not even sure that someone is gonna read it i just feel lonely :(