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
    void add();
    void edit();
    void approve();
    void decline();
};

class customer{
    public:
    void menu();
    void buyitem();
};

class wine{

    public:
    void show(){
        cout<<"1. Old Durbar \n 2. Nepal ice";
    }

};

class colddrinks{
    public:
    void show(){
        cout <<"1. SPRITE 2. FANTA"<<endl;

    }
};

void customer :: menu(){
    int ch;
    cout << "Enter choice"<<endl;
    cout<<"1) wine \n 2) colddrinks"<<endl;
    cin >> ch;
    switch (ch)
    {
    case 1: /* constant-expression */

        wine wineobj;
        wineobj.show();
        break;
    case 2:

        colddrinks coldobj;
        coldobj.show();
    default:
        break;
    }
}

void access(){
    int choice,pass,option,j=0;
    string username;
    //bool check;
    char y_n;
    cout<<"1. admin \n 2. user";
    cin >> choice;
    switch (choice){
        case 1:
        for (int i=0;i<2;i++){
        cout << "Username : ";
        cin >> username;
        cout << "Password : ";
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
            
    }
}

void admin :: add(){
    int price,code;
    string name;
    cout <<"adding ";
    ofstream myfile;
    myfile.open("items.txt",ios::app||ios::out);
    cout<<"name : ";
    cin >> name;
    cout <<"Price :";
    cin>> price;
    cout<< "code";
    cin >> code;
    myfile<<code<<" "<<name<<" "<<price<<endl;
    myfile.close();

    // file_out.open(filename, std::ios_base::app); // file_out << "Some random text to append." << endl; 
}

void admin :: edit(){
    fstream fobj;
    int pckey;
    fobj.open("items.txt",ios::out);

    cout <<"editing";
    cin>>pkey;

    while(!fobj.eof()){
        if (fobj.)
    }
}
void admin :: decline(){
    cout <<"open orderlist.txt and delete using pccode";
}

void admin :: approve(){
    cout <<"cut a line of orderlist.txt to other file approvedlist.txt";
}

void adminoption(){
    admin obadmin;
    cout<<"1.ADD 2.EDIT 3.DECLINE 4.APPROVE"<< endl;
    int ch;
    cin>>ch;
    switch (ch){
        case 1:
            obadmin.add();
            break;
        case 2:
            obadmin.edit();
            break;
        case 3:
            obadmin.decline();
            break;
        case 4:
            obadmin.approve();
            break;
    }
}

void customeroption(){
    customer csobj;
    csobj.menu();
}

int main(){
    int choice;
    cout << "Welcome"<<endl;
    access();
   
    cout <<"Program terminated";

    return 0;

};