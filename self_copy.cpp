#include <fstream>
#include <string>
using namespace std;
const char* d[] = {
"#include <fstream>",
"#include <string>",
"using namespace std;",
"const char* d[] = {",
"};",
"int main() {",
"    int n = 0;",
"    { std::ifstream f(\"number.txt\"); if (f) f >> n; }",
"    std::ofstream out(\"loser\" + std::to_string(n + 1) + \".cpp\");",
"    int L = sizeof(d) / sizeof(*d);",
"    for (int i = 0; i < 4; i++) out << d[i] << \"\\n\";",
"    for (int i = 0; i < L; i++) {",
"        out << \"\\\"\";",
"        for (const char* p = d[i]; *p; p++) {",
"            if (*p == 92 || *p == 34) out << (char)92;",
"            out << *p;",
"        }",
"        out << \"\\\",\\n\";",
"    }",
"    for (int i = 4; i < L; i++) out << d[i] << \"\\n\";",
"    { std::ofstream g(\"number.txt\"); g << n + 1; }",
"    // system() yok: kopya olusur ama kendini CALISTIRMAZ (bilerek guvenli)",
"    return 0;",
"}",
};
int main() {
    int n = 0;
    { std::ifstream f("number.txt"); if (f) f >> n; }
    std::ofstream out("loser" + std::to_string(n + 1) + ".cpp");
    int L = sizeof(d) / sizeof(*d);
    for (int i = 0; i < 4; i++) out << d[i] << "\n";
    for (int i = 0; i < L; i++) {
        out << "\"";
        for (const char* p = d[i]; *p; p++) {
            if (*p == 92 || *p == 34) out << (char)92;
            out << *p;
        }
        out << "\",\n";
    }
    for (int i = 4; i < L; i++) out << d[i] << "\n";
    { std::ofstream g("number.txt"); g << n + 1; }
    // system() yok: kopya olusur ama kendini CALISTIRMAZ (bilerek guvenli)
    return 0;
}
