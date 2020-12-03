#include<iostream>
#include<fstream>
#include <string>
#include<bits/stdc++.h>
#define FLOAT_MIN -100
using namespace std;
map<string,double> get_q_table_1_from_csv()
{
	ifstream myFile;
	myFile.open("Q4_lr_0.6_df_0.4.csv");
	map<string,double> q_table;
//	int c=1;
	while(myFile.good())
	{
		string a;
		string b;
		string c;
		int j;
		myFile>>a;
	    vector<string> v;
		int pos=a.find(",");
		b=a.substr(0,pos);
		c=a.substr(pos+1);
		if(b=="")
		break; 
//		cout<<b<<" "<<c<<"\n\n";
	//	cout<<b<<"xxx"<<"\n";
		double d=stod(c);	
		q_table.insert(pair<string,double>(b,d)); 
	}
 // 	cout<<q_table.size()<<"\n\n";
//	map<string,double>::iterator itr; 
//	for (itr = q_table.begin(); itr != q_table.end(); ++itr)
//	{ 
//        cout << '\t' << itr->first 
//             << '\t' << itr->second << "\n"; 
//    } 
//    cout << "\n"; 

return q_table;

}
map<string,double> get_q_table_2_from_csv()
{
	ifstream myFile;
	myFile.open("Q5_lr_0.6_df_0.4.csv");
	map<string,double> q_table;
	int c=1;
	while(myFile.good())
	{
		string a;
		string b;
		string c;
		int j;
		myFile>>a;
	    vector<string> v;
		int pos=a.find(",");
		b=a.substr(0,pos);
		c=a.substr(pos+1);
		if(b=="")
		break; 
//		cout<<b<<" "<<c<<"\n\n";
	//	cout<<b<<"xxx"<<"\n";
		double d=stod(c);	
		q_table.insert(pair<string,double>(b,d)); 
	}
 // 	cout<<q_table.size()<<"\n\n";
//	map<string,double>::iterator itr; 
//	for (itr = q_table.begin(); itr != q_table.end(); ++itr)
//	{ 
//        cout << '\t' << itr->first 
//             << '\t' << itr->second << "\n"; 
//    } 
//    cout << "\n"; 

return q_table;

}

void save_q_table(map<string,double> q_table)
{
	ofstream qsave;
    qsave.open("Q6_lr_0.6_df_0.4.csv");
    map<string,double>::iterator itr;
	cout<<"Below is the q table"<<"\n"; 
	for (itr = q_table.begin(); itr != q_table.end(); ++itr)
	{ 
		qsave<<itr->first<<","<<itr->second <<endl; 
    } 
    
}
