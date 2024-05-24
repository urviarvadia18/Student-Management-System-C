#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <conio.h>
#include <iomanip>
#include<windows.h>
#include<fstream>

using namespace std;

string arr1[50],arr2[50],arr3[50],arr4[50],arr5[50],arr6[50],arr7[50],arr8[50],arr9[50],arr10[50],arr11[50];
int total=0;

void enter()
{
          int ch=0;
          cout<<"How many students do you want to enter?"<<endl;
          cin>>ch;

             if(total==0)
             {
                total=ch+total;
                for(int i=0;i<ch;i++)
               {

				cout<<"\n\t\tEnter the Data of student: "<<i+1<<endl<<endl;

				cin.ignore();
                cout<<"Enter name= ";
                getline(cin,arr1[i]);

                cout<<"Enter course= ";
                cin>>arr2[i];

				cout<<"Enter Roll no= ";
                cin>>arr3[i];

                cout<<"Enter Semester= ";
                cin>>arr4[i];

				cout<<"Enter class= ";
                cin>>arr5[i];

				cout<<"Enter 10th PR=";
				cin>>arr6[i];

                cout<<"Enter 12th PR=";
				cin>>arr7[i];

                cout<<"Enter ACPC rank=";
				cin>>arr8[i];

                cout<<"Enter JEE AIR=";
				cin>>arr9[i];

				cout<<"Enter Email address=";
				cin>>arr10[i];

				cout<<"Enter contact= ";
				cin>>arr11[i];
               }
             }
	    	else
             {
                for(int i=total;i<ch+total;i++)
             {
                 cout<<"\n\t\tEnter the Data of student "<<i+1<<endl<<endl;

                        cin.ignore();
                        cout<<"Enter name= ";
                        getline(cin,arr1[i]);

                        cout<<"Enter course= ";
                        cin>>arr2[i];

                        cout<<"Enter Roll no= ";
                        cin>>arr3[i];

                        cout<<"Enter Semester= ";
                        cin>>arr4[i];

                        cout<<"Enter class= ";
                        cin>>arr5[i];

                        cout<<"Enter 10th PR=";
                        cin>>arr6[i];

                        cout<<"Enter 12th PR=";
                        cin>>arr7[i];

                        cout<<"Enter ACPC rank=";
                        cin>>arr8[i];

                        cout<<"Enter JEE AIR=";
                        cin>>arr9[i];

                        cout<<"Enter Email address=";
                        cin>>arr10[i];

                        cout<<"Enter contact= ";
                        cin>>arr11[i];
                }
             total=ch+total;
            }
            cout<<"\nData has been saved successfully";
                        for(int i=0;i<6;i++)
                          {
                              cout<<".";
                              Sleep(500);
                          }

}

void show()
{
     if(total==0)
     {
       cout<<"No data is entered"<<endl;
     }
     else
        {
           for(int i=0;i<total;i++)
           {

	    		cout<<"\n\t\tData of Student "<<i+1<<endl<<endl;

	    		cout<<"Name= "<<arr1[i]<<endl;
                cout<<"Course= "<<arr2[i]<<endl;
                cout<<"Roll no= "<<arr3[i]<<endl;
	    		cout<<"Semester= "<<arr4[i]<<endl;
                cout<<"Class= "<<arr5[i]<<endl;
                cout<<"10th PR= "<<arr6[i]<<endl;
                cout<<"12th PR= "<<arr7[i]<<endl;
                cout<<"ACPC rank="<<arr8[i]<<endl;
                cout<<"JEE AIR= "<<arr9[i]<<endl;
                cout<<"Email= "<<arr10[i]<<endl;
	    		cout<<"Contact= "<<arr11[i]<<endl;
            }
        }
        ofstream cout("record.txt");
        {
            for(int i=0;i<total;i++)
           {

	    		cout<<"\n\t\tData of Student "<<i+1<<endl<<endl;

	    		cout<<"Name= "<<arr1[i]<<endl;
                cout<<"Course= "<<arr2[i]<<endl;
                cout<<"Roll no= "<<arr3[i]<<endl;
	    		cout<<"Semester= "<<arr4[i]<<endl;
                cout<<"Class= "<<arr5[i]<<endl;
                cout<<"10th PR= "<<arr6[i]<<endl;
                cout<<"12th PR= "<<arr7[i]<<endl;
                cout<<"ACPC rank="<<arr8[i]<<endl;
                cout<<"JEE AIR= "<<arr9[i]<<endl;
                cout<<"Email= "<<arr10[i]<<endl;
	    		cout<<"Contact= "<<arr11[i]<<endl;
            }
        }
        cout.close();
}

