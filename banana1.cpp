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

class exam  {
                int n_questions;
                char subject[30];
                int intermediate;
                int difficult;
                int easy;
                void writefile();
            public:
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

void exam::check_access(){
    system("cls");
    char check;
    char subject[20];
    cout<<"Are you an expert? (Y - yes)\n";
    cin>>check;
    if(check == 'y' || check == 'Y')
    {
        cout<<"Enter subject you would like edit the question bank in \n";
        cin>>subject;
        char pin[100];
        int k=0;
        if(strcmpi(subject,"physics")==0)
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
                cout<<"call writefile here";
            }
            else
            {
                cout<<"Access Denied. \n";
                cout<<"Thank you for using our software!";
            }
        }
        else if(strcmpi(subject,"chemistry")==0)
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
                cout<<"call writefile here";
            }
            else
            {
                cout<<"Access Denied. \n";
                cout<<"Thank you for using our software!";
            }
        }
        else if(strcmpi(subject,"biology")==0)
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
                cout<<"call writefile here";
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

    /*char pin[100];
    int k=0;
    cout<<"Enter  password : ";
    while(pin[k-1]!='\r') {
        pin[k]=getch();
        if(pin[k-1]!='\r') {
            cout<<"*";
        }
        k++;
    }
    pin[k-1]='\0';
    cout<<"\nYou entered : "<<pin<<endl;
    */
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
    //system("cls");
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


void exam::writefile()
{
    cout<<"Accepting data to write into the file \n";

    char question[500];

    fstream fout("Physics.txt", ios::out);

    for(int i=0; i<n_questions; i++)
    {
        cout<<"question "<<(i+1)<<": ";
        fflush(stdin);
        gets(question);
        fout<<question<<"\n";
    }

}

void exam::create_question_paper(){
    //system("cls");
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

int main()
{
    ques.welcome_screen();
    ques.no_of_questions();
    ques.create_question_paper();
    ques.check_access();
}

/*
void exam::check_access(){
    system("cls");
    char pin[100];
    int k=0;
    cout<<"Enter  password : ";
    while(pin[k-1]!='\r') {
        pin[k]=getch();
        if(pin[k-1]!='\r') {
            cout<<"*";
        }
        k++;
    }
    pin[k-1]='\0';
    cout<<"\nYou entered : "<<pin<<endl;
}
*/
