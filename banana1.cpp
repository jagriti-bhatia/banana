#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include <stdlib.h>
#include<iomanip>
#include<process.h>
#include<fstream>
#include<conio.h>

using namespace std;

//this is the main code
class exam  {
                int n_questions;
                char subject[30];
                int intermediate;
                int difficult;
                int easy;
                int n_physics_easy = 101;//no of questions in physics file
                int n_physics_intermediate = 50;
                int n_physics_difficult = 60;
                int n_chemistry_easy = 29;
                int n_chemistry_intermediate = 43;
                int n_chemistry_difficult = 32;
                int n_biology_easy = 53;
                int n_biology_intermediate = 11;
                int n_biology_difficult = 38;
                char expsub[20];
                char diff_level[30];
            public:
                void onlyphy();
                void onlychem();
                void onlybio();
                void writefile_physics_easy();
                void get_data_user();
                void writefile_physics_intermediate();
                void writefile_physics_difficult();
                void writefile_chemistry_easy();
                void writefile_chemistry_intermediate();
                void writefile_chemistry_difficult();
                void writefile_biology_easy();
                void writefile_biology_intermediate();
                void writefile_biology_difficult();
                void pretty_printing();
                void question_pattern();
                void no_of_questions_user();
                void easy_phy_readfile();
                void easy_chem_readfile();
                void easy_bio_readfile();
                void create_question_paper();
                void no_of_questions();
                void check_access();
                void welcome_screen();
                void main_menu();
            }ques;//end of exam

void exam::welcome_screen(){
    cout<<"                                  WELCOME TO\n";
    cout<<"                            QUESTION PAPER GENERATOR\n";
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout<<"Press any key to continue";
    getch();
}

void exam::pretty_printing(){
    system("cls");
    cout<<"                             Banana Public School  \n";
    cout<<"                            Midterm Question Paper \n";
    cout<<"Name:                                                                                 Class:\n\n";
}

void exam::get_data_user(){
    int i;
    for(i=0; i<strlen(expsub); i++)
    {
        expsub[i] = tolower(expsub[i]);
    }
    cout<<"\nEnter difficulty level of questions: ";
    cin>>diff_level;
    //int i;
    for(i=0; i<strlen(diff_level); i++)
    {
        diff_level[i] = tolower(diff_level[i]);
    }
}

void exam::check_access(){
    system("cls");
    char check;
    char subject[20];
    cout<<"Are you an expert? (Y - yes)\n";
    cin>>check;
    if(check == 'y' || check == 'Y')
    {
        cout<<"Enter subject you would like edit the question bank in \n";
        cin>>expsub;
        char pin[100];
        int k=0;
        if(strcmpi(expsub,"physics")==0)
        {
            cout<<"Enter  password : ";
            while(pin[k-1]!='\r')
            {
                pin[k]=getch();
                if(pin[k-1]!='\r')
                {
                    cout<<"*";
                }
                k++;
            }
            pin[k-1]='\0';
            if(strcmpi(pin,"banana_p")==0)
            {
                onlyphy();
            }
            else
            {
                cout<<"Access Denied. \n";
                cout<<"Thank you for using our software!";
            }
        }
        else if(strcmpi(expsub,"chemistry")==0)
        {
            cout<<"Enter  password : ";
            while(pin[k-1]!='\r')
            {
                pin[k]=getch();
                if(pin[k-1]!='\r')
                {
                    cout<<"*";
                }
                k++;
            }
            pin[k-1]='\0';
            if(strcmpi(pin,"banana_c")==0)
            {
                onlychem();
            }
            else
            {
                cout<<"Access Denied. \n";
                cout<<"Thank you for using our software!";
            }
        }
        else if(strcmpi(expsub,"biology")==0)
        {
            cout<<"Enter  password : ";
            while(pin[k-1]!='\r')
            {
                pin[k]=getch();
                if(pin[k-1]!='\r')
                {
                    cout<<"*";
                }
                k++;
            }
            pin[k-1]='\0';
            if(strcmpi(pin,"banana_b")==0)
            {
                onlybio();
            }
            else
            {
                cout<<"Access Denied. \n";
                cout<<"Thank you for using our software!";
            }
        }

        else
        {
            cout<<"Access Denied. \n";
            cout<<"Thank you for using our software!";
        }
    }
    else
    {
        cout<<"Access Denied. \n";
        cout<<"Thank you for using our software!";
    }
}

void exam::no_of_questions(){
    system("cls");
    cout<<"Enter subject: ";
    cin>>subject;

    int i;
    for(i=0; i<strlen(subject); i++)
    {
        subject[i] = tolower(subject[i]);
    }
}

void exam::question_pattern(){
    cout<<"Enter number of easy questions: ";
    cin>>easy;
    cout<<"Enter number of intermediate questions: ";
    cin>>intermediate;
    cout<<"Enter number of difficult questions: ";
    cin>>difficult;

    n_questions = easy + intermediate + difficult;
}

