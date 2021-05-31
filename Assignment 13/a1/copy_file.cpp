#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    string name1;
    string name2;
    string data;
    ifstream input;
    ofstream output;
    cout << "Enter the name of the file to read" << endl;
    getline(cin, name1);
    input.open(name1 + ".txt");
    if (input.fail())
    {
        cout << "CANNOT OPEN" << endl;
    }
    cout << "Enter the name of the file to write" << endl;
    getline(cin, name2);
    output.open(name2 + ".txt", ios::binary);
    if (output.fail())
    {
        cout << "CANNOT OPEN" << endl;
    }
    if (input && output)
    {
        while (getline(input, data))
        {
            output << data << endl;
        }
    }
    else
    {
        cout << "CONNOT READ" << endl;
    }

    output.close();
    input.close();
    return 0;
}