void searchrollno()
{
    if(total==0)
    {
       cout<<"No data is entered"<<endl;
    }
    else
    {
       string rollno;

				cout<<"\t\tEnter the roll no of student:";
                cin>>rollno;

                for(int i=0;i<total;i++)
                {
                    if(rollno==arr3[i])
                    {
                        cout<<"Name= "<<arr1[i]<<endl;
                        cout<<"Course= "<<arr2[i]<<endl;
                        cout<<"Roll no= "<<arr3[i]<<endl;
                        cout<<"Semester= "<<arr4[i]<<endl;
                        cout<<"Class= "<<arr5[i]<<endl;
                        cout<<"10th PR= "<<arr6[i]<<endl;
                        cout<<"12th PR= "<<arr7[i]<<endl;
                        cout<<"ACPC rank= "<<arr8[i]<<endl;
                        cout<<"JEE AIR= "<<arr9[i]<<endl;
                        cout<<"Email= "<<arr10[i]<<endl;
                        cout<<"Contact= "<<arr11[i]<<endl;
                    }
                 }
      }
}

void searchname()
{
    if(total==0)
    {
       cout<<"No data is entered"<<endl;
    }
    else
    {
       string name;

				cout<<"\t\tEnter the name of student:";
                cin>>name;

                for(int i=0;i<total;i++)
                {
                    if(name==arr1[i])
                    {
                        cout<<"Name= "<<arr1[i]<<endl;
                        cout<<"Course= "<<arr2[i]<<endl;
                        cout<<"Roll no= "<<arr3[i]<<endl;
                        cout<<"Semester= "<<arr4[i]<<endl;
                        cout<<"Class= "<<arr5[i]<<endl;
                        cout<<"10th PR= "<<arr6[i]<<endl;
                        cout<<"12th PR= "<<arr7[i]<<endl;
                        cout<<"ACPC rank= "<<arr8[i]<<endl;
                        cout<<"JEE AIR= "<<arr9[i]<<endl;
                        cout<<"Email= "<<arr10[i]<<endl;
                        cout<<"Contact= "<<arr11[i]<<endl;
                    }
                 }
      }
}

void update()
{
     if(total==0)
     {
        cout<<"No data is entered"<<endl;
     }
     else
    {
         string rollno;

				cout<<"Enter the roll no of student which you want to update:";
                cin>>rollno;

                  for(int i=0;i<total;i++)
                  {
                     if(rollno==arr3[i])
                     {

						cout<<"\n\t\tPrevious data"<<endl<<endl;
                        cout<<"\t\tData of Student "<<i+1<<endl;

                        cout<<"Name= "<<arr1[i]<<endl;
                        cout<<"Course= "<<arr2[i]<<endl;
                        cout<<"Roll no="<<arr3[i]<<endl;
                        cout<<"Semester= "<<arr4[i]<<endl;
                        cout<<"Class= "<<arr5[i]<<endl;
                        cout<<"10th PR= "<<arr6[i]<<endl;
                        cout<<"12th PR= "<<arr7[i]<<endl;
                        cout<<"ACPC rank= "<<arr8[i]<<endl;
                        cout<<"JEE AIR= "<<arr9[i]<<endl;
                        cout<<"Email= "<<arr10[i]<<endl;
                        cout<<"Contact= "<<arr11[i]<<endl;

                        cout<<"\n\t\tEnter new data"<<endl<<endl;

                        cin.ignore();
                        cout<<"Enter name= ";
                        getline(cin,arr1[i]);

                        cout<<"Enter course= ";
                        cin>>arr2[i];

                        cout<<"Enter Roll no= ";
                        cin>>arr3[i];

                        cout<<"Enter Semester= ";
                        cin>>arr4[i];

                        cout<<"Enter class= ";
                        cin>>arr5[i];

                        cout<<"Enter 10th PR=";
                        cin>>arr6[i];

                        cout<<"Enter 12th PR=";
                        cin>>arr7[i];

                        cout<<"Enter ACPC rank=";
                        cin>>arr8[i];

                        cout<<"Enter JEE AIR=";
                        cin>>arr9[i];

                        cout<<"Enter Email address=";
                        cin>>arr10[i];

                        cout<<"Enter contact= ";
                        cin>>arr11[i];
                      }
                  }
        }
        cout<<"\nYour data has been Updataed";
                        for(int i=0;i<6;i++)
                          {
                              cout<<".";
                              Sleep(500);
                          }
}

void deleterecord()
{
            if(total==0)
            {
               cout<<"No data is entered"<<endl;
            }
            else
            {
               int a;

                   cout<<"\t\tPress 1 to delete all record"<<endl;
                   cout<<"\t\tPress 2 to delete specific record"<<endl;
                   cin>>a;

                  if(a==1)
                  {
                      total=0;
                      cout<<"\t\tAll record is deleted..!!";
                      for(int i=0;i<6;i++)
                          {
                              cout<<".";
                              Sleep(500);
                          }
                  }
                  else if(a==2)
                  {
                    string rollno;

                    cout<<"Enter the roll no of student which you wanted to delete:";
                    cin>>rollno;

                      for(int i=0;i<total;i++)
                      {
                         if(rollno==arr3[i])
                         {
                            for(int j=i;j<total;j++)
                            {
                                arr1[j]=arr1[j+1];
                                arr2[j]=arr2[j+1];
                                arr3[j]=arr3[j+1];
                                arr4[j]=arr4[j+1];
                                arr5[j]=arr5[j+1];
                                arr6[j]=arr6[j+1];
                                arr7[j]=arr7[j+1];
                                arr8[j]=arr8[j+1];
                                arr9[j]=arr9[j+1];
                                arr10[j]=arr10[j+1];
                                arr11[j]=arr11[j+1];
                            }
                       total--;
                       cout<<"\nYour required record is deleted";
                        for(int i=0;i<6;i++)
                          {
                              cout<<".";
                              Sleep(500);
                          }
                    }
                }
            }
            else
            {
               cout<<"Invalid input";
            }
     }
}