void exam::no_of_questions_user()
{
    int n_questions_user;
    cout<<"How many questions do you want to enter? ";
    cin>>n_questions_user;
}



void exam::easy_phy_readfile()
{
    cout<<"Easy\n";

    fstream fin("physics_easy.txt", ios::in);
    char question[500], ch;

    for(int i=0;  i<easy; i++)
    {
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
        fin1.get(question1, 500);
        cout<<question1<<"\n";
        fin1.get(ch1);
    }

    fin1.close();

    cout<<"Difficult\n";
    fstream fin12("physics_difficult.txt", ios::in);

    char question12[500], ch12;

    for(int i=0;  i<difficult; i++)
    {
        fin12.get(question12, 500);
        cout<<question12<<"\n";
        fin12.get(ch12);
    }

    fin12.close();
}

void exam::easy_chem_readfile(){
    cout<<"Easy\n";

    fstream fin("Chemistry_easy.txt", ios::in);
    char question[500], ch;

    for(int i=0;  i<easy; i++)
    {
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
        fin1.get(question1, 500);
        cout<<question1<<"\n";
        fin1.get(ch1);
    }

    fin1.close();

    cout<<"Difficult\n";

    fstream fin12("chemistry_difficult.txt", ios::in);
    char question12[500], ch12;

    for(int i=0;  i<difficult; i++)
    {
        fin12.get(question12, 500);
        cout<<question12<<"\n";
        fin12.get(ch12);
    }

    fin12.close();
}

void exam::easy_bio_readfile(){
    cout<<"Easy\n";

    fstream fin("Biology_easy.txt", ios::in);
    char question[500], ch;

    for(int i=0;  i<easy; i++)
    {
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
        fin1.get(question1, 500);
        cout<<question1<<"\n";
        fin1.get(ch1);
    }

    fin1.close();

    cout<<"Difficult\n";

    fstream fin12("biology_difficult.txt", ios::in);
    char question12[500], ch12;

    for(int i=0;  i<difficult; i++)
    {
        fin12.get(question12, 500);
        cout<<question12<<"\n";
        fin12.get(ch12);
    }

    fin12.close();
}


void exam::writefile_physics_easy()
{
        fstream fout("physics_easy.txt", ios::out|ios::app);
        char qs[100];
        int nqs;
        cout<<"Enter number of questions you want to enter: ";
        cin>>nqs;
        for(int i = 0; i < nqs; i++){
            cout<<"Enter question "<<i + 1<<": ";
            fflush(stdin);
            gets(qs);
            n_physics_easy ++;
            fout<<"\n"<<n_physics_easy<<".  "<<qs;
        }
        fout.close();
}

void exam::writefile_physics_intermediate()
{
        fstream fout("physics_intermediate.txt", ios::out|ios::app);
        char qs[100];
        int nqs;
        cout<<"Enter number of questions you want to enter: ";
        cin>>nqs;
        for(int i = 0; i < nqs; i++){
            cout<<"Enter question "<<i + 1<<": ";
            fflush(stdin);
            gets(qs);
            n_physics_intermediate ++;
            fout<<"\n"<<n_physics_intermediate<<".  "<<qs;
        }
        fout.close();
}

void exam::writefile_physics_difficult()
{
        fstream fout("physics_difficult.txt", ios::out|ios::app);
        char qs[100];
        int nqs;
        cout<<"Enter number of questions you want to enter: ";
        cin>>nqs;
        for(int i = 0; i < nqs; i++){
            cout<<"Enter question "<<i + 1<<": ";
            fflush(stdin);
            gets(qs);
            n_physics_difficult ++;
            fout<<"\n"<<n_physics_difficult<<".  "<<qs;
        }
        fout.close();
}

void exam::writefile_chemistry_easy()
{
        fstream fout("chemistry_easy.txt", ios::out|ios::app);
        char qs[100];
        int nqs;
        cout<<"Enter number of questions you want to enter: ";
        cin>>nqs;
        for(int i = 0; i < nqs; i++){
            cout<<"Enter question "<<i + 1<<": ";
            fflush(stdin);
            gets(qs);
            n_chemistry_easy ++;
            fout<<"\n"<<n_chemistry_easy<<".  "<<qs;
        }
        fout.close();
}

void exam::writefile_chemistry_intermediate()
{
        fstream fout("chemistry_intermediate.txt", ios::out|ios::app);
        char qs[100];
        int nqs;
        cout<<"Enter number of questions you want to enter: ";
        cin>>nqs;
        for(int i = 0; i < nqs; i++){
            cout<<"Enter question "<<i + 1<<": ";
            fflush(stdin);
            gets(qs);
            n_chemistry_intermediate ++;
            fout<<"\n"<<n_chemistry_intermediate<<".  "<<qs;
        }
        fout.close();
}

