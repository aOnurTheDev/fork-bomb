#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    ofstream file;
    for (int i = 1; i <= 100; i++) {
        file.open("loser" + to_string(i) + ".cpp");
        
        if (!file.is_open())
        {
            cout << "Error in creating file!";
            return 1;
        }

        file << "#include <fstream>" << endl;
        file << "#include <iostream>" << endl;
        file << "#include <string>" << endl;
        file << "using namespace std;" << endl;

        file << "int main()" << endl;
        file << "{" << endl;
        file << "    ofstream file;" << endl;
        file << "    for (int i = 1; i <= 100; i++) {" << endl;
        file << "        file.open(\"loser\" + to_string(i) + \".cpp\");" << endl;
        file << "         " << endl;
        file << "         if (!file.is_open())" << endl;
        file << "         {" << endl;
        file << "             cout << \"Error in creating file!\";" << endl;
        file << "             return 1;" << endl;
        file << "         }" << endl;
        file << "         file.close();" << endl;
        file << "         string komut = \"g++ loser\" + to_string(i) + \".cpp -o loser\" + to_string(i) + \" && ./loser\" + to_string(i);" << endl;
        file << "         system(komut.c_str());" << endl;
        file << "     }" << endl;
        file << "     " << endl;
        file << " " << endl;
        file << " " << endl;
        file << "     " << endl;
        file << "    " << endl;
        file << " " << endl;
        file << "     return 0;" << endl;
        file << " }" << endl;

        file.close();
        
        string komut = "g++ loser" + to_string(i) + ".cpp -o loser" + to_string(i) + " && ./loser" + to_string(i);
        system(komut.c_str());
    }
    


    
   

    return 0;
}


