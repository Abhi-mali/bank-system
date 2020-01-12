       // abhiii mali codes:



#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>


class Bank
{

    private:
      long int acnum;
      long int acbalance;
      char custname[20];
      char actype[8];
       int password;
    public:

      void accept()
      {
       //	int password;
	cout<<"\n\n enter your bank account no.\t";
	cin>>acnum;
	cout<<"\n enter your name :\t";
	cin>>custname;
	cout<<"\n enter your account type :\t";
	cin>>actype;
	cout<<"\nenter your ac balance:\t\t";
	cin>>acbalance;
	cout<<"\n enter your password :\t\t";
	cin>>password;

      }

      void withdrawal()
      {
	long  int wdamount;
	  cout<<"\n enter the amount which you want to withdraw : \n";
	  cin>>wdamount;

	  if(wdamount>acbalance)
	  {
	    cout<<" low balance \n\n";
	  }
	  else
	  {
	    acbalance=acbalance-wdamount;
	    cout<<"\n total amount of "<<wdamount<<"has been deducted from your accont ";
	    cout<<"\n available balance is :"<<acbalance;

	  }
      }
     void deposite()
     {
       long  int dpamount;
       cout<<"\n enter the amouunt which you want to deposite :\n";
       cin>>dpamount;
       acbalance=acbalance+dpamount;
       cout<<" total amount of "<<dpamount<<" created into your acccount ";
       cout<<"\n available balance : \t"<<acbalance;

       }

     void display()
     {
       cout<<"______________________________________________________________________\n";
       cout<<"ACCOUNT NO.\t\t ACCOUNT NAME \t\t ACCONT TYPE \t\t BALANCE \n";
       cout<<acnum<<"\t\t\t"<<custname<<"\t\t"<<actype<<"\t\t"<<acbalance<<"\n";
       cout<<"_____________________________________________________________________\n";
     }
      void modify()

   {    int pass ;
	char yn;
	long int acnumber ;
     //	int password;

       cout<<" enter your password :\n\n";
	cin>>pass ;
	if(password==pass)
	{

	cout<<"\n\n enter your bank account no.\t";
	cin>>acnumber;
	if(acnumber==acnum)
	{
	cout<<"\n enter your new name :\t";
	cin>>custname;
	cout<<"\n enter your new  account type :\t";
	cin>>actype;
	cout<<" do you want to change password  if yes press y :\n";
	cin>>yn;
		if(yn=='y')
		{
		  cout<<" enter your new pass :\n";
		  cin>>password ;
		}
	 }
	 else
	 {
	 cout<<"\n\n\t INCORRECT AC NO. \n";
	 }
	}
	else
	{
	 cout<<"\n\t\t ****** incorrect password ******* : \n\n";
	 }
   }
 }; //  end of  class bank


   void main()
   {
      char branch[10];
      int ch;
      int k;
      char m;
      Bank b;
      clrscr();
      cout<<" enter your branch name :\n";
      cin>>branch;
      clrscr();

      cout<<"\n\n\t\t WELCOME TO BANK OF PUNE  BRANCH :  "<<branch;
      b.accept();
      clrscr();
      do
      {
	 clrscr();
	 cout<<"\n\t ENTER YOUR CHOICE : \n 1. WITHDRAWAL\n 2.DEPOSITE \n 3.ACCOUNT INFO\n 4.EXIT ";
	 cin>>ch;

	 switch(ch)
	 {
	  case 1: b.withdrawal();
			break;
	  case 2: b.deposite();
		  break;
	  case 3: b.display();
		cout<<"\n\t DO YOU WANT TO MODIFY AC INFO : \n";
		cout<<"\t IF YES PRESS Y/y else press any other key : \n";
		cin>>m;
		if(m=='Y' || m=='y')
		{
		 b.modify();
		}
		  break;
	  case 4:
		     exit(0);

		    break;
	 default:
		      cout<<" error ";
	 }

      cout<<"\n\n\n DO YOU WANT TO CONTINUE : \n\n";
      cout<<" IF YES PRESS 5 \n";
      cin>>k;
      }while(k==5);
   getch();

   }



