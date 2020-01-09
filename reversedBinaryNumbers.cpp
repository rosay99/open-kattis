#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main(){
    long inp;
    cin >> inp;

    bitset<32> x(inp);//to get 32-character strings from 32-bit integers.
    //std::bitset has a .to_string() method that returns a std::string holding a text representation in binary, with leading-zero padding
    string str = x.to_string();

    size_t removeZeros = str.find_first_not_of("0");
    str = str.substr(removeZeros);

    string output = "";
    for (int i = str.length()-1; i >=0; i--){
        output += str.at(i); 
    }
    
    bitset<32> o(output);
    int out = o.to_ulong();//ke decimal

    cout << out << endl;
}