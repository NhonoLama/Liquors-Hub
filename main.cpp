#include<iostream>
#include<fstream>
using namespace std;

int lim=0;//j=0;


void access();
void adminoption();
void customeroption();

//void exit();


class admin{

    public:
    void view();
    void add();
    void edit();
    void approve();
    void decline();
    void vieworders();
};



class customer{
    public:
    void menu();
    void buyitem();
};



class wine{
    string name;
    int price,pcode;
    public:
    void getdata(){
        cout << "\t\t\tNAME :  ";
        cin>>name;
        cout << "\t\t\tPRODUCT CODE :  ";
        cin>>pcode;
        cout << "\t\t\tPRICE :  ";
        cin>>price;

    }

    void putdata(){
       
        cout <<"\t\t\t"<<name<<"\t\t\t"<<price<<"\t\t\t"<<pcode;
    }

    string getname(){
        return name;
    }


};



class vodka{
    string name;
    int price,pcode;
    public:
    
    void getdata(){
        cout << "\t\t\tNAME :  ";
        cin>>name;
        cout << "\t\t\tPRODUCT CODE :  ";
        cin>>pcode;
        cout << "\t\t\tPRICE :  ";
        cin>>price;

    }

    void putdata(){
       
        cout <<"\t\t\t"<< name<<"\t\t\t"<<price<<"\t\t\t"<<pcode;
    }

    string getname(){
        return name;
    }

};



class whisky{
    string name;
    int price,pcode;
    public:
    void getdata(){
        cout << "\t\t\tNAME :  ";
        cin>>name;
        cout << "\t\t\tPRODUCT CODE :  ";
        cin>>pcode;
        cout << "\t\t\tPRICE :  ";
        cin>>price;

    }

    void putdata(){
       
        cout <<"\t\t\t"<<name<<"\t\t\t"<<price<<"\t\t\t"<<pcode;
    }

    string getname(){
        return name;
    }

};



class beer{

    string name;
    int price,pcode;
    public:
    void getdata(){
        cout << "\t\t\tNAME :  ";
        cin>>name;
        cout << "\t\t\tPRODUCT CODE :  ";
        cin>>pcode;
        cout << "\t\t\tPRICE :  ";
        cin>>price;

    }

    void putdata(){
       
        cout <<"\t\t\t"<<name<<"\t\t\t"<<price<<"\t\t\t"<<pcode;
    }

    string getname(){
        return name;
    }

};



void admin :: view(){
    
    fstream file;
    wine wobj;
    whisky whobj;
    vodka vobj;
    beer beobj;
    
    file.open("Wine.txt",ios::in | ios::binary);
	cout<<"----------------------------------    WINE    --------------------------------------------\n";
    cout << "\n\n\t\t\tName\t\t\tPrice\t\t\tP-Code\n" <<endl;
	while((file.read(reinterpret_cast<char *>(&wobj),sizeof(wobj)))){ 
        wobj.putdata();
        cout << endl;
	    
    //cout>>"WINE";
    }
    file.close();

    file.open("Whisky.txt",ios::in | ios::binary);
	cout<<"\n\n\n--------------------------------------   WHISKY  -----------------------------------------\n";
    cout << "\n\n\t\t\tName\t\t\tPrice\t\t\tP-Code\n"<<endl;
	while((file.read(reinterpret_cast<char *>(&whobj),sizeof(whobj)))){ 
        whobj.putdata();
	    cout<<endl;
    //cout>>"WINE";
    }
    file.close();
    
    file.open("Beer.txt",ios::in | ios::binary);
	cout<<"\n\n\n---------------------------------------- BEER ---------------------------------------------\n";
    cout << "\n\n\t\t\tName\t\t\tPrice\t\t\tP-Code\n"<<endl;
	while((file.read(reinterpret_cast<char *>(&beobj),sizeof(beobj)))){ 
        beobj.putdata();
	    cout<<endl;
    //cout>>"WINE";
    }
    file.close();

    file.open("Beer.txt",ios::in | ios::binary);
	cout<<"\n\n\n--------------------------------------- VODKA --------------------------------------------\n";
    cout << "\n\n\t\tName\t\t\tPrice\t\t\tP-Code\n"<<endl;
	while((file.read(reinterpret_cast<char *>(&vobj),sizeof(vobj)))){ 
        vobj.putdata();
	    cout<<endl;
    //cout>>"WINE";
    }
    file.close();
}



