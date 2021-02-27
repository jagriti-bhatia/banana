#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include <stdlib.h>
#include<iomanip>
#include<process.h>
#include<fstream>

using namespace std;

class exam{
    int n_questions;
    char subject[30];
    int intermediate;
    int easy;
    void writefile();
    public:
    void question_pattern();
    void no_of_questions_user();
    void easy_phy_readfile();
    void easy_chem_readfile();
    void easy_bio_readfile();
    void create_question_paper();
    void no_of_questions();
}ques;//end of exam

void exam::no_of_questions(){
    cout<<"Enter subject: ";
    cin>>subject;
    //cout<<"How many questions do you want in the respective subject? ";
    //cin>>n_questions;
    int i;
    for(i=0; i<strlen(subject); i++)
        subject[i] = tolower(subject[i]);
}

void exam::question_pattern(){
    cout<<"Enter number of intermediate questions: ";
    cin>>intermediate;
    cout<<"Enter number of easy questions: ";
    cin>>easy;
    n_questions = easy + intermediate;
}//end of fn

void exam::no_of_questions_user()
{
    int n_questions_user;
    cout<<"How many questions do you want to enter? ";
    cin>>n_questions_user;
}
//cout<<"How many questions do you want to enter";
//cin>>n_questions;

void exam::easy_phy_readfile()
{
    cout<<"Displaying the contents of the file \n";
    cout<<"Easy\n";
    fstream fin("Physics.txt", ios::in);
    char question[500], ch;
    for(int i=0;  i<easy; i++)
    {
        cout<<"question "<<(i+1)<<": ";
        fin.get(question, 500);
        cout<<question<<"\n";
        fin.get(ch);
    }
    fin.close();
    cout<<"Intermediate\n";
    fstream fin1("physics_intermediate.txt", ios::in);
    char question1[500], ch1;
    for(int i=0;  i<intermediate; i++)
    {
        cout<<"question "<<(i+1)<<": ";
        fin1.get(question1, 500);
        cout<<question1<<"\n";
        fin1.get(ch1);
    }
    fin1.close();
    /*
    while(fin.getline(s, 300)){
        char ch[100];
        fin>>ch;
        cout<<ch;
    }//end of while
    fin.close();
    */
}

void exam::easy_chem_readfile(){
    cout<<"Displaying the contents of the file \n";
    cout<<"Easy\n";
    fstream fin("Chemistry.txt", ios::in);
    char question[500], ch;
    for(int i=0;  i<easy; i++)
    {
        cout<<"question "<<(i+1)<<": ";
        fin.get(question, 500);
        cout<<question<<"\n";
        fin.get(ch);
    }
    fin.close();
    cout<<"Intermediate\n";
    fstream fin1("Chemistry_intermediate.txt", ios::in);
    char question1[500], ch1;
    for(int i=0;  i<intermediate; i++)
    {
        cout<<"question "<<(i+1)<<": ";
        fin1.get(question1, 500);
        cout<<question1<<"\n";
        fin1.get(ch1);
    }
    fin1.close();
    /*
    while(fin.getline(s, 300)){
        char ch[100];
        fin>>ch;
        cout<<ch;
    }//end of while
    fin.close();
    */
}//end of fn chem_readfile

void exam::easy_bio_readfile(){
    cout<<"Displaying the contents of the file \n";
    cout<<"Easy\n";
    fstream fin("Biology.txt", ios::in);
    char question[500], ch;
    for(int i=0;  i<easy; i++)
    {
        cout<<"question "<<(i+1)<<": ";
        fin.get(question, 500);
        cout<<question<<"\n";
        fin.get(ch);
    }
    fin.close();
    cout<<"Intermediate\n";
    fstream fin1("Biology_intermediate.txt", ios::in);
    char question1[500], ch1;
    for(int i=0;  i<intermediate; i++)
    {
        cout<<"question "<<(i+1)<<": ";
        fin1.get(question1, 500);
        cout<<question1<<"\n";
        fin1.get(ch1);
    }
    fin1.close();
    /*
    while(fin.getline(s, 300)){
        char ch[100];
        fin>>ch;
        cout<<ch;
    }//end of while
    fin.close();
    */
}//end of fn bio_readfile


void exam::writefile()
{
    cout<<"Accepting data to write into the file \n";

    char question[500];
    //string question;

    fstream fout("Physics.txt", ios::out);

    for(int i=0; i<n_questions; i++)
    {
        cout<<"question "<<(i+1)<<": ";
        fflush(stdin);
        gets(question);
        //getline(question);
        fout<<question<<"\n";
    }
    //function to write into the file
}

void exam::create_question_paper(){
    question_pattern();
    if(strcmp("physics", subject) == 0){
        //cout<<"PHY";
        easy_phy_readfile();
    }
    else if(strcmp("chemistry", subject)== 0){
        cout<<"Chem";
        easy_chem_readfile();
    }
    else if(strcmp("biology", subject)== 0){
        cout<<"Bio";
        easy_bio_readfile();
    }
    else{
        cout<<"Invalid input";
    }
}
int main()
{
    ques.no_of_questions();
    ques.create_question_paper();
}
