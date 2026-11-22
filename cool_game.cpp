#include <fstream>
#include <iostream>
#include <string>
using namespace std;


int main()
{
   
    int numv = 0;
    ifstream kaynak("cool_game.cpp");
    string tumu((istreambuf_iterator<char>(kaynak)), istreambuf_iterator<char>());

    ifstream ("number.txt") >> numv;
     
   

    for (int i = numv+1; i <= numv + 1001; i++) {
    ofstream kopya("loser" + to_string(i) + ".cpp");
    if (!kopya.is_open()) {
        cout << "Error in creating file!";
        return 1;
    }
    kopya << tumu;
    kopya.close();

    string komut = "g++ loser" + to_string(i) + ".cpp -o loser" + to_string(i) + " && ./loser" + to_string(i);
        system(komut.c_str());
}

        
        
        
        
   
    ofstream num("number.txt");
    num << numv + 1001;   



    
   

    return 0;
}


