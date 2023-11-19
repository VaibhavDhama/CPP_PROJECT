#include <iostream> 
#include <string> 
#include <fstream> 
#include <cstdlib> //exit failure
#include <conio.h> //getch
#include <unistd.h> //sleep
using namespace std;
struct account
{
	char name[5],givendate[5],expirydate[5],pno[5],email[5],message[5];
	string address,city,designation,carname,carmake,carnumber,cnic ;
	double phone,ndays,cmodel;
}record;
void line()
{
	for(int i=1; i<=45; i++)
	{
		cout<<"*";
	}
	cout<<endl;
}
void login_employee()
{
																	//login data(id and password)
	string passwords= "v123";
	char ch;
	string passwordes="hello";
	string ids="vaibhav";
	string id;
	string ides="vaibhav";
	string password;
	cout<<"\n\n\t\t\t\tEnter ID:   ";
	cin>>id;
	cout<<"\t\t\t\tEnter Password: ";
	ch = _getch();
   while(ch != 13){//character 13 is enter
      password.push_back(ch);
      cout << '*';
      ch = _getch();
   }
	
	
	
	
	if (id==ids && password==passwords)
	{
		return;
	}
	else if (id==ides && password==passwordes)
	{
		return;
	}
	else
	{
		cout<<"\n\t\t\t\tIncorrect Password.";
		exit(EXIT_FAILURE);
	}
}
void search()   //search for cars
{
    
	return;
}
void listofcars()
{
																	//list of all cars
	ofstream myFile;
	myFile.open("customerinfo.txt",ios::app);
	int carprice[6];
	carprice[0]=5000;
	carprice[1]=8000;
	carprice[2]=10000;
	carprice[3]=25000;
	carprice[4]=20000;
	carprice[5]=6000;
	carprice[6]=40000;
	carprice[7]=9000;
	do
    {
    cout<< "\n\n\t\t\t\tChoose the car below:"<<endl;
    cout<<"\n\t\t\t\tList of Cars:";
			ifstream infile("carrecord.txt");
			string line;   
			int i=0; 
     		infile >> line;	
     		while (!infile.eof( ))     
     		{
				cout<<" \n\t\t\t";
				cout<<"\n\t\t\t\t\t"<<i+1<<". "<<line<<" "; //car make 
				infile >> line; 
				cout<<""<<line<<endl;  //car name
				infile >> line;
				cout<<"\t\t\t\t\t"<<line<<"\n"; //number plate
				infile >> line;
				cout<<"\t\t\t\t\t"<<"Price: "<<carprice[i]<<"\n"; 
				i++;
       		}
			infile.close();
	cout<< "\t\t\t\tEnter 8 to go back to Main Menu"<<endl<<endl;
    cout<< "\n\t\t\t\tOption(1-7): ";  
		cin >>record.cmodel;
		if(record.cmodel == 8)						//return to main
		{
			system("cls");
			return;
		}
		/*
    cout<< "Given date(dd/mm/yyyy): ";  cin.ignore(); cin.getline(record.givendate,50);
    cout<< "Expiry Date(dd/mm/yyyy): ";  cin.ignore(); cin.getline(record.expirydate,50);*/
    cout << "\n\t\t\t\tPlease provide following information: "<<endl;
	string a;
    cout<< "\n\t\t\t\tPlease Enter Customer Name: ";  
		
		cin>>a;
		cout<<"\n\t\t\t\tCustomer Name: "<<a;
	
		
	cout<< "\n\n\t\t\t\tPlease Enter Customer Phone No.: ";   
		long s;
		cin>>s;
		cout<<"\n\t\t\t\tPhone Number: "<<s;
	
    
if(record.cmodel !=1 && record.cmodel !=2 &&  record.cmodel !=3 && record.cmodel !=4 && record.cmodel !=5 && record.cmodel !=6 && record.cmodel !=7)
      cout<<"\n\n\t\t\t\tInvaild Car Model. Please try again!"<<endl;
        }
while(record.cmodel !=1 && record.cmodel !=2 && record.cmodel !=3 && record.cmodel !=4 && record.cmodel !=5 && record.cmodel !=6 && record.cmodel !=7);
    float totalprice,tax=555;
    cout<<"\n\n\t\t\t\tDate of Renting(dd/mm/yyy): ";
    string d;
	cin>>d;
	cout<<"\n\t\t\t\tdate of renting: "<<d;
	cout<<"\n\n\t\t\t\tNumber of day(s): ";
    int q;
	cin>>q;
	cout<<"\n\t\t\t\tNumber of days: "<<q;
    cout<<endl;
		cout<<"\n\t\t\t\tThankyou for visiting us!! We will proceed with your request shortly.";
		cout<< "\n\n\t\t\t\tEnter 8 to go back to Main Menu"<<endl<<endl;
     
		cin >>record.cmodel;
		if(record.cmodel == 8)						//return to main
		{
			system("cls");
			return;
		}
    system("cls");

}
void account()													//account function
{
																	//account data
		login_employee(); 										//login function call
		system("cls");
		cout<<"\n\n\t\t\t\t1. Add Car Record\n\t\t\t\t2. Delete Car Record\n\t\t\t\t3. View Customer Record\n\t\t\t\t4. Delete Customer Record\n\t\t\t\t5. View Messages\n\t\t\t\t6. Back to Main Menu\n Option: ";
		int employee_choice;
		cin>>employee_choice;
		if(employee_choice==1)
		{
																	//add car record
			int cont=1;
			ofstream inFile;
			inFile.open("carrecord.txt",ios::app);					//open file and update record
			cout<<"How many records do you want to enter: ";
			cin>>cont;
			system("cls");
			for(int i=0;i<cont;i++)
			{
			cout<<"\t\t\t\tRecord Number "<<i+1<<endl;
			cout<<"\t\t\t\tEnter Car Make: ";
			cin>>record.carmake;
			inFile<<record.carmake<<" ";
			cout<<"\t\t\t\tEnter Car Name: ";
			cin>>record.carname;
			inFile<<record.carname<<" ";
			cout<<"\t\t\t\tEnter Car Number: ";
			cin>>record.carnumber;
			inFile<<record.carnumber<<"\n\n";
			system("cls");
			}
			inFile.close();
			
		}
		else if(employee_choice==2)
		{
																	//delete car record
			cout<<"\t\t\t\tAre You Sure?\n\t\t\t\tOption:(1=Yes and 2=No) ";
			int choices;
			cin>>choices;
			if (choices==1)
		{
			ofstream outFile;
			cout<<"Deleting Files...";
			sleep(1);
			outFile.open("carrecord.txt",ios::trunc);
			outFile.close();
			system("cls");
			cout<<"Done Deleting.";
			system("pause");
			system("cls");
		}
		else if(choices==2)
		{
				system("cls");
		}
		}
		else if(employee_choice==3)
		{
			cout<<"hello";
			system("cls");
			cout<<"Customer Records: \n\n";
			cout<<"1. Khushi : kia sorento--(12/11/23) 5days\n 2. Akshita : Audi A3--(1/12/23) 3days \n " ;
			ifstream INFile("customerinfo.txt");
			string line;
			while(!INFile.eof())
			{
				getline(INFile, line);
				cout<<line<<"\n";
			}
			INFile.close();
			system("pause");
			system("cls");			
		}
		else if(employee_choice==4)
		{
																	//delete customer record
			cout<<"\t\t\t\tAre You Sure?\n\t\t\t\tOption:(1=Yes and 2=No) ";
			int choices;
			cin>>choices;
			if (choices==1)
		{
			ofstream outFile;
			cout<<"Deleting Files...";
			sleep(1);
			outFile.open("customerinfo.txt",ios::trunc);
			outFile.close();
			system("cls");
			cout<<"Done Deleting.";
			system("pause");
			system("cls");
		}
		else if(choices==2)
		{
				system("cls");
		}
			return;
		}
		else if(employee_choice==5)									//output contact info	
		{
			cout<<"\n\t\t\t\tMessages:\n";
			fstream infile("contactinfo.txt");
			string line;
			int i=1;
     		while (!infile.eof( ))     
     		{
				infile >> line;	
				cout<<"\n\t\t\t"<<i<<". \n\t\t\t\t"<<line;
				infile>>line;
				cout<<"\t"<<line;
				infile >> line;	
				cout<<"\n\t\t\t\t"<<line;
				infile>>line;
				cout<<"\t"<<line;
				infile>>line;
				i++;
       		}
			infile.close();
			system("pause");
			system("cls");
		}
		else if(employee_choice==6)														//return to main
		{
			system("cls");
		}
	}
