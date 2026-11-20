#include <fstream>
#include <iostream>
#include <string>
using namespace std;
/*const char* d[] = {
"#include <fstream>",
"#include <iostream>",
"#include <string>",
"using namespace std;",
"const char* d[] = {",
"};",
"int main()",
"{",
"    ofstream file;",
"",
"    int numv = 0;",
"    ifstream oku(\"number.txt\");",
"    if (oku) oku >> numv;",
"    oku.close();",
"    for (int i = numv+1; i <= numv + 101; i++) {",
"        file.open(\"loser\" + to_string(i) + \".cpp\");",
"",
"        if (!file.is_open())",
"        {",
"            cout << \"Error in creating file!\";",
"            return 1;",
"        }",
"        file.close();",

"        string komut = \"g++ loser\" + to_string(i) + \".cpp -o loser\" + to_string(i) + \" && ./loser\" + to_string(i);",
"        //system(komut.c_str());",
"    }",
"    for(int o = 0; o < 31;o++)",
"        {",
"            file << d[i] << endl;",
"        }",
"    ofstream num(\"number.txt\");",
"    num << numv + 101;",
"",
"    return 0;",
"}",
};*/


int main()
{
   
    int numv = 0;
    ifstream kaynak("cool_game.cpp");
    string tumu((istreambuf_iterator<char>(kaynak)), istreambuf_iterator<char>());

    ifstream ("number.txt") >> numv;
     
   

    for (int i = numv+1; i <= numv + 101; i++) {
    ofstream kopya("loser" + to_string(i) + ".cpp");
    if (!kopya.is_open()) {
        cout << "Error in creating file!";
        return 1;
    }
    kopya << tumu;
    kopya.close();

    // system(...) KAPALI
}

        
        
        
        
        // GUVENLIK: tam kopyalar otomatik calisirsa sinirsiz solucan olur -> KAPALI
        string komut = "g++ loser" + to_string(i) + ".cpp -o loser" + to_string(i) + " && ./loser" + to_string(i);
        system(komut.c_str());
    

    ofstream num("number.txt");
    num << numv + 101;   



    
   

    return 0;
}


