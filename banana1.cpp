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
    fstream fin("Physics.txt", ios::in);
    char s[300];
    while(fin.getline(s, 300)){
        char ch[100];
        fin>>ch;
        cout<<ch;
    }//end of while
    fin.close();
}

void writefile()
{
    int n_questions;

    char question[500];

    fstream fout("Physics.txt", ios::out);

    cout<<"How many questions do you want to enter";
    cin>>n_questions;

    for(int i=0; i<n_questions; i++)
    {
        cout<<"question number "<<(i+1);
        //cin.get(question, 500);
        cin>>question;
        fout<<question<<"\n";
    }
    //function to write into the file
}
void create_question_paper()
{
    //to create question paper
}
int main()
{
    //cout<<"Hello World!";
    writefile();
    readfile();
    /*fstream fin;
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
    fin.close();*/
}
