#ifndef SORTINGS_H
#define SORTINGS_H

const int INITIAL_CAPACITY = 20;

class  IntSequence
{
   public:
	// Default constructor
        IntSequence(); // create an integer array with capacity = INITIAL_CAPACITY
        IntSequence(int in_capacity); //create an integer array with capacity = in_capacity
        void insert(int item);  // insert the item into the end of the integer 
        void print();  // display all the items in the array
	void selection_sort();//sort the arrayinto non-decreasing order  
        void insertion_sort();//sort the arrayinto non-decreasing order
        void bubble_sort(); //sort the arrayinto non-decreasing order
	void shuffle(); //shuffle the items in the sequence
	int sequential_search(int key);// searh a target key in the array
	int binary_search(int);//sort the arrayinto non-decreasing order first, then
        ~IntSequence();  // destructor
       void read();
   private:
        int capacity; // the capacity of the array
	int count; // actual num o items in the array
	int* seq;  // the pointer point at the first item in the array
};

#endif


