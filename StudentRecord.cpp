#include <iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
void Header(void)
{
        cout<<"\n\n\t\t-------------------------------------------\n";
        cout<<"\t\t\t    STUDENT RECORD SYSTEM\n";
        cout<<"\t\t-------------------------------------------\n";

}
void MainMenu(void)
{

}

class StudentRecord
{
    private:
    int count,i;
    char name[100];
    char *q;
    char *NameofStudent[100];
    int RollNumber[100];
    float Comp[100],Sci[100],Mth[100],Eng[100],Pun[100],TOTAL[100],Per[100];

    public:
    StudentRecord()
    {
        count=0;
    }
    void MainMenu(void)
    {
        Header();
        char choice;
        do
        {
        cout<<"\n\n\t\t\t\t  MAIN MENU\n";
        cout<<"\t\t-------------------------------------------\n\n";

        cout<<"\t\t\t    1.)RESULT MENU\n";
        cout<<"\t\t\t    2.)ENTRY/EDIT MENU\n";
        cout<<"\t\t\t    3.)EXIT\n";
        cout<<"\n\t\t\t    Enter Choice : ";
        cin>>choice;
        system("clear");
            switch(choice)
            {
                case '1':
                ResultMenu();
                break;
                case '2':
                EntryMenu();
                break;
            }

        }while(choice!='3');
    }
    void ResultMenu(void);
    void EntryMenu(void);
    void Create(void);
    void DisplayAll(void);
    void Search(void);
    void Modify(void);
    void Delete(void);

};


    void StudentRecord::EntryMenu()
    {

        char choice;
            do
            {
                Header();

                cout<<"\n\n\t\t\t\t  ENTRY MENU\n";
                cout<<"\t\t-------------------------------------------\n\n";

                cout<<"\t\t\t    1.)CREATE STUDENT RECORD\n";
                cout<<"\t\t\t    2.)DISPLAY ALL STUDENT'S RECORDS\n";
                cout<<"\t\t\t    3.)SEARCH RECORD\n";
                cout<<"\t\t\t    4.)MODIFY RECORD\n";
                cout<<"\t\t\t    5.)DELETE RECORD\n";
                cout<<"\t\t\t    6.)MAIN MENU\n";
                cout<<"\n\t\t\t    Enter Choice : ";
                cin>>choice;
                system("clear");
                switch(choice)
                {
                    case '1':
                    Create();
                    break;
                    case '2':
                    DisplayAll();
                    break;
                    case '3':
                    Search();
                    break;
                    case '4':
                    Modify();
                    break;
                    case '5':
                    Delete();
                    break;
                    case '6':
                    MainMenu();
                    break;
                }

            }while(choice!='3');

    }
        void StudentRecord::ResultMenu()
        {
        }
            void StudentRecord::Create()
            {
                Header();
                cout<<"\n\n\t\t\t\t  Create Record\n";
                cout<<"\t\t-------------------------------------------\n\n";
                cout<<"\t\tEnter the Roll Number : ";
                (cin>>RollNumber[count]).ignore();
                cout.flush();
                cout<<"\t\tEnter the Name : ";
                cin.getline(name,100);
                q=(char*)malloc(strlen(name)+1);
                strcpy(q,name);
                NameofStudent[count]=q;
                cout<<"\t\tEnter Marks in Maths : ";
                cin>>Mth[count];
                    if(Mth[count]<=0||Mth[count]>100)
                    {
                        do
                        {
                            cout<<"\t\tEnter Marks in Maths Again : ";
                            cin>>Mth[count];

                        }while(Mth[count]<=0||Mth[count]>100);
                    }
                cout<<"\t\tEnter Marks in Computer : ";
                cin>>Comp[count];
                    if(Comp[count]<=0||Comp[count]>100)
                    {
                        do
                        {
                            cout<<"\t\tEnter Marks in Computer Again : ";
                            cin>>Comp[count];

                        }while(Comp[count]<=0||Comp[count]>100);
                    }
                cout<<"\t\tEnter Marks in Science : ";
                cin>>Sci[count];
                    if(Sci[count]<=0||Sci[count]>100)
                    {
                        do
                        {
                            cout<<"\t\tEnter Marks in Science Again : ";
                            cin>>Sci[count];

                        }while(Sci[count]<=0||Sci[count]>100);
                    }
                cout<<"\t\tEnter Marks in English : ";
                cin>>Eng[count];
                    if(Eng[count]<=0||Eng[count]>100)
                    {
                        do
                        {
                            cout<<"\t\tEnter Marks in English Again : ";
                            cin>>Eng[count];

                        }while(Eng[count]<=0||Eng[count]>100);
                    }
                cout<<"\t\tEnter Marks in Punjabi : ";
                (cin>>Pun[count]).ignore();
                    if(Pun[count]<=0||Pun[count]>100)
                    {
                        do
                        {
                            cout<<"\t\tEnter Marks in Punjabi Again : ";
                            (cin>>Pun[count]).ignore();

                        }while(Pun[count]<=0||Pun[count]>100);
                    }
                count++;
                cout<<"\n\n\tRecord Created\n\n";
                cin.get();
                system("clear");



            }
                void StudentRecord::DisplayAll()
                {
                    Header();
                    char a;
                    cout<<"\n\n\t\t\t\tDisplay Record\n";
                    cout<<"\t\t-------------------------------------------\n\n";
                    cout<<"\tNAME\tROLL NO\t   MT\tCP\tSC\tEN\tPN\tTOTAL\t%ge\n";
                    cout<<"\t---------------------------------------------------------------------\n";
                        for(i=0;i<count;i++)
                        {
                            TOTAL[i]=Mth[i]+Comp[i]+Sci[i]+Eng[i]+Pun[i];
                            Per[i]=((float)TOTAL[i]/500)*100;
                            cout<<"\t"<<NameofStudent[i]<<"\t"<<RollNumber[i]<<"\t"<<Mth[i]<<"\t"<<Comp[i]<<"\t"<<Sci[i]<<"\t"<<Eng[i]<<"\t"<<Pun[i]<<"\t"<<TOTAL[i]<<"\t"<<Per[i]<<"\n";
                        }
                        //cin.get(a);

                }
                    void StudentRecord::Search()
                    {
                    }
                        void StudentRecord::Modify()
                        {
                        }
                            void StudentRecord::Delete()
                            {
                            }
int main()
{
    class StudentRecord S;
    S.MainMenu();

    return 0;
}