void customer :: menu(){
    fstream file;
    wine wobj;
    whisky whobj;
    vodka vobj;
    beer beobj;

    file.open("Wine.txt",ios::in | ios::binary);
	cout<<"-----------------------------------------     WINE   ---------------------------------------------\n";
    cout << "\n\n\t\t\tName\t\t\tPrice\t\t\tP-Code\n\n\n";
	while((file.read(reinterpret_cast<char *>(&wobj),sizeof(wobj)))){ 
        wobj.putdata();
        cout << endl;
	    
    //cout>>"WINE";
    }
    file.close();

    file.open("Whisky.txt",ios::in | ios::binary);
	cout<<"\n\n\n----------------------------------------- WHISKY ------------------------------------------------\n";
    cout << "\n\n\t\t\tName\t\t\tPrice\t\t\tP-Code\n"<<endl;
	while((file.read(reinterpret_cast<char *>(&whobj),sizeof(whobj)))){ 
        whobj.putdata();
	    cout<<endl;
    //cout>>"WINE";
    }
    file.close();
    
    file.open("Beer.txt",ios::in | ios::binary);
	cout<<"\n\n\n---------------------------------------- BEER ----------------------------------------------\n";
    cout << "\n\n\t\t\tName\t\t\tPrice\t\t\tP-Code\n"<<endl;
	while((file.read(reinterpret_cast<char *>(&beobj),sizeof(beobj)))){ 
        beobj.putdata();
	    cout<<endl;
    //cout>>"WINE";
    }
    file.close();

    file.open("Vodka.txt",ios::in | ios::binary);
	cout<<"\n\n\n--------------------------------------- VODKA -----------------------------------------------\n";
    cout << "\n\n\t\t\tName\t\t\tPrice\t\t\tP-Code\n"<<endl;
	while((file.read(reinterpret_cast<char *>(&vobj),sizeof(vobj)))){ 
        vobj.putdata();
	    cout<<endl;
    //cout>>"WINE";
    }
    file.close();
}



class detail{
    int pccode,quantity,time;
    string name,address;

    public:
    void getdetail(){
        cout<<"--------------------------- PLEASE, FILL YOUR DETAILS -------------------------\n\n\n";
        cout<<"\t\t\tName : ";
        cin >> name ;
        cout << "\t\t\tAddress : ";
        cin >> address;
        cout << "\t\t\tProduct code : ";
        cin >> pccode;
        cout << "\t\t\tQuantity : ";
        cin >> quantity;
        cout << "\t\t\tMaximum time to deliver the item : ";
        cin >> time;
    }

    int getpcode(){
        return pccode;
    }

    string getname(){
        return name;
    }

    void setnull(){
        name = "DELETED";
        pccode = 0;
        quantity = 0;
        time = 0;
        address = "DELETED";

    }
    void putdata(){
        cout<<"\t\t|"<<name<<"\t\t|"<<pccode<<"\t\t|"<<address<<"\t\t|"<<quantity<<"\t\t|"<<time<<endl;

    }
    void setapprove(){
        name = "approved";
        pccode = 1;
        quantity = 1;
        time = 1;
        address = "approved";
    }

};



void customer :: buyitem() {
    
    fstream fobj;
    detail dobj;
    char ch = 'Y';
    fobj.open("Order.txt",ios :: app | ios :: binary);
    while(ch == 'Y'){
        dobj.getdetail();
        fobj.write((char*)&dobj,sizeof(dobj));
        cout << "--------------------------BUY MORE ? (Y/N) ------------------------ :  ";
        cin >> ch;

    }
    fobj.close();
}



