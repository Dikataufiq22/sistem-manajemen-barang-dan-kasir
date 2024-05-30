//Beta
//
//

#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <time.h>
#include <conio.h>
#include <ctime>

#define UN "default"
#define PW "default"
char User[21];
char Pwd[21];
char date [9];

using namespace std;
      void MkAster();
      void PromScr();
      void mainkernel();
int main()
{
    menu:
         
        int c;
        cout << "                   SELAMAT DATANG                    "<<endl;
        cout << "_______________AMIKOM CASHIER CENTER_________________"<<endl;
        cout << "-----------------------------------------------------"<<endl;
        cout << "1.LOGIN"<<endl;
        cout << "2.EXIT"<<endl;
        cout << "3.ABOUT"<<endl;
        cout << "-----------------------------------------------------"<<endl;
        cout << "Masukkan Pilihan Anda                                "<<endl;
        cin  >> c;
        
        if(c == 1){
             system("cls");
             int att = 4;
             cout << "------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
    	     printf("LoginSafe By: KBM & Envy Inc. \nDeveloped By Inanimate Studios.\nVersion 2.1.2.\n\nPlease enter the following...\n");
    	     cout << "--------------------------------------------------------------------------------------------------------------------------------"<<endl;
    	     cout << "(C) KBM & Envy Inc. Please visit www.envyinc.blogspot.com. "<<endl;
    	
    	for (; att >= 0; att--)
    	{
    		PromScr();
    		
    		if (!strcmp(User, UN) && !strcmp(Pwd, PW))
    		{
    			printf("\nUsername and Password accepted!\n\n");
    			mainkernel();
    			
    		}
    		
    		else if(!strcmp(User, "quit") && !strcmp(Pwd, "exit")){
                 break;
                 }
    		
    		else 
            {printf("\nInvalid Username or Password\n\nYou have %i attempts more.", att);
            }
    	}
}
              
        if(c == 2){
             system("PAUSE");
             }
        if(c == 3){
             cout << "------------------------------------------" << endl;
             cout << "----------------ABOUT---------------------" << endl;
             cout << "------------------------------------------" << endl;
             cout << "The Advanced Cashier 2010 M3 is a program " << endl;
             cout << "to make cashier entries easy and quick.   " << endl;
             cout << "------------------------------------------" << endl;
             cout << "Developed And Compiled by Envy Inc.       " << endl;
             cout << "Special Thanks to KBM and gieselgow for   " << endl;
             cout << "for login and main kernel error debug     " << endl;
             cout << "------------------------------------------" << endl;
             system("PAUSE");
             goto menu;
}
}
// inclomplete class

//Def(Mkaster) Def(PromScr())
//
//PROMSCR
 void PromScr()
    {
    	printf("\nUsername: "); scanf("%s", &User);
    	printf("Password: "); MkAster();
    }
    
//---------------------
//MKASTER    
    void MkAster()
    {
    int i = 0, geth = 0;
    do {
    	
    		geth = getch();
    		if(geth != 13)
    		{
    			if(geth == '\b')
    			{
    				if(i!= 0)
    				{
    					printf("\b \b");
    					Pwd[i] = '\0';
    					i--;
    				}
    			}
    			 else if(geth == '13') printf("\b \b");
    			
    			else 
    			{
    			
    			Pwd[i] = geth;
    			printf("*");
    			i++;
    			}
    		}
    	} while(geth != 13 );
    	
    	Pwd[i] = '\0';
    }

//sum_num.lib
int sum(int b[],int n) 
    { 
      int s=0;
      int i; 
      for(i=0;i<n;i++) 
      { 
                       s+=b[i]; 
                       } 
}

//CASHIER PROGRAM BEGINS..........
//
//________________________________






void runningkernel() 
{ 
    cout<<"press(0) to calculate total price\n"; 
    q:
                    int clientn;
                    string sn;
                    float price,total,payment,balance,quantity; 
                    char date [9]; char time [9];
                    //_strdate(date); 
                    //_strtime(time); 
                    cout<<"------------------------------------------------------------------"<<endl;
                    cout<<"----------------ADVANCED CASHIER CLIENT NO."<<clientn<<"----------"<<endl;
                    cout<<"------------------------------------------------------------------"<<endl;
                    cout<<"Please Enter Billing Number"<<endl;
                    int bn;
                    cin >> bn;
                    cout<<"Date: "<<date<<endl; 
                    cout<<"Time "<<time<<endl; 
                    cout<<"\t .................................\n"; 
                    cout<<".........................................................\n"; 
                    cout<<"                         "<<"SUPERMARKET BILL ENTRY"<<bn<<"                          "; 
                    cout<<".........................................................\n"; 
                    cout<<"\t .................................\n"; 
                    quantity=0; 
                    total =0; 
                    do
                     { 
                          quantity=quantity+1;
                          cout<<"\t\tHarga Untuk Item No:"<<quantity<<" adalah :";
                          cin>>price;
                          total = total+price;
                          }while(price!=0);
                          cout<<"\t\tTotal Harga\n"<<"\t_________________________________________\n";
                          cout<<"\t\t\t"<<total<<endl;
                          float taxes;
                          cout << "Pajak(jika ada)" << endl;
                          cin >> taxes;
                          cout<<"\t_________________________________________"<<endl;
                          cout<<"\t\tBayar Tunai";
                          cin>>payment;
                          balance=payment-(total+taxes);
                          cout<<"\t\tUang Kembalian = "<<balance<<endl;
                          cout<<"\t\t\tTERIMA KASIH TELAH BERBELANJA DI TOKO KAMI"<<" "<<sn<<" "<<endl;
                          cout<<"APAKAH ANDA INGIN MELAYANI PELANGGAN BERIKUTNYA?(1/0)";
                          int g;
                          cin>>g; 
                          if (g == 1) {
                                  cout<<"*************************************************************\n" ;
                                  cout<<"*************************************************************\n";
                                  cout<<""<<endl; goto q;
                                  } 
                                  else 
                                  {cout<<"\t\t**********************\n";
                                  cout<<"\t\t**********CLOSING PROGRAM***********************"<<endl;
                                  cout<<"\t\t**********************"<<endl;
                                  system("PAUSE");
                                  
                                  } 
                                  }

void mainkernel(){
     system("cls");
     cout << "____________________AMIKOM CASHIER CENTER______________________"<<endl;
     cout << "_______________________________________________________________"<<endl;
     cout << "Selamat datang di AMIKOM CASHIER CENTER. Silakan masukkan nama "<<endl;
     cout << "produk,harga dan terakhir kuantitas. Setelah kamu    "<<endl;
     cout << "telah menyelesaikan daftarnya. Lalu masukkan pajak jika ada lalu tekan  "<<endl;
     cout << "ceK untuk melihat daftarnya"<<endl;
     cout << "_______________________________________________________________"<<endl;
     system("PAUSE");
     int clientn;
     cout << "Masukkan Nomor Klien:"<<endl;
     cin >> clientn;
     string sn;
     cout << "Masukkan Nama SuperMarket:" << endl;
     cin >> sn;
     runningkernel();
}