main()
{
        cout<<"\t\t\t-------------------------------------------------"<<endl;
        cout<<"\t\t\t\t    Student Management System:"<<endl;
        cout<<"\t\t\t-------------------------------------------------"<<endl<<endl;

	int a=0,i=0;
    char uname[10],c=' ';
    char pword[10],code[10];
    char user[10]="user";
    char pass[10]="pass";
    do
{

    printf("\n\n\t\t\t____________________ LOGIN _____________________  ");

    printf("\n\n\n\t\t                  ENTER USERNAME:=");
	scanf("%s", &uname);
	printf("\n\t\t                  ENTER PASSWORD:=");

	while(i<10)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}

	pword[i]='\0';
	i=0;

    if(strcmp(uname,"user")==0 && strcmp(pword,"pass")==0)
	{
	printf("  \n\n\n\t\t       WELCOME TO STUDENT MANAGEMENT SYSTEM !!!! LOGIN IS SUCCESSFUL");
	for(int i=0;i<6;i++)
    {
        cout<<".";
        Sleep(500);
    }

	printf("\n\n\n\t\t\t\tPress enter key to continue");
    for(int i=0;i<6;i++)
       {
           cout<<".";
           Sleep(500);
       }
	getch();
	break;
	}

	else
	{
		printf("\n\n\t\t        SORRY !!!!  LOGIN IS UNSUCESSFUL");
		for(int i=0;i<6;i++)
      {
          cout<<".";
          Sleep(500);
      }
		a++;
         getch();
     }
}

	while(a<=2);
	if (a>2)
	{
		printf("\n\n\t\t\t  Sorry you have entered the wrong username and password many times");
		for(int i=0;i<6;i++)
       {
           cout<<".";
           Sleep(500);
       }
        getch();

		system("cls");
		exit(0);
}
     system("cls");
     int value;
     while(true)
     {


        cout<<"\n\n\t\t\t-------------------------------------------------"<<endl;
        cout<<"\t\t\t\t    Student Management System:"<<endl;
        cout<<"\t\t\t-------------------------------------------------"<<endl<<endl;

         cout<<"\t\t\t___________________________________________________"<<endl;
         cout<<"\t\t\t___________________________________________________"<<endl;

         cout<<"\n\t\t\t\t||\t       login        \t\t||"<<endl;
         cout<<"\t\t\t\t||\tPress 1 to enter data   \t||"<<endl;
         cout<<"\t\t\t\t||\tPress 2 to show data   \t\t||"<<endl;
         cout<<"\t\t\t\t||\tPress 3 to search data Rollno. \t||"<<endl;
         cout<<"\t\t\t\t||\tPress 4 to search data Name  \t||"<<endl;
	     cout<<"\t\t\t\t||\tPress 5 to update data   \t||"<<endl;
	     cout<<"\t\t\t\t||\tPress 6 to delete data   \t||"<<endl;
	     cout<<"\t\t\t\t||\tPress 7 to exit   \t\t||"<<endl;

	     cout<<"\t\t\t___________________________________________________"<<endl;
	     cout<<"\t\t\t___________________________________________________"<<endl;
	     cout<<"\nEnter Your Choice:";

	     cin>>value;


	     switch(value)
     {

          case 1:

              {
                cout<<"\n\t\t\t__________________Enter Student Data__________________\n\n\n";
                 enter();
              break;
              }

          case 2:

              {
                cout<<"\n\t\t\t___________________Show All  Student Data___________________\n\n\n";
              show();
              break;
              }

           case 3:

               {
                cout<<"\n\t\t\t__________________Search Student by Rollno.__________________\n\n\n";
               searchrollno();
               break;
               }

            case 4:

               {
                cout<<"\n\t\t\t__________________Search Student by Name__________________\n\n\n";
               searchname();
               break;
               }

           case 5:

               {
                cout<<"\n\t\t\t__________________Update Student Data__________________\n\n\n";
               update();
               break;
               }

           case 6:

               {
                cout<<"\n\t\t\t_________________Delete Student Data_________________\n\n\n";

               deleterecord();
               break;
               }

           case 7:
                {
                cout<<"\n\t\t\t__________________Thank you___________________\n\n\n";
               exit(0);
               break;
               }

          default:
                 cout<<"Invalid input"<<endl;
                 break;
        }
     }
}