void access(){
    int choice,pass,option,j=0;
    string username;
    //bool check;
    char buy;
    char y_n;
    cout << "---------------------  CHOOSE OPTION WISELY    -------------------------\n";
    cout<<"\t\t\t\t1. ADMIN\n\t\t\t\t2. USER\n\n\n\n";
    cin >> choice;
    switch (choice){
        case 1:
        for (int i=0;i<2;i++){
        cout << "\t\t\t\tUSERNAME : ";
        cin >> username;
        cout << "\n\t\t\t\tPASSWORD : ";
        cin >> pass;
            if(username == "ADMIN" && pass == 1234){
                i=2;
                cout << "connected as admin \n" ;
                //cout<< "1. ADD ITEMS \n 2. EDIT ITEMS 3. DECLINE \n 4. APPROVE ";
                //while (j != 0){


                    adminoption();
                    cout<<"continue ?";
                    cin >> y_n;
                    while (y_n == 'Y' || y_n == 'y'){
                        adminoption();
                        cin >> y_n;
                    }
                    if (y_n != 'Y' || y_n != 'y' ){
                        access();
                    }
                    
                //     cout << "CONTINUE ? PRESS n/N TO EXIT";
                //     cin >> y_n;
                //     if (y_n == 'n' || y_n == 'N' ){
                //         j = 1;
                //     } 
                // }
                //cout << "Print everything of pending orders"<<endl;
                
            }

            else{
                cout << "access denied";
                lim++;
                if(lim >=2){
                    cout << "FUCK YOU";
                    //goto bye;
                }
            }
        }
        break;

        case 2:
            customer csobj;
            csobj.menu();
            cout << "Want to buy anything from us ? (Y/N) ";
            cin >> buy ;
            if (buy == 'Y' || buy == 'y'){
                csobj.buyitem();
            }
            cout << "Thanks for buying ";
            
    }
}



void admin :: add(){
    int ch;
    cout << "----------------   WHICH PRODUCT YOU WANT TO ADD   ----------------------\n\n ";
    cout<<"\t\t\t\t1.WHISKY\n\t\t\t\t2. WINE\n\t\t\t\t3.BEER\n\t\t\t\t4.VODKA";
    cin>>ch;
    char choice = 'Y';
    fstream file;
    whisky whobj;
    wine wineobj;
    beer beobj;
    vodka vobj;
    while(choice == 'Y'){
        switch(ch){

            case 1:
            
		        file.open("Whisky.txt",ios::app | ios::binary);
		 	    if(!file){
		 		    cout<<"sorry!\n";
		 	    }
                else{
		 		    cout<<"\n\n\n--------------------------------------- WHISKY ---------------------------------\n";
	     	  	    whobj.getdata();
		 		    file.write((char*)&whobj,sizeof(whobj));
		 		    file.close();	
		 	    }
		 	break;

		    case 2:
            
			    file.open("Wine.txt",ios::app | ios::binary);
			    if(!file){
				    cout<<"sorry!\n";
			    }
                else{
				    cout<<"\n\n\n--------------------------------- WINE ----------------------------------------\n";
		     	    wineobj.getdata();
				    file.write((char*)&wineobj,sizeof(wineobj));
				    file.close();	
			    }
		
			    break;

		    case 3:
			    file.open("Beer.txt",ios::app | ios::binary);
			    cout<<"\n\n\n----------------------------------- BEER --------------------------------------\n";
		        beobj.getdata();
			    file.write((char*)&beobj,sizeof(beobj));
			    file.close();
			    break;
        
		    case 4:
			    file.open("Vodka.txt",ios::app | ios::binary);
			    cout<<"\n\n\n---------------------------------------- VODKA -------------------------------------\n";
		          vobj.getdata();
			     file.write((char*)&vobj,sizeof(vobj));
			     file.close();
			     break;
        }
        cout << "\t\t\tWANT TO CONTINUE ? (Y / N) : ";
        cin >> choice ;
    }

    // file_out.open(filename, std::ios_base::app); // file_out << "Some random text to append." << endl; 
}




