#include <string>
using namespace std;

string name = "Niels Stroustrup";

void f()
{
    printf("name: %s\n", name.c_str());
}

int main(){f(); }
