/*
 Name:Binod Katwal
 Due date: Sunday, February 14
 The purpose of the Program is  to implement a few sorting and searching algorithms.
*/

#include "Algorthm.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;


int main()
{   
 IntSequence sort;

    int option;
    //Displaying menu
    cout <<endl;
    cout << ">>>>=============================<<<<" << endl;
    
    cout << "   Welcome to Sorting and Searching "<<endl;
    
    cout << ">>>>=============================<<<<" <<endl;
    
int choice =0;    
while (option!=6)
    {
    //cout << "Here are your option\n " <<endl;
        cout << "\n1. Read " <<endl;
        cout << "2. Print " <<endl;
        cout << "3. Sort " <<endl;
        cout << "4. Shuffle " <<endl;
        cout << "5. Search" <<endl;
        cout << "6. Quit " <<endl;
	cout <<"Option: ";
        cin>> option;
	cout <<endl;
        // using switch statement, Takes user to the apporatiate  function ....
        
        switch (option)
        {
        case 1:  cout <<endl;
                
             sort.read();
             break;
        case 2:
                sort.print();
	       break;       
                
                
         case 3:
                
            {
                int choice;
                cout <<endl;
                cout <<">>>>=======================<<<<" <<endl;
                cout <<"HERE IS YOUR SORTING CHOICES" <<endl;
                cout <<">>>>=======================<<<<" <<endl;
                
                cout <<"\n  1.Selection sort\n  2.Insertion sort\n  3.Bubble sort\n  4.Quit" <<endl;
               cout <<"Option: ";
		 cin>> choice;
                cout <<endl;
                switch(choice)
                {
                  case 1: cout << "===SELECTION SORT===================================== " <<endl;
                     
		    sort.selection_sort(); 
		     break;
		  case 2: cout << "===INSERTION SORT======================================" <<endl;
                        sort.insertion_sort(); //display function from Intsequence
                        break;
		  case 3: cout << "===BUBBLE SORT========================================= " <<endl;
                       
                        sort.bubble_sort(); // display
			cout<<"\n============================================================"<<endl;
                        break;
                        
		  case 4: cout<< "YOU ARE QUITING" <<endl; //gets out
                      break;
                      }
              
		     cout<<endl;
              }
            break;
         case 4:
                sort.shuffle(); // randamize
                break;
         case 5:
{
	int opt;
	int key;
//	cout <<"Enter key number to search" <<endl;
//	cin>>key;
         cout <<">>>>=========================<<<<" <<endl;
         cout <<"HERE IS YOUR SEARCHING CHOICES" <<endl;
         cout <<">>>>=========================<<<<" <<endl;
         cout << "\n   1.Sequential search\n   2.Binary search\n   3.Quit" <<endl;
        cout<< "Option: "; 
	cin>> opt;
	cout<<endl;
	 int num = -1;
         while(true) // use of while loop with 3 choice
	    {
	     if (opt==1)
	       {
		num = sort.sequential_search(key);
		break;
	        }
	     if (opt==2)
	       { 
	 	num=sort.binary_search(key);
		break;
	       }
	      else
	      cout <<"Thank you for using search" <<endl;
	     break;
	    }
	   if(num==-1)
	 cout<<"Key not found."<<endl;
	else   
//cout <<"Unsorted sequence: " << seq[i]<<endl;
//cout <<"sorted Sequence:" <<seq[i]<<endl;
	     cout<<"Key found at index "<<num<<endl;
cout <<"Search with "<<num+1<<" comparision(s) "<<endl;
cout <<"\n============================================"<<endl; 	
 }
          break;                  
 case 6: cout <<"Thank you for using the program. " <<endl; //exit the program
               break;
         
                    default: cout << "Invalid option!"<<endl;         
                break;           
             }
   	}
       

}


// the end of the .cpp


