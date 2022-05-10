#include<iostream>
#include<fstream>


using namespace std;

int lim=0;

void menu();
void access();
void additems();
//void exit();

class Alcohol{
	string Name;
	int price;
	string Type;
	int quantity;
	public:
		void viewitems();
		void update();
		void putdata(){
			cout<<Name<<endl<<price<<endl<<Type<<endl<<quantity;
		}
		void getdata(){
			cout<<"Name: ";
			cin>>Name;
			cout<<"\nprice: ";
			cin>>price;
			cout<<"\ntype: ";
			cin>>Type;
			cout<<"Qunatity:";
			cin>>quantity;
		}
};

void menu(){
  	cout<<"Types of Beverage:\n";
	cout<<"enter your choice:\n\n 1.Beer\n2.Wine\n3.Whiskey\n4.Vodka\n5.Rum\n6.Non-Alocoholic\n7.Exit\n";

}

void Alcohol::viewitems(){
	int a;
	ifstream file;
	Alcohol a1;

	menu();
	cin>>a;
	switch(a){
		case 1:
			file.open("Beer.txt",ios::in | ios::binary);
			cout<<"--------------- BEER ---------------\n";
			while((file.read((char*)&a1,sizeof(a1)))!= NULL){
				a1.putdata();
			}
			file.close();
			break;
		case 2:
			file.open("Wine.txt",ios::in | ios::binary);
			cout<<"--------------- WINE ---------------\n";
			while((file.read((char*)&a1,sizeof(a1)))!= NULL){
				a1.putdata();
			}
			file.close();
			break;
		case 3:
			file.open("Whiskey.txt",ios::in | ios::binary);
			cout<<"--------------- WHISKEY ---------------\n";
			while((file.read((char*)&a1,sizeof(a1))) != NULL){
				a1.putdata();
			}
			file.close();
			break;
		case 4:
			file.open("Vodka.txt",ios::in | ios::binary);
			cout<<"--------------- VODKA ---------------\n";
			while((file.read((char*)&a1,sizeof(a1)))!= NULL){
				a1.putdata();
			}
			file.close();
			break;
		case 5:
			file.open("Rum.txt",ios::in | ios::binary);
			cout<<"--------------- RUM ---------------\n";
			while((file.read((char*)&a1,sizeof(a1)))!= NULL){
				a1.putdata();
			}
			file.close();
			break;
	}
}

void Alcohol::update(){
	int a;
	ofstream file;
	Alcohol au;

     menu();
	cin>>a;
	switch(a){
		case 1:
			file.open("Beer.txt",ios::app | ios::binary);
			if(!file){
				cout<<"sorry!\n";
			}else{
				cout<<"--------------- BEER ---------------\n";
			  	au.getdata();
				file.write((char*)&au,sizeof(au));
				file.close();	
			}
			break;
		case 2:
			file.open("Wine.txt",ios::app | ios::binary);
			if(!file){
				cout<<"sorry!\n";
			}else{
				cout<<"--------------- WINE ---------------\n";
		     	au.getdata();
				file.write((char*)&au,sizeof(au));
				file.close();	
			}
		
			break;
		case 3:
			file.open("Whiskey.txt",ios::app | ios::binary);
			cout<<"--------------- WHISKEY ---------------\n";
		     au.getdata();
			file.write((char*)&au,sizeof(au));
			file.close();
			break;
		case 4:
			file.open("Vodka.txt",ios::app | ios::binary);
			cout<<"--------------- VODKA ---------------\n";
		     au.getdata();
			file.write((char*)&au,sizeof(au));
			file.close();
			break;
		case 5:
			file.open("Rum.txt",ios::app | ios::binary);
			cout<<"--------------- RUM ---------------\n";
	          au.getdata();
			file.write((char*)&au,sizeof(au));
			file.close();
			break;
	}
}

void access(){
    int choice,pass,option,j=0;
    string username;
    Alcohol a;
    char y_n;
    cout<<"1. admin \n 2. user\n\n";
    cin >> choice;
    if(choice == 1){
        for (int i=0;i<2;i++){
        cout << "Username : ";
        cin >> username;
        cout << "Password : ";
        cin >> pass;
            if(username == "ADMIN" && pass == 1234){
                i=2;
                cout << "connected as admin \n";
                cout<< "what u wanna do? :\n";
			 cout<<"\n 1.View List. \n 2.Update List. \n 3.View Orders \n4.Back\n ";
			 cin>>choice;
			  switch(choice){
			    	case 1:
			    		a.viewitems();
			    	case 2:
				     a.update();
		       }
               }else{
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
    cout << "Welcome"<<endl;
    access();

    return 0;

};
