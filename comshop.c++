C++  SOURCE  CODE
#include<fstream.h>
#include<graphics.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<process.h>
#include<iomanip.h>
#include<dos.h>
             class consumer
{         int cno;
          char cname[20];
         char adress[20];
         int a,b,c;
          float i;
                       public:
void entry()
{        cout<<" ENTER THE CUSTOMER ID:";
                     cin>>cno;
          cout<<"ENTER THE CUSTOMER NAME:";
                 cin>>cname;
          cout<<"ENTER THE CUSTOMER  ADDRESS: ";
                cin>>adress;
          cout<<"ENTER THE CUSTOMER SERVICE NUMBER:";
              cin>>a;
         cout<<"ENTER THE SMART CARD NUMBER:";
             cin>>b;
         cout<<"ENTER THE PHONE NUMBER:";
              cin>>c;
         cout<<"ENTER THE BILL NUMBER:";
            cin>>i;
}
                   void display()
{            cout<<"\n\nCUSTOMER ID:"<<cno<<endl;
             cout<<"CUSTOMER  NAME :"<<cname<<endl;
            cout<<"CUSTOMER  ADRESS :"<<adress<<endl;
           cout<<"CUSTOMER  SERVICE  NUMBER :" <<a<<endl;
            cout<<"CUSTOMER  SMART  CARD  NUMBER :"<<b<<endl;
            cout<<"CUSTOMER  PHONE  NUMBER :"<<c<<endl;
         cout<<"CUSTOMER  BILL  NUMBER :"<<i<<endl;
   }
int rcno()
{        return cno;
           }}c;

      void write()
{	char ch;
  consumer c;
   fstream f1;
c.entry();
    f1.open("main.dat",ios::app|ios::binary);
    cout<<"\n\n\tDO you want to save the record(y/n)\t";
    cin>>ch;
    if(ch=='y')
    f1.write((char*)&c,sizeof(c));
    f1.close();   }

