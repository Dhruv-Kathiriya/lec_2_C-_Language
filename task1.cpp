/*
1. WAP to get and display N numbers of Hotels and static
information using encapsulation with array of objects
member by including below mentioned attributes:
- hotel_id
- hotel_name
- hotel_type (like hotel or motel)
- hotel_rating (like 1 Star, 2 Start, ..., 7 Star)
- hotel_location (city name)
- hotel_establish_year
- hotel_staff_quantity
- hotel_room_quantity


*/

#include<iostream>
using namespace std;

class Hotel{
	
	private:
		int hotel_id;
		char hotel_name[100];
		char hotel_type[100];
		static int hotel_rating;
		char hotel_location[100];
		int hotel_establish_year;
		int hotel_staff_quantity;
		int hotel_room_quantity;
		
		
	public:
		
		void setData(){
			
			cout<<"Enter Id :- "<<endl;
			cin>>hotel_id;
			cout<<"Enter Name :- "<<endl;
			cin>>hotel_name;
			cout<<"Enter Type :- "<<endl;
			cin>>hotel_type;
			cout<<"Enter location :- "<<endl;
			cin>>hotel_location;
			cout<<"Enter establish_year :- "<<endl;
			cin>>hotel_establish_year;
			cout<<"Enter staff_quantity :- "<<endl;
			cin>>hotel_staff_quantity;
			cout<<"Enter Room_quantity :- "<<endl;
			cin>>hotel_room_quantity;
			
		}
		
		void getData(){
			
			cout<<"Hotel id is :- "<<hotel_id<<endl
				<<"Hotel name is :- "<<hotel_name<<endl
				<<"Hotel type is :- "<<hotel_type<<endl
				<<"Hotel Rating is :- "<<hotel_rating<<endl
				<<"Hotel location is :- "<<hotel_location<<endl
				<<"Hotel establish_year is :- "<<hotel_establish_year<<endl
				<<"Hotel staff_quantity is :- "<<hotel_staff_quantity<<endl
				<<"Hotel Room_quantity is :- "<<hotel_room_quantity<<endl;
		}
};

 int Hotel::hotel_rating=7;

int main(){
	Hotel h[6];
	int i;
	
	for(i=0; i<6; i++){
		h[i].setData();
		h[i].getData();
		
	}
	return 0;
		
}