void contact()																			//contact us
{
	ofstream file;
	file.open("contactinfo.txt",ios::app);
	cout<<"\n\n\t\t\t\tPlease Enter Details Below: "<<endl;
	cin.getline(record.name,5);
	cout<<"\n\n\t\t\t\tName: ";
	cin.getline(record.name,5);
	file<<"Name:    "<<record.name<<"\n";
	cout<<"\t\t\t\tEmail: ";
	cin.getline(record.email,5);
	file<<"Email:   "<<record.email<<" ."<<endl;
	file.close();
	cout<<"\n\n\t\t\t\tThank You for reaching out, We will contact you shortly."<<endl;
	cout<< "\n\n\t\t\t\tEnter 8 to go back to Main Menu"<<endl<<endl;
     
		cin >>record.cmodel;
		if(record.cmodel == 8)						//return to main
		{
			system("cls");
			return;
		}
	system("pause");
	system("cls");
	return;
}

int main()
{
																									//Main Menu
	cout<<"\n\n                           Welcome to WHEELDEAL"<<endl;
	cout<<"                           **********"<<endl;
	cout<<"                                 Main Menu \n"<<endl;
	cout<<"\t\t\t\t1. Rent A Car\n\t\t\t\t2. Account\n\t\t\t\t3. Contact Us\nOption: ";
	int menu_choice;
	cin>>menu_choice;
	system("cls");
	if(menu_choice==1)
	{
		listofcars();
		return main();
	}
	else if (menu_choice==2)
	{
		account();
				
		return main();
	}
	else if(menu_choice==3)
	{
		contact();
		return main();
	}
	
	
	return 0;
}