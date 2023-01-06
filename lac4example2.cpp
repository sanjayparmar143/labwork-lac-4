#include<iostream>

using namespace std;

class data{
	
	private:
		
	static int	cafe_id;
    static char cafe_name;
    static char cafe_type; 
    static char cafe_rating;
    static char cafe_location;
	static int cafe_establish_year;
    static int cafe_staff_quantity;
    static int cafe_room_quantity;

	public:
	
	static void setter();
	static void getter(); 
};
		int data::cafe_id = 0;
		char data::cafe_name = 0;
		char data::cafe_type = 0;
		char data::cafe_rating = 0;
		char data::cafe_location = 0;
		int data::cafe_establish_year = 0;
		int data::cafe_staff_quantity = 0;
		int data::cafe_room_quantity = 0;
 

void data :: setter(){
	cout<<"your value of id : ";
	cin>>cafe_id;
	
	cout<<"Your value of name : ";
	cin>>cafe_name;
	
 	cout<<"Your value of type : ";
	cin>>cafe_type;
	
	cout<<"Your value of rating : ";
	cin>>cafe_rating;
	
	cout<<"Your value of location : ";
	cin>>cafe_location;
	
	cout<<"Your value of establish year : ";
	cin>>cafe_establish_year;
	
	cout<<"Your value of staff quantity : ";
	cin>>cafe_staff_quantity;
	
	cout<<"Your value of room quantity : ";
	cin>>cafe_room_quantity;	 
		 
}

void data :: getter(){
	
    	 
}

int main(){
	
	int N;
	
	cout<<"Enter size : ";
	cin>>N;
	
	data obj[N];
	
	int i;
	
	for(i=0 ; i<N ; i++){
		
		obj[i].setter();
	}
	
	for(i=0 ; i<N ; i++){
		
		obj[i].getter();
	}
}