void admin :: edit(){
    fstream fobj;
    int ch;
    string str;
    wine wobj;
    whisky whobj;
    beer bobj;
    vodka vobj;
    customer csobj;
    csobj.menu();
    cout <<"--------------------------- WELCOME ADMIN, PLEASE SELECT WHAT YOU WANT TO EDIT  ----------------\n";
    cout<<"\t\t\t1. WINE\n\t\t\t2. WHISKY\n\t\t\t3. BEER\n\t\t\t4.VODKA\n";
    cin >> ch;
    switch (ch)
    {
    case 1:/* constant-expression */
        fobj.open("Wine.txt",ios::in|ios::out|ios::binary);
        cout << "--------------------------------------    WINE    ---------------------------------------";
        cout <<"\t\t\t Name of product : ";
        cin >> str;
        if(!fobj){
            cout<<"Error. Cannot open file."<<endl;
            exit(EXIT_FAILURE);
        }

        

        while(fobj.read(reinterpret_cast<char *>(&wobj),sizeof (wine))){
       
            int size = sizeof(wobj);
            if(wobj.getname() == str){

                cout <<"\t\t\t-------New details -----";
                wobj.getdata();
                long pos = -1*size;
                fobj.seekp(pos, ios::cur);
                fobj.write(reinterpret_cast<const char *>(&wobj),size);
                fobj.close();
            
            }
        }
        break;
        
    case 2:
        fobj.open("Whisky.txt",ios::in|ios::out|ios::binary);
        cout << "------------------------------------    WHISKY    ------------------------------------------";
        cout <<"\t\t\t Name of product : ";
        cin >> str;
        if(!fobj){
            cout<<"Error. Cannot open file."<<endl;
            exit(EXIT_FAILURE);
        }

        

        while(fobj.read(reinterpret_cast<char *>(&whobj),sizeof (whisky))){
       
            int size = sizeof(whobj);
            if(whobj.getname() == str){

                cout <<"\t\t\t-------   New details ------ ";
                whobj.getdata();
                long pos = -1*size;
                fobj.seekp(pos, ios::cur);
                fobj.write(reinterpret_cast<const char *>(&whobj),size);
                fobj.close();
            
            }
        }
        break;

    case 3:

        fobj.open("Beer.txt",ios::in|ios::out|ios::binary);
        cout << "-----------------------    BEER    -----------------------";
        cout <<"\t\t\t Name of product : ";
        cin >> str;
        if(!fobj){
            cout<<"Error. Cannot open file."<<endl;
            exit(EXIT_FAILURE);
        }

        

        while(fobj.read(reinterpret_cast<char *>(&bobj),sizeof (beer))){
       
            int size = sizeof(bobj);
            if(bobj.getname() == str){

                cout <<"\t\t\t------------- New details --------------- ";
                bobj.getdata();
                long pos = -1*size;
                fobj.seekp(pos, ios::cur);
                fobj.write(reinterpret_cast<const char *>(&bobj),size);
                fobj.close();
            
            }
        }
        break;


    case 4: 

        fobj.open("Vodka.txt",ios::in|ios::out|ios::binary);
        cout << "-----------------------    VODKA    -----------------------";
        cout <<"\t\t\t Name of product : ";
        cin >> str;
        if(!fobj){
            cout<<"Error. Cannot open file."<<endl;
            exit(EXIT_FAILURE);
        }

        

        while(fobj.read(reinterpret_cast<char *>(&vobj),sizeof (vodka))){
       
            int size = sizeof(vobj);
            if(vobj.getname() == str){

                cout <<"\t\t\t--------- New details ---------------- ";
                vobj.getdata();
                long pos = -1*size;
                fobj.seekp(pos, ios::cur);
                fobj.write(reinterpret_cast<const char *>(&vobj),size);
                fobj.close();
            
            }
        }
    break;
    }
    
    // while(!fobj.eof()){
    //     if (fobj.)
    // }
}




