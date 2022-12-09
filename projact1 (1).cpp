#include <iostream>
using namespace std;
//funcs    
void add(int i, string array[5][3]){ //add data
	string name;
	cout<<"Name: ";
	cin>>name;
	string lname;
	cout<<"Last name: ";
	cin>>lname;
	string phone;
	cout<<"Phone: ";
	cin>>phone;
	array[i][0]=name;
	array[i][1]=lname;	
	array[i][2]=phone;
         
}
    
void de(string array[5][3],string name){ //delete data
    for (int i=0; i<5; i++){
	    if(array[i][0]==name){
	    	for(int j=i; j<(5-1); j++){
			
                array[j][0] = array[j+1][0];
                array[j][1] = array[j+1][1];
                array[j][2] = array[j+1][2];
	    }
	}
	    
		}	
	}


    
void edit(string array[5][3],string name){ //edit data
	for(int i=0; i<5; i++){
		if(array[i][0]==name){
			string n;
			cout<<"Name: ";
			cin>>n;
			array[i][0]=n;
			string l;
			cout<<"Last name: ";
			cin>>l;
			array[i][1]=l;
			string ph;
			cout<<"Phone number: ";
			cin>>ph;
			array[i][2];
			break;

		}
		else {
			cout<<"we dont have this contact"<<endl;
		   break;

		}
	}
}
void search(string array[5][3],string name){//search whith name
		for(int i=0; i<5; i++){
		    if(array[i][0]==name){
		    	cout<<array[i][0]<<" "<<array[i][1]<<" "<<array[i][2]<<endl;
                break;
		}
		else {
			cout<<"we dont have this contact"<<endl;
			break;
		}
	}

}


void search2(string array[5][3],string lname){// search whith last name
		for(int i=0; i<5; i++){
		    if(array[i][1]==lname){
		    	cout<<array[i][0]<<" "<<array[i][1]<<" "<<array[i][2]<<endl;
		    
            break;
		}
		else {
			cout<<"we dont have this contact"<<endl;
			
			break;
		}
	}
}

void show(string array[5][3]){ //show all
	string temp;
	string temp1;
	string temp2;
	for (int i=0; i<=4; i++){
		for (int j=0; j<4-i; j++){
			if (array[i][1]<array[i+1][1]){
				temp=array[i][1];
				array[i][1]=array[i+1][1];
				array[i+1][1] = temp;
				
				
				temp1=array[i][0];
				array[i][0]=array[i+1][0];
				array[i+1][0] = temp1;
				
				temp=array[i][2];
				array[i][2]=array[i+1][1];
				array[i+1][2] = temp2;
			}
		}
	}
	for (int i=0; i<5; i++){
			cout<<array[i][0]<<" ";
			cout<<array[i][1]<<" ";
			cout<<array[i][2]<<" ";
		}
	} 

// main
int main(){
	int i=0;
    string array[5][3];
	bool flag=true;
	while(flag==true){
	    int contact=0;
    	cout<<"Contact managemaent system "<<endl;
    	cout<<"1 is add data , 2 is dele data "<<endl<<" 3 is edit data , 4 is serach whith whose name , 5 is search whith lastname, 6 is show the all, 7 is exit which one: ";
        cin>>contact;
    	cout<<"##################################################################################"<<endl;
	    if (contact==1){
	    	if (i>5){
	    		cout<<"first delete a contact"<<endl;
	}
			else{
			
	        	add(i,array);
	        	i++;
		    	system("pause");	
			    system("cls");	
	        }
	    }
	    else if (contact==2){
	    	string nam;
	    	cout<<"which contact do you want to delete? (name): ";
	    	cin>>nam;
	    	de(array,nam);
	    	i--;
	    	system("pause");	
			system("cls");
		}
	    else if(contact==3){
	    	cout<<"Which user do you want to change(name) : ";
	        string ne;
	        cin>>ne;
	        edit(array,ne);
            system("pause");	
			system("cls");
		}
		else if(contact==4){
			cout<<"Which contact: ";
			string name;
			cin>>name;
			search(array,name);
		    system("pause");	
			system("cls");
		}
		else if(contact==5){
			cout<<"Which contact: ";
			string lname;
			cin>>lname;
			search2(array,lname);
		    system("pause");	
			system("cls");
		}
		else if(contact==6){
			show(array);
			system("pause");	
			system("cls");
		}
		else if(contact==7){
			flag = false;
		}
   }
}