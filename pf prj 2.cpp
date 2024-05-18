 #include <iostream>
#include <string>

#include <stdlib.h>
using namespace std;
struct Reservation{
   
	int date;
	string dptcty;
	string destcty;
	string phonenumber;
	string trainclass;
	string mnth;
	string name;
	string timing;
} res;


void traintiming(){


	int exit;
	cout<<"Below are the timings of the train :"<<endl;
	cout<<"luxury train-9:00am"<<endl;
	cout<<"Economy train-12:00 pm"<<endl;
	cout<<"Super luxury -3:00 pm"<<endl;
	cout<<endl;

	
	do{
	cout<<"press 1 to exit"<<endl;
		cin>>exit;
		
	}while(exit!=1);
}
		Reservation booked(){
 	
 	
	
	 Reservation res;


	cout<<"Kindly enter your good name :"<<endl;
	cin>>res.name;
	cout<<"enter you phone number"<<endl;
int size;
	do{
		cin>>res.phonenumber;
		size=res.phonenumber.size();
		if(size!=11){
			cout<<"Invalid phonenumber"<<endl;
		}
		if(size>11){
			cout<<"larger than usual .try again."<<endl;
		}
		if(size<11){
			cout<<"smaller than usual. try again."<<endl;
		}
		
	}while(size!=11);
	cout<<"enter the date (DD/MM)"<<endl;
	int month;
	do{
	
	
    cin>>res.date;
	cin>>month;
	if(res.date<1||res.date>31||month<1||month>12)
	cout<<"kindly enter the correct date and month"<<endl;}
	while(res.date<1||res.date>31||month<1||month>12);
	switch(month){
		case 1:
		    res.mnth="January";
			break;
			case 2:
	    res.mnth="February";
				break;
				case 3:
					res.mnth="April";
					break;
					case 4:
					res.mnth="March";
						break;
						case 5:
							res.mnth="May";
							break;
							case 6:
							res.mnth="June";
								break;
								case 7:
						         res.mnth="July";
										break;
									case 8:
										res.mnth="August";
											break;
										case 9:
											res.mnth="September";
												break;
										res.mnth="October";
												break;
												case 11:
											res.mnth="November";
												break;
												case 12:
											res.mnth="December";
												break;
	}
	cout<<"enter the departure city name :"<<endl;
	cout<<"we provide our services in"<<endl;
	cout<<"LAHORE / ISLAMABAD /KARACHI /FAISALABAD"<<endl;
	do{cin>>res.dptcty;
	if(!(res.dptcty.find('lahore')||res.dptcty.find('islamabad')||res.dptcty.find('karachi')||res.dptcty.find('faisalabad')||res.dptcty.find('ISLAMABAD')||res.dptcty.find('LAHORE')||res.dptcty.find('KARACHI')||res.dptcty.find('FAISALABAD'))){
		cout<<"sorry for the inconvenience but we dont provide ou service in the given city . try again"<<endl;
	}
	}while(!(res.dptcty.find('lahore')||res.dptcty.find('islamabad')||res.dptcty.find('karachi')||res.dptcty.find('faisalabad'||res.dptcty.find('ISLAMABAD')||res.dptcty.find('LAHORE')||res.dptcty.find('KARACHI')||res.dptcty.find('FAISALABAD'))));
	cout<<"enter the detination city name :"<<endl;
	cout<<"we provide our services in"<<endl;
	cout<<"LAHORE / ISLAMABAD /KARACHI /FAISALABAD"<<endl;
	do{cin>>res.destcty;
	if(!(res.destcty.find('lahore')||res.destcty.find('islamabad')||res.destcty.find('karachi')||res.destcty.find('faisalabad')||res.destcty.find('LAHORE')||res.destcty.find('ISLAMABAD')||res.destcty.find('KARACHI')||res.destcty.find('FAISALABAD'))){
		cout<<"sorry for the inconvenience but we dont provide ou service in the given city . try again"<<endl;
	}
	}while(!(res.destcty.find('lahore')||res.destcty.find('islamabad')||res.destcty.find('karachi')||res.destcty.find('faisalabad')||res.destcty.find('LAHORE')||res.destcty.find('ISLAMABAD')||res.destcty.find('KARACHI')||res.destcty.find('FAISALABAD')));
	cout<<"the available timing slots are :"<<endl;
	cout<<"press 1 for 9:00 am luxury train ."<<endl;
	cout<<"press 2 for 12:00 pm economy train ."<<endl;
	cout<<"press 3 for 3:00 pm super luxury train"<<endl;
	int option;
	do{
		cin>>option;
		if(option<1||option>3){
			cout<<" wrong entry try again"<<endl;
			
		}
	}while(option<1||option>3);
		switch(option){
			case 1:
				res.timing=("9am");
			res.trainclass="luxury";
				
			break;
			case 2:
			res.timing=("12pm");
				res.trainclass="economy";
					break;
					
			case 3:
				res.timing=("3pm");
			res.trainclass="super luxury";
				break;
						
				
		}
		cout<<"You have successfuly booked a "<<res.trainclass<<" train ticket"<<"by the name of"<<res.name<<"from"<<res.dptcty<<" to "<<res.destcty<<" on "<<res.date<<"th "<<res.mnth<<" at "<<res.timing<<" ."<<endl;
return res;
}
Reservation checkreservation(Reservation res){
	
	string name,phonenumber;
	int exit;
	
	do{
		cout<<"enter the passenger name :"<<endl;
	cin>>name;
	cout<<"enter the phonenumber :";
	cin>>phonenumber;

		if(res.name==name && res.phonenumber==phonenumber){
			
			cout<<"reservation found !"<<endl;
			cout<<"You have  a reservation of "<<res.trainclass<<" train ticket"<<" by the name of "<<res.name<<" from "<<res.dptcty<<" to "<<res.destcty<<" on "<<res.date<<"th "<<res.mnth<<" at "<<res.timing<<" .  "<<endl;
		}

else{



		cout<<" no reservation has been made by the name of "<<name<<" and phonenumber "<<phonenumber<<endl;

	}
	
	cout<<"press 1 to exit"<<endl;
	cin>>exit;
	}while(exit!=1);
	}

int main(){
	 Reservation res;
int option;
	cout<<"WELCOME TO OUR ONLINE RESERVATION SYSYTEM ....."<<endl;
	cout<<"we wish you a safe journey"<<endl;

	do{
		cout<<"press 1 to book a seat."<<endl;
	cout<<"press 2 to know the train timings ."<<endl;
	cout<<"press 3 to inquire your reservation ."<<endl;
	cout<<"press 4 to exit"<<endl;
		cin>>option;
		if(option>4||option<1){
			cout<<"kindly press the correct button"<<endl;
		}
	
	switch(option){
		case 1:
		   res=booked();
				break;
			case 2:
				traintiming();
					break;
					case 3:
				 	checkreservation(res);
				 break;
					}
					
					
					
	}while(option!=4);
	
	
	
return 0;
}