void read()
{   	consumer c;
          fstream f1;
         f1.open("main.dat",ios::in|ios::binary);
          while(!f1.eof())
{	f1.read((char*)&c,sizeof(c));
         if(f1.eof())
          break;
        c.display();  }
f1.close();
}
void search()
{	consumer c;
int rn;
char found='n';
ifstream f1("main.dat",ios::in);
cout<<"\n\n Enter Customer ID you want to SEARCH :\t";
cin>>rn;
while(!f1.eof())
{   f1.read((char*)&c,sizeof(c));
if(c.rcno()==rn)
{	c.display();
found='y';
break;  } }
if(found=='n')
cout<<"\n\n\tRECORD NOT FOUND!!!!!!!!!!!!!\n"<<endl;
f1.close();
}
void del()
{	ifstream f1("main.dat",ios::in);
ofstream f2("temp.dat",ios::out);
int rno;
char found='f',confirm='n';
cout<<"\n\n Enter Customer ID you want to DELETE :\t";
cin>>rno;
while(!f1.eof())
{	f1.read((char*)&c,sizeof(c));
if(c.rcno()==rno)
{             c.display();
found='t';
cout<<"\n\n Are you sure want to DELETE this record ? (y/n)\t";
cin>>confirm;
if(confirm=='n')
f2.write((char*)&c,sizeof(c));  }
else
f2.write((char*)&c,sizeof(c));  }
if(found=='f')
cout<<"\n\n\tRECORD NOT FOUND\n";
f1.close();
f2.close();
remove("main.dat");
rename("temp.dat","main.dat");
f1.open("main.dat",ios::in);
clrscr();
cout<<"\n\n\n Now the file contains\n\n\n";
while(!f1.eof())
{	f1.read((char*)&c,sizeof(c));
if(f1.eof())
c.display(); }
f1.close();  
}
void update()
{		fstream f1("main.dat",ios::in | ios::out | ios::binary);
int rno;
long pos;
char found='f';
cout<<"\n\n Enter the Customer ID you want to MODIFY :\t";
cin>>rno;
while(!f1.eof())
{	pos=f1.tellg();
f1.read((char*)&c,sizeof(c));
if(c.rcno()==rno)
{	c.entry();
f1.seekg(pos);
f1.write((char*)&c,sizeof(c));
found='t';
break;  } }
if(found=='f')
cout<<"\n\n\tRECORD NOT FOUND\n";
f1.seekg(0);
clrscr();
cout<<"\n Now the file contains\n\n";
c.display();
f1.close();
getch();
}
void welcome()
{    textbackground(LIGHTBLUE);
int z;
cout<<"\n\t%%      %%      ";
cout<<"\n\t%%      %% %%%%%%% %%      %%%%%%  %%%%%% %%%%  %%%% %%%%%%%";
cout<<"\n\t%%      %% %%      %%      %%      %%  %% %%  %%% %% %%       ";
cout<<"\n\t%%  %%  %% %%%%%   %%      %%      %%  %% %%  %%% %% %%%%%      ";
cout<<"\n\t%%  %%  %% %%      %%      %%      %%  %% %%      %% %%           ";
cout<<"\n\t%%%%%%%%%% %%%%%%% %%%%%%% %%%%%%% %%%%%% %%      %% %%%%%%%     ";
cout<<"\n\n\t\t\t        $$$$$$$$  $$$$$        ";
cout<<"\n\t\t\t           $$     $   $      ";
cout<<"\n\t\t\t           $$     $$$$$    ";
cout<<"\n\n\t   *****************ST MARY'S INTER COLLEGE******************";
cout<<"\n\n\t\t *************ON COMPUTER SHOP*************";
cout<<"\n\n";
gotoxy(10,17);
cout<<"UNDER THE GUIDANCE OF-" ;
gotoxy(10,20);
cout<<   "MR. ANIL KUMAR" ;
gotoxy(50,17);
cout<<"Submitted by-";
gotoxy(51,19);
cout<<"SAMYAK SINGH";
gotoxy(51,21);
cout<<"ABHINAV RAJPUT";
gotoxy(4,24);
cout<<"\n\npress any no. to continue";
cin>>z;  }
void main()
{        textbackground(RED);
unsigned int sum,add,d,j,e,g,k,l,x,y,choice;
int abis=500,aden=500,aperk=500,acoc=500,alux=500,atid=500;
unsigned int m=0,o=0,q=0,r=0,t=0,u=0;
int     z,  pend=0,print=0,graph=0,ram=0,win=0,ant=0,p1=0,p2=0,g1=0,r1=0,w1=0,an1=0,total=0;
char pu,str[10],yes,et;
textbackground(MAGENTA);
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t WELCOME\n\n";
cout<<"\t\t\t\t   TO\n\n";
cout<<"\t\t\t\t   THE\n\n";
cout<<"\t\t\t       WORLD OF C++\n";
getch();
clrscr();
pass:;
clrscr();
cout<<"\n\n\tPLEASE BE CAREFUL ENTER THE PASSWORD IN SMALL LETTERS\n";
cout<<"\n\t\tPASSWORD DOES NOT CONTAINS ANY NUMBER\n\n\n";
cout<<"\n\n\t\t\tEnter your Password\t";
str[0]=getch(); cout<<"*";
str[1]=getch(); cout<<"*";
str[2]=getch(); cout<<"*";
str[3]=getch(); cout<<"*";
str[4]=getch(); cout<<"*";
str[5]=getch(); cout<<"*";
str[6]=getch(); cout<<"*";
str[7]='\0'; cout<<"*";
if(strcmp(str,"beliber")==0)
{        cout<<"\n\n\n\t\tPLEASE WAIT WHILE LOADING THE PROJECT";
delay(150); cout<<".";
delay(150); cout<<".";
delay(150); cout<<".";
delay(150); cout<<".";
delay(150); cout<<".";
delay(150); cout<<".";
delay(150); cout<<".";
delay(150); cout<<".";
delay(150); cout<<".";
delay(150); cout<<".";
delay(200);
}       else
{        cout<<"\n\n\t\t\t$$$$$$ Ooop's wrong password $$$$$$\n";
cout<<"\n\n\t\t\t%%%%%% Please re-enter the password%%%%%%\n";
getch();
goto pass;
}   clrscr();
welcome();
clrscr();
gotoxy(32,13);
textcolor(LIGHTGREEN);
cputs("********************");
gotoxy(32,15); cputs("LOADING YOUR PROJECT");
gotoxy(32,17); cputs("********************");
gotoxy(32,20);
textcolor(MAGENTA+BLINK);
cputs("PLEASE WAIT.........");
textcolor(RED+GREEN);
delay(500);
gotoxy(32,35); cputs("10 % completed..");
delay(500);
gotoxy(33,36); cputs("25 % completed...");
delay(500);
gotoxy(34,37); cputs("50 % completed....");
delay(500);
gotoxy(35,38); cputs("100 % completed.....");
delay(500);   clrscr();
again:;   clrscr();
textbackground(LIGHTBLUE);     textcolor(GREEN);
cout<<"\n\t\t\t    !=========================!\n";
cout<<"\n\t\t\t    !**** BELIBER COMPUTER SHOP ****!\n";
cout<<"\n\t\t\t    !=========================!"\n;
cout<<"\n\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
cout<<"\n\t\t\t*     1.ADD NEW CUSTOMER RECORD   *";
cout<<"\n\t\t\t*     2.SEARCH A RECORD           *";
cout<<"\n\t\t\t*     3.MODIFY A RECORD           *";
cout<<"\n\t\t\t*     4.DELETE A RECORD           *";
cout<<"\n\t\t\t*     5.DISPLAY ALL RECORDS       *";
cout<<"\n\t\t\t*     6.DETAILS OF BELIBER SHOP   *";
cout<<"\n\t\t\t*     7.QUANTITY AVAILABLE        *";
cout<<"\n\t\t\t*     8.UPDATE STOCK ITEMS        *";
cout<<"\n\t\t\t*     9.EXIT                      *";
cout<<"\n\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
cout<<"\n\n\n\t ENTER YOUR CHOICE :\t";
cin>>d;
switch(d)
{       case 1:
clrscr();
textbackground(LIGHTBLUE);
cout<<"\n\n\n\t\t\t S.T.A.R  COMPUTERS";
cout<<"\n\n\n\t\t\t ENTER THE  COSUMER INFORMATION\n\n";
write();
start:
cout<<"\n\n\nDO YOU WANT TO PURCHASE(Y/N):\n\n";
cin>>pu;
if(pu=='Y'||pu=='y')
{	clrscr();   items:;
cout<<"\n\t\t\t\t*************";
cout<<"\n\t\t\t\tPURCHASE LIST";
cout<<"\n\t\t\t\t*************\n\n\n\n";
cout<<"\n\n\t\t\t1.PENDRIVE";
cout<<"\n\n\t\t\t2.PRINTER";
cout<<"\n\n\t\t\t3.GRAPHIC CARD";
cout<<"\n\n\t\t\t4.RAM";
cout<<"\n\n\t\t\t5.WINDOWS ORIGINAL CD'S";
cout<<"\n\n\t\t\t6.ANTIVIRUS";
cout<<"\n\n\n\t\t\tEnter your choice\t";
cin>>choice;
if(choice==1)
{  bis:;    clrscr();
cout<<"\n\n\t\t\t\tPENDRIVES\n\n";
cout<<"\n     ITEMS\t\t\t\t\tRATE\n";
cout<<"\n  1. 2GB\t\t\t\t\t350\n";
cout<<"  2. 4GB\t\t\t\t\t500\n";
cout<<"  3. 5GB\t\t\t\t\t700\n";
cout<<"  4. 8GB\t\t\t\t\t800\n";
cout<<"  5. 16GB\t\t\t\t\t1800\n";
cout<<"\n\n\tWhich PENDRIVE you want to purchase\t";
cin>>p1;
if(p1==1)
{	pend=350;       }
else if(p1==2)
{	 pend=500;      }
else if(p1==3)
{	pend=700;     }
else if (p1==4)
{	pend=800 ;   }
else if(p1==5)
{	pend=1800;  }
else if(p1==0)
{	goto items;       }
else if(p1!=1||p1!=2||p2!=3||p1!=4||p1!=5)
{	cout<<"\n\n\tOOPS!!!!!!!  Wrong choice\n\n";
getch();
goto bis;   }
cout<<"\n\tPENDRIVE(MAX 5): \t";
cin>>m;
if(m>5)
{	cout<<"\n\n\tEnter Quantity Smaller than 5";
getch();
goto items;   }
else
abis=500-m;
cout<<"\n\tDO you want to purchase more(y/n)";
cin>>yes;
if(yes=='y')
{	clrscr();
goto items;  }
else
{	clrscr();
goto cash;  }}
if(choice==2)
{	den:;   clrscr();
cout<<"\n\n\t\t\t\tPRINTER\n\n";
cout<<"\n     ITEMS\t\t\t\tRATE\n";
cout<<"\n  1. HP Laser jet\t\t\t2000\n";
cout<<"  2. DOT Matrix Printer\t\t\t500\n";
cout<<"\n\n\tWhich PRINTER you want to purchase\t";
cin>>p2;
if(p2==1)
{	print=500;     }
else if(p2==2)
{	print=2000;     }
else if(p2==0)
{	goto items;      }
else if(p2!=1||p2!=2)
{	cout<<"\n\n\tOOPS!!!!!!!  Wrong choice\n\n";
getch();
goto den;   }
cout<<"\n\tPRINTER(MAX 5):\t ";
cin>>o;
if(o>5)
{  cout<<"\n\n\tEnter Quantity Smaller than 5";
goto items;
}
else
aden=500-o;
cout<<"\n\tDO you want to purchase more(y/n)";
cin>>yes;
if(yes=='y')
{	clrscr();
goto items;
}
else
{	clrscr();
goto cash;
}}
if(choice==3)
{	park:;  clrscr();
cout<<"\n\n\t\t\t\tGRAPHIC CARD\n\n";
cout<<"\n     ITEMS\t\t\t\t\tRATE\n";
cout<<"\n  1. 32 bit\t\t\t\t\t5000\n";
cout<<"  2. 64 bit\t\t\t\t\t8000\n";
cout<<"\n\n\tWhich GRAPHIC CARD you want to purchase\t";
cin>>g1;
if(g1==1)
{	graph=5000;  }
else if(g1==2)
{	graph=8000;   }
else if(g1==0)
{	goto items;     }
else if(g1!=1||g1!=2)
{	cout<<"\n\n\tOOPS!!!!!!!  Wrong choice\n\n";
getch();
goto park;
}
cout<<"\n\tGRAPHIC CARD(MAX 5):\t ";
cin>>q;
if(q>5)
{	cout<<"\n\n\tEnter Quantity Smaller than 5";
getch();
goto items;   }
else
aperk=500-q;
cout<<"\n\tDO you want to purchase more(y/n)";
cin>>yes;
if(yes=='y')
{	clrscr();
goto items;   }
else
{           clrscr();
goto cash;   }}

if(choice==4)
{	coco:;    clrscr();
cout<<"\n\n\t\t\t\tRAM\n\n";
cout<<"\n     ITEMS\t\t\t\t\tRATE\n";
cout<<"\n  1. 1GB\t\t\t\t\t2000\n";
cout<<"  2. 2GB\t\t\t\t\t4000\n";
cout<<"\n\n\tWhich RAM you want to purchase\t";
cin>>r1;
if(r1==1)
{	ram=2000;   }
else if(r1==2)
{	ram=4000;      }
else if(r1==0)
{	goto items;      }
else if(r1!=1||r1!=2)
{	cout<<"\n\n\tOOPS!!!!!!!  Wrong choice\n\n";
getch();
goto coco;    }
cout<<"\n\tRAM(MAX 2): ";
cin>>r;
if(r>2)
{	cout<<"\n\n\tEnter Quantity Smaller than 2";
getch();
goto items;
}
else
acoc=500-r;
cout<<"\n\tDO you want to purchase more(y/n)";
cin>>yes;
if(yes=='y')
{	clrscr();
goto items;   }
else
{	clrscr();
goto cash;   }}
if(choice==5)
{	lux:;
clrscr();
cout<<"\n\n\t\t\t\tWINDOWS ORIGINAL CD'S\n\n";
cout<<"\n     ITEMS\t\t\t\tRATE\n";
cout<<"\n  1. 98\t\t\t\t\t1500\n";
cout<<"  2. 2000\t\t\t\t2000\n";
cout<<"  3. XP\t\t\t\t\t4000\n";
cout<<"  4. VISTA\t\t\t\t8000\n";
cout<<"  5. windows7\t\t\t\t11000\n";
cout<<"\n\n\tWhich WINDOWS CD you want to purchase\t";
cin>>w1;
if(w1==1)
{	win=1500;      }
else if(w1==2)
{	win=2000;     }
else if(w1==3)
{	win=4000;      }
else if(w1==4)
{	win=8000;      }
else if(w1==5)
{	win=11000;      }
else if(w1==0)
{	goto items;      }
else if(w1!=1||w1!=2||w1!=3||w1!=4||w1!=5)
{	cout<<"\n\n\tOOPS!!!!!!!Wrong choice\n\n";
getch();
goto lux;   }
cout<<"\n\tWINDOWS ORIGINAL CD(MAX 5):\t ";
cin>>t;
if(t>5)
{	cout<<"\n\n\tEnter Quantity Smaller than 5";
getch();
goto items;
}
else
alux=500-t;
cout<<"\n\tDO you want to purchase more(y/n)";
cin>>yes;
if(yes=='y')
{	clrscr();
goto items;   }
else
{	clrscr();
goto cash;   }}

if(choice==6)
{	tid:;  clrscr();
cout<<"\n\n\t\t\t\tANTIVIRUS\n\n";
cout<<"\n     ITEMS\t\t\t\tRATE\n";
cout<<"\n  1. NORTON\t\t\t\t1500\n";
cout<<"  2. AVIRA\t\t\t\t1200\n";
cout<<"  3. QUICKHEAL\t\t\t\t1300\n";
cout<<"\n\n\tWhich ANTIVIRUS you want to purchase\t";
cin>>an1;
if(an1==1)
{	ant=1500;       }
else if(an1==2)
{                 ant=1200;      }
else if(an1==3)
{	ant=1300;        }
else if(an1==0)
{	goto items;       }
else if(an1!=1||an1!=2||an1!=3)
{	cout<<"\n\n\tOOPS!!!!!!!Wrong choice\n\n";
getch();
goto tid;
}
cout<<"\n\tANTI VIRUS(MAX 5): ";
cin>>u;
if(u>5)
{	cout<<"\n\n\tEnter Quantity Smaller than 5";
getch();
goto items;
}
else
atid=500-u;
cout<<"\n\tDO you want to purchase more(y/n)";
cin>>yes;
if(yes=='y')
{	clrscr();
goto items;  }
else
{	clrscr();
goto cash;  }}
cout<<"\n\n\n";
clrscr();
cash:;
cout<<"\n\n\n\n\n\n\t\t\t\t S.T.A.R COMPUTERS\n";
cout<<"\n\n\t\t\t\t    CASH MEMO\n";
cout<<"\n\n\n\n";
search();
cout<<"\n\n\n";
cout<<"===============================================================================";
cout<<"\nITEMS"            <<setw(40)<<"QUANTITY"<<setw(35)<<"PRICE(Rs.)";
cout<<"===============================================================================";
if(m>0) cout<<"\n\nPENDRIVE"<<setw(35)<<m<<setw(28)<<"Rs."<<m*pend;
if(o>0) cout<<"\n\nPRINTER"<<setw(36)<<o<<setw(28)<<"Rs."<<o*print;
if(q>0) cout<<"\n\nGRAPHIC CARD"<<setw(31)<<q<<setw(28)<<"Rs."<<q*graph;
if(r>0) cout<<"\n\nRAM" <<setw(40)<<r<<setw(28)<<"Rs."<<r*ram;
if(t>0)cout<<"\n\nWINDOWS ORIGINAL CD" <<setw(24)<<t<<setw(28)<<"Rs."<<t*win;
if(u>0) cout<<"\n\nANTIVIRUS"<<setw(34)<<u<<setw(28)<<"Rs."<<u*ant;
e=m*pend; g=o*print; k=q*graph; l=r*ram; x=t*win; y=u*ant;
sum=e+g+k+l+x+y; add=m+o+q+r+t+u;
cout<<"\n===============================================================================";
cout<<"\nTOTAL:"<<setw(38)<<add<<setw(27)<<"Rs."<<sum;
money:;
cout<<"\n\n\n\n\t\t\tEnter the cash paid\t";
cin>>total;
cout<<"\n\n\n\t\t\tCASH RECIEVED :"<<total;
if(total<sum)
{     cout<<"\n\n\tThe money you paid is less !!!! Please pay more money";
getch();
goto money;}
clrscr();
cout<<"\n\n\n\t COLLECT YOUR SMART CARD & BILL AFTER PAYMENT";
cout<<"\n\n\t   DO NOT BREAK ANY SHOP ITEMS. ";
cout<<"\n\n\n\n\n\t\tCASH RECEIVED :\t"<<total;
cout<<"\n\n\t\tCASH AMOUNT :\t"<<sum;
cout<<"\n\n\t\tBALANCE RETURNED :\t"<<total-sum;
cout<<"\n\n\tTHANK YOU .\t\t\t\tVISIT US AGAIN\n";
cout<<"\n\n\tTHANK YOU FOR USING OUR SERVICE\n\n";
getch();
goto again; }
else
{	clrscr();
getch();
goto again;
}
case 2:
clrscr();    search();
     getch();
    goto again;

case 3:
clrscr();    update();
     getch();
    goto again;

case 4:
clrscr();    del();
     getch();
     goto again;

case 5:
{    clrscr();    read();
getch();
goto again;     }

case 6:
clrscr();
cout<<"\n\t\t\t\tSHOP DETAILS\n\n";
cout<<"\t\t\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
cout<<"\t\t  #   TIMING:  10:00 AM   TO   5:00 PM                           ";
cout<<"\t\t  #   SHOP WILL CLOSED ON SUNDAY.                                ";
cout<<"\t\t  #   GOODS ONCE SOLD WILL NOT BE EXCHANGED/REPLACED.            ";
cout<<"\t\t  #   TAKE YOUR SMART CARD WITH YOU.                             ";
cout<<"\t\t  #   COLLECT YOUR SMART CARD & BILL AFTER PAYMENT.              ";
cout<<"\t\t  #   DO NOT BREAK ANY SHOP ITEMS.                               ";
cout<<"\t\t  #   FOR ANY COMPLAINT CONTACT THE CHAIR PERSON.                ";
cout<<"\t\t  #   10 YEARS OF EXPERIENCE.                                    ";
cout<<"\t\t  #   CHAIR PERSON :- MR.SAMYAK SINGH.                           ";
cout<<"\t\t  #   AN ISO 9001-2000 CERTIFIED COMPANY.                        ";
cout<<"\t\t  #   WELL QUALIFIED STAFF MEMBERS.                              ";
cout<<"\t\t  #   Email :- www.beliber_computers.com                          \n";
cout<<"\t\t\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
getch();    clrscr();
goto again;

case 7:
clrscr();
if(m>0||o>0||q>0||r>0||t>0||u>0)
{	cout<<"\n\t\t\tItems Avaliable in shop.\n\n\n";
cout<<"===============================================================================";
cout<<"\nITEMS"            <<setw(40)<<"QUANTITY";
cout<<"\n===============================================================================";
cout<<"\n\n\nPENDRIVE"            <<setw(37)<<abis;
cout<<"\n\n\nPRINTER"             <<setw(38)<<aden;
cout<<"\n\n\nGRAPHIC CARD"        <<setw(33)<<aperk;
cout<<"\n\n\nRAM"                 <<setw(42)<<acoc;
cout<<"\n\n\nWINDOWS ORIGINAL CD" <<setw(26)<<alux;
cout<<"\n\n\nANTIVIRUS"           <<setw(36)<<atid;
cout<<"\n*******************************************************************************";
getch();
goto again; }
else
{{  cout<<"\n\t\t\tItems Avaliable in shop.\n\n\n";
cout<<"===============================================================================";
cout<<"\nITEMS"            <<setw(40)<<"QUANTITY";
cout<<"\n===============================================================================";
cout<<"\n\n\nPENDRIVE"             <<setw(37)<<abis;
cout<<"\n\n\nPRINTER"        	   <<setw(37)<<aden;
cout<<"\n\n\nGRAPHIC CARD"         <<setw(32)<<aperk;
cout<<"\n\n\nRAM"                  <<setw(41)<<acoc;
cout<<"\n\n\nWINDOWS ORIGINAL CD"  <<setw(26)<<alux;
cout<<"\n\n\nANTIVIRUS"            <<setw(36)<<atid;
cout<<"\n\n*******************************************************************************";
getch();
goto again;  }

case 8:
{  clrscr();   int t,c;
cout<<"\n\t\t\t\t********************";
cout<<"\n\t\t\t\tSTOCK  UPDATE  LIST";
cout<<"\n\t\t\t\t********************\n\n\n\n";
cout<<"\n\t\t\t1.PENDRIVE";
cout<<"\n\t\t\t2.PRINTER";
cout<<"\n\t\t\t3.GRAPHIC CARD";
cout<<"\n\t\t\t4.RAM";
cout<<"\n\t\t\t5.WINDOWS ORIGINAL CD'S";
cout<<"\n\t\t\t6.ANTIVIRUS";
cout<<"\n\n\t\t\tEnter your choice\t";
cin>>c;
if(c==1)
{   cout<<"\n\n\t\t\n\nENTER THE QUANTITY:";
cin>>t;   abis+=t;
cout<<"STOCK IS UPDATED";  }
else
if(c==2)
{  cout<<"\t\t\n\nENTER THE QUANTITY";
cin>>t;   aden+=t;
cout<<"STOCK IS UPDATED";   }
else
if(c==3)
{    cout<<"\t\t\n\nENTER THE QUANTITY";
cin>>t;  aperk+=t;
cout<<"STOCK IS UPDATED";   }
else
if(c==4)
{  cout<<"\t\t\n\nENTER THE QUANTITY";
cin>>t;  acoc+=t;
cout<<"STOCK IS UPDATED";   }
else
if(c==5)
{  cout<<"\t\t\n\nENTER THE QUANTITY";
cin>>t;  alux+=t;
cout<<"STOCK IS UPDATED";    }
else
if(c==6)
{   cout<<"\t\t\n\nENTER THE QUANTITY";
cin>>t;   atid+=t;
cout<<"STOCK IS UPDATED";   }
else
{   cout<<"\n\tOOPS!!!!!!!  Wrong choice\n\n";    }
getch();
goto again;   }

case 9:
exit(0);
default:
cout<<"WRONG CHOICE";
}
}while(1);
}



