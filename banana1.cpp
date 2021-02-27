#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include <stdlib.h>
#include<iomanip>
#include<process.h>
#include<fstream>

using namespace std;

class exam
{

};//end of exam

void readfile()
{
    //function to read the file
}

void writefile()
{
    for(int i=0; i<n_questions; i++)
    {

    }
    //function to write into the file
}

void create_question_paper()
{
    //to create question paper
}

int main()
{
    cout<<"Hello World!";

    fstream fin;
    fin.open("Physics.txt", ios::in);
    //read file here
    fin.close();

    fstream fin;
    fin.open("Chemistry.txt", ios::in);
    //read file here
    fin.close();

    fstream fin;
    fin.open("Biology.txt", ios::in);
    //read file here
    fin.close();
}

