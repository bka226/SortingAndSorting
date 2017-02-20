/*
Name of the file: Int_Sequence.cpp
Name of the writer: Binod Katwal
The Due Date: Sunday, Februrary 14

*/





#include"Algorthm.h" // calling header file
#include <iostream> // basic input and output c++
#include <string> // C++ identifier
#include <iomanip> // basic c++ identifier
#include <vector>
using namespace std; //  helps to undo std in every cout and cin
 
 // create an integer array with capacity = INITIAL_CAPACITY
IntSequence:: IntSequence() //Constructor, signing capacity ,seq
{
    capacity= INITIAL_CAPACITY;
    seq = new int[capacity];
}



//create an integer array with capacity = in_capacity
IntSequence::IntSequence(int in_capacity)

{
// declaration of in_capacity
    capacity = in_capacity;
    seq = new int[capacity];
    count = 0;
   
}


// insert the item into the end of the integer
void IntSequence::insert(int item) // insert function
{
    if(count==(capacity))
{
 cout<<"max capacity Reached.";
}   
 else
 seq[count++]=item;
}

// display all the items in the array
void IntSequence::print() 
{
    cout<<"\nSequence: ";
    for(int i=0;i<count;i++)  // for loop
{
cout<<seq[i]<<" ";
}
    cout<<endl;
    
    
}
//sort the arrayinto non-decreasing order
void IntSequence::selection_sort()
{
    cout<<"\n";
    for(int i=0;i<count;i++)
    {
        cout<<"\nIteration "<<i+1<<" ";
        int min=i,j;
        //main part of selection sort
        for(j=i+1;j<count;j++)
        {
            if(seq[min]>seq[j]) min=j;
        }
        
        int t=seq[min]; 
	seq[min]=seq[i];
	 seq[i]=t;
        
        for(int k=0;k<count;k++)
	cout<<seq[k]<<" ";
    }
}
//sort the arrayinto non-decreasing order
void IntSequence::insertion_sort()
{
 // Declaration of the variables
    cout<<"\n";
    for (int i = 1; i < count; i++)
    {
        int ci=seq[i];
// main part of the function
        for (int j = i; j >= 1; j--)
        {
            //main part of the insertion sort
            if (seq[j] < seq[j-1])
            {
                int temp = seq[j];
                seq[j] = seq[j-1];
                seq[j-1] = temp; }
            else break;
            
            cout<<"\nInsert "<<ci<<"    ";
            for(int k=0;k<count;k++)
	cout<<seq[k]<<" ";
        }
    }
}
//sort the arrayinto non-decreasing order
void IntSequence::bubble_sort()
{
 //Declaration of variables
    cout<<"\n";
// use of nested loop
    for(int i=0;i<count;i++)
    {
        cout<<"\nIteration "<<i+1<<"   ";
        for(int j=i+1;j<count;j++)
        {
            //main part of the bubble sort
            if(seq[i]>seq[j])
            
	{
	int t=seq[i];
 	seq[i]=seq[j];
 	seq[j]=t;
	}
        }
        for(int k=0;k<count;k++)
	cout<<seq[k]<<" ";
    } //end of the BubbleSort function
 
 
}
//shuffle the items in the sequence
void IntSequence::shuffle() // the function will randamize the input
{
    int temp[count];
    for(int i=1;i<count;i=i+2)
    {
        int t=seq[i];
        seq[i]=seq[i-1];
        seq[i-1]=t;
    }
}
// searh a target key in the array
int IntSequence::sequential_search(int key) // searching algorithm
{
    int compare_count=0;// declaratin of variable
    int i=0; //declaration of variable
cout <<" Enter the key to find: " ;
cin>>key;
    for(;i<count;i++)
    {
        if(key==seq[i])
 	{
 	compare_count++;
 	break;
	}
        compare_count++;
    }
cout <<"Sequence: ";
for(int k=0;k<count;k++){
cout  << seq[k]<<" ";}
//cout <<"sorted Sequence:" <<seq[k]<<" ";}
cout <<endl;
    if(i==count) return -1;
    else return i;
}
//sort the arrayinto non-decreasing order first, then
int IntSequence::binary_search(int key) //search binary function
{

cout <<" Enter the key to find: ";
cin>>key;  
     int l=0,h=count-1; // declare variables
       int mid=(l+h)/2; // formula to find mid
      
       while(l<=h )
       {
//main part of the functon binary search
          mid=(l+h)/2;
        if(key==seq[mid])
        return (mid);
        if(key <  seq[mid])
         h = mid-1;
        else
         l= mid+1;
	}
cout <<"Sequence: ";
for(int k=0;k<count;k++){
cout  << seq[k]<<" ";}
cout <<endl;

  return -1;
}
      


//Destructor
IntSequence::~IntSequence()
{
  delete seq;
    
}  

// Ask user how many elements user enter and follow as below
void IntSequence::read()// read function
{
int item=0;
    int itemNumber;
cout<<"Enter number of elements you want to add: ";
    cin>>itemNumber;
    cout <<endl;
for (int i=0; i<=itemNumber-1; i++)
{
cout<< "Enter the next element: ";
      cin>>item;
IntSequence::insert(item);
}
   
}
 
//Read Function
/*

void IntSequence::read()
{
// ask you to input the number of element
int item;
int q=0;
while(item !=q || item != q)
{
cout<< "Enter the next element(Enter 'q' to stop): ";
cin>>item;
if (item==q || item == q)
{
break;
}

IntSequence::insert(item);
//cout <<item <<endl;
}
}

*/
