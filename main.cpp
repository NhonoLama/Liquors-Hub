#include<iostream>
using namespace std;

int lim=0;

void menu();
void access();
//void exit();

class admin{

};

class customer{

};

class wine{

    public:
    void show(){
        cout<<"1. Old Durbar \n 2. Nepal ice";
    }

};

class colddrinks{

};

void menu(){
    cout << "Enter choice"<<endl;
    cout<<"1) wine \n 2) colddrinks"<<endl;
}
void access(){
    int choice,pass,option,j=0;
    string username;
    char y_n;
    cout<<"1. admin \n 2. user";
    cin >> choice;
    if(choice == 1){
        for (int i=0;i<2;i++){
        cout << "Username : ";
        cin >> username;
        cout << "Password : ";
        cin >> pass;
            if(username == "ADMIN" && pass == 1234){
                i=2;
                cout << "connected as admin \n" << "list of orders " << endl;
                cout << "Print everything of pending orders"<<endl;
                while(j != 1){
                cout <<"1. Decline \n 2. Approve" << endl;
                cin >> option;
                switch (option){
                    case 1:
                        cout <<"Open file and delete the order" <<endl;
                        break;
                    case 2:
                        cout <<"CUT the order detail to approved orders"<<endl;
                        break;

                }
                cout << "continue ? ";
                cin >> y_n;
                if (y_n == 'n' || y_n == 'N'){
                    j = 1;
                }

                }
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
    }
    else{
        menu();
    }
}

int main(){
    int choice;
    cout << "Welcome"<<endl;
    access();
    if(lim<2){
    //menu();
        cin>>choice;
        switch (choice){
            case 1:
                wine wine_ob;
                wine_ob.show();
    
            break;
            case 2:
                colddrinks coldob;
                //coldob.show();
        //case 2:
        }
    //bye:
    }
    
    cout <<"Program terminated";

    return 0;

};