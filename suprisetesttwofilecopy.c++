// made by --> Aditya kumar
// UID     -->21BCS9520
#include <iostream>
using namespace std;
#include <fstream>
int main()
{
    string content1, content2,content;
    ofstream takedata, takedata2;

    takedata.open("file1.txt", ios::out);
    takedata2.open("file2.txt", ios::out);

    cout << "\n\nEnter the input in file one  -- ";
    cin >> content1;
    takedata << content1;
    cout << "\nEnter the input in file two  -- ";
    cin >> content2;
    takedata2 << content2;

    ifstream getdata, getdata2;
    getdata.open("file1.txt", ios::in);
    getdata2.open("file2.txt", ios::in);
    getdata >> content1;
    cout << "\nfile 1 => " << content1;

    getdata2 >> content2;
    cout << "\nfile 2 => " << content2;

    fstream copydata;
    copydata.open("copyfile.txt", ios::out|ios::in);

    getdata >> content1;
    copydata << content1;
   
    getdata2 >> content2;
    copydata << content2;



}