void exam::writefile_chemistry_difficult()
{
        fstream fout("chemistry_difficult.txt", ios::out|ios::app);
        char qs[100];
        int nqs;
        cout<<"Enter number of questions you want to enter: ";
        cin>>nqs;
        for(int i = 0; i < nqs; i++){
            cout<<"Enter question "<<i + 1<<": ";
            fflush(stdin);
            gets(qs);
            n_chemistry_difficult ++;
            fout<<"\n"<<n_chemistry_difficult<<".  "<<qs;
        }
        fout.close();
}

void exam::writefile_biology_easy()
{
        fstream fout("biology_easy.txt", ios::out|ios::app);
        char qs[100];
        int nqs;
        cout<<"Enter number of questions you want to enter: ";
        cin>>nqs;
        for(int i = 0; i < nqs; i++){
            cout<<"Enter question "<<i + 1<<": ";
            fflush(stdin);
            gets(qs);
            n_biology_easy ++;
            fout<<"\n"<<n_biology_easy<<".  "<<qs;
        }
        fout.close();
}

void exam::writefile_biology_intermediate()
{
        fstream fout("biology_intermediate.txt", ios::out|ios::app);
        char qs[100];
        int nqs;
        cout<<"Enter number of questions you want to enter: ";
        cin>>nqs;
        for(int i = 0; i < nqs; i++){
            cout<<"Enter question "<<i + 1<<": ";
            fflush(stdin);
            gets(qs);
            n_biology_intermediate ++;
            fout<<"\n"<<n_biology_intermediate<<".  "<<qs;
        }
        fout.close();
}


void exam::writefile_biology_difficult()
{
        fstream fout("biology_difficult.txt", ios::out|ios::app);
        char qs[100];
        int nqs;
        cout<<"Enter number of questions you want to enter: ";
        cin>>nqs;
        for(int i = 0; i < nqs; i++){
            cout<<"Enter question "<<i + 1<<": ";
            fflush(stdin);
            gets(qs);
            n_biology_difficult ++;
            fout<<"\n"<<n_biology_difficult<<".  "<<qs;
        }
        fout.close();
}

void exam::onlyphy(){
    get_data_user();
    if((strcmp(diff_level, "easy")== 0)){
        writefile_physics_easy();
    }
    else if((strcmp(diff_level, "intermediate")== 0)){
        writefile_physics_intermediate();
    }

    else if((strcmp(diff_level, "difficult")== 0)){
        writefile_physics_difficult();
    }
}

void exam::onlychem(){
    get_data_user();
    if((strcmp(diff_level, "easy")== 0)){
        writefile_chemistry_easy();
    }
    else if((strcmp(diff_level, "intermediate")== 0)){
        writefile_chemistry_intermediate();
    }
    else if((strcmp(diff_level, "difficult")== 0)){
        writefile_chemistry_difficult();
    }
}

void exam::onlybio(){
    get_data_user();
    if((strcmp(expsub, "biology")== 0)&& (strcmp(diff_level, "easy")== 0)){
        writefile_biology_easy();
    }
    else if((strcmp(expsub, "biology")== 0)&& (strcmp(diff_level, "intermediate")== 0)){
        writefile_biology_intermediate();
    }
    else if((strcmp(expsub, "biology")== 0)&& (strcmp(diff_level, "difficult")== 0)){
        writefile_biology_difficult();
    }

}

void exam::create_question_paper(){
    no_of_questions();
    question_pattern();
    pretty_printing();

    if(strcmp("physics", subject) == 0){
        easy_phy_readfile();
        getch();
    }

    else if(strcmp("chemistry", subject)== 0){
        cout<<"Chem";
        easy_chem_readfile();
        getch();
    }

    else if(strcmp("biology", subject)== 0){
        cout<<"Bio";
        easy_bio_readfile();
        getch();
    }

    else{
        cout<<"Invalid input";
        getch();
    }

}

void exam::main_menu(){


        char choice;
        char cont = 'y';
        do
        {
            system("cls");
            cout<<"\n\n\nQUESTION PAPER GENERATOR";
            cout<<"\n\n1. Generate a question paper.";
            cout<<"\n\n2. Modify the question bank";
            cout<<"\n\n3. Exit.";
            cout<<"\n\nEnter your choice: \n";
            cin>>choice;
            switch(choice)
            {
                case '1':
                          while(cont == 'y' || cont == 'Y')
                            {
                                create_question_paper();
                                cout<<"\nDo you want to create another question paper? (y/n)"<<endl;
                                cin>>cont;
                            }
                          break;
                case '2': check_access();
                          break;
                case '3': //function to exit program
                          exit(0);
                default : cout<<"\nInvalid choice.\nPress any key to continue.\n";
                          getch();
                          break;
            } //end of switch case
        } while(1);
        return;



}

int main()
{
    ques.main_menu();
}