void admin :: decline(){
    //cout <<"open orderlist.txt and delete using pccode AND NAME";
    int pcode;
    admin aobj;
    aobj.vieworders();
    string name;
    cout <<"--------------------    WELCOME ADMIN, PLEASE ENTER DETAILS OF ORDER TO DELETE  -----------------";
   cout<<"\t\t\tEnter existing pcode : ";
   cin>>pcode;
   cout << "\n\t\t\tEnter existing name : ";
   cin >> name;
   detail deobj;
   fstream file("Order.txt", ios::in| ios::out| ios::binary);

   if(!file){
      cout<<"Error. Cannot open file."<<endl;
      exit(EXIT_FAILURE);
   }

   bool flag=false;
    
   while(file.read(reinterpret_cast<char*>(&deobj),sizeof (detail))){
       //cout <<"inside while ";
        int size = sizeof(deobj);
         if(deobj.getpcode() == pcode && deobj.getname() == name){
         deobj.setnull();
         long pos = -1*size;
         file.seekp(pos, ios::cur);
         file.write(reinterpret_cast<const char*>(&deobj),size);
         flag=true;
         break;
      }
   }

   if(flag==true)
      cout<<"--------------      Record successfully deleted.    --------------------"<<endl;
   else
      cout<<"-----------------      Record not found.       ---------------------------"<<endl;
   file.close();

}



void admin :: approve(){
    cout <<"cut a line of orderlist.txt to other file approvedlist.txt";

    int pcode;
    string name;
   cout<<"Enter existing pcode:";
   cin>>pcode;
   cout << "Enter your name : ";
   cin >> name;
   detail deobj;
   fstream file("Order.txt", ios::in| ios::out| ios::binary);
   fstream file1("Approved.txt",ios :: in | ios :: out | ios :: binary);
   if(!file){
      cout<<"Error. Cannot open file."<<endl;
      exit(EXIT_FAILURE);
   }

   bool flag=false;
    
   while(file.read(reinterpret_cast<char *>(&deobj),sizeof (detail))){
       //cout <<"inside while ";
        int size = sizeof(deobj);
         if(deobj.getpcode() == pcode && deobj.getname() == name){
         //deobj.setnull();

         deobj.setapprove();
         long pos = -1*size;
         file.seekp(pos, ios::cur);
         file.write(reinterpret_cast<const char *>(&deobj),size);
         flag=true;
         break;
      }
   }

   if(flag==true)
      cout<<"Record successfully deleted."<<endl;
   else
      cout<<"Record not found."<<endl;
   file.close();








}








void adminoption(){
    admin obadmin;
    cout << "---------------------- WELCOME ADMIN ! PLEASE CHOOSE YOUR OPTIONS -----------------\n\n\n";
    cout<<"\t\t\t\t1.ADD ITEM\n\t\t\t\t2.VIEW ITEMS\n\t\t\t\t3.DECLINE ORDER\n\t\t\t\t4.VIEW ORDERS\n\t\t\t\t5.EDIT PRODUCT"<<endl;
    int ch;
    cin>>ch;
    switch (ch){
        case 1:
            obadmin.add();
            break;
        case 2:
            obadmin.view();
            break;
        case 3:
            obadmin.decline();
            break;
        case 4:
            obadmin.vieworders();
            break;
        case 5:
            obadmin.edit();
            break;

    }
}


void customeroption(){
    customer csobj;
    csobj.menu();
}


void admin :: vieworders(){
    fstream file;
    wine wobj;
    whisky whobj;
    vodka vobj;
    beer beobj;
    detail deobj;
    file.open("Order.txt",ios::in | ios::binary);
	cout<<"\n\n\n---------------------------------- ORDERS ---------------------------------------\n\n\n\n";
    cout <<"----------------------------------------------------------------------------------------------------\n";
    cout << "\t\t|Name\t\t|P-Code\t\t\t|address\t\t|Quantity\t|Time" <<endl;
    cout <<"----------------------------------------------------------------------------------------------------\n";
	while((file.read(reinterpret_cast<char *>(&deobj),sizeof(deobj)))){ 
        deobj.putdata();
        
	    
    //cout>>"WINE";
    }
    file.close();
}

int main(){
    int choice;

    cout << "\n\n\n-----------------------------------------------------------------------------"<<endl;
    cout << "---------------------    WELCOME TO LIQUORS HUB HOMEPAGE   ------------------"<<endl;
    cout << "-----------------------------------------------------------------------------"<<endl<<endl<<endl;
    cout << "--------------------------------------A PLATFORM WHERE WE OFFER DRINKS FOR YOU "<<endl<<endl<<endl;

    cout << " ---------Drink because you are happy, but never because you are miserable.------\n\n\n\n";


    access();
    //vieworders();

    return 0;

};