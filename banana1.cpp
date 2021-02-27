#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include <stdlib.h>
#include<iomanip>
#include<process.h>
#include<fstream>

//hello
using namespace std;

class exam
{

};//end of exam

int n_questions;

void no_of_questions()
{
    cout<<"How many questions do you want to enter? ";
    cin>>n_questions;
}
//cout<<"How many questions do you want to enter";
//cin>>n_questions;

void readfile()
{
    cout<<"Displaying the contents of the file \n";

    fstream fin("Physics.txt", ios::in);
    char question[500], ch;
    for(int i=0;  i<n_questions; i++)
    {
        cout<<"question "<<(i+1)<<": ";
        fin.get(question, 500);
        cout<<question<<"\n";
        fin.get(ch);
    }
    fin.close();
    /*
    while(fin.getline(s, 300)){
        char ch[100];
        fin>>ch;
        cout<<ch;
    }//end of while
    fin.close();
    */
}

void writefile()
{
    cout<<"Accepting data to write into the file \n";

    char question[500];

    fstream fout("Physics.txt", ios::out);

    for(int i=0; i<n_questions; i++)
    {
        cout<<"question "<<(i+1)<<": ";
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
    no_of_questions();
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
