// Write a program lower.cpp that prints the bottom-left half of a square, given the side length.

  /*

Author: Farhan Pushan

Course: CSCI-135

Instructor: Maryash

Assignment: Lab4D


*/

#include <iostream>

using namespace std;

int main()

{

    int height; // declaring height variable data type
    int width; // declaring width variable data type

    char asterisk = '*'; // declaring the * char as asterisk 

    int pos1, pos2; //declaring pos1, pos2 as variables and int data type

    int input_size; // declaring the variable input_size as int data type

    cout << "Input size: " ; //print out input size as a prompt for user

    cin >> input_size ; //takes in user input after input size

    height = input_size; // variable height will mean input_size from user

    width = input_size;// variable width will mean input_size from user

    cout << endl; // skips a line

    //for the row 0, col 0, print an asterisk

    //on that same row go to the inupt_size #'s location, print an asterisk

    //row			col

//0			0,7

//1			1,6

//2			2,5

//3			3,4

//x			x,input_size-x-1			
    for (int row = 0;row < height; row ++){ //declaring row inside, start off at 0
        
        cout<< "*";                              //as long as row is less than height
                                            //increment row by 1
          		 
        for (int col = 0; col < row; col ++){//declaring col, start off at 0
                                                //as long as col < width(input_size)
                                                //col increments by 1
               {cout << "*"; }                                 //recall that this loop is inside first
                                                //for loop
    	
      		//cout << col << " " << row << endl;
		
		
		//for lower.cpp, i want to print out input_size amount of asterisks
		  // on the last row of the input_size amount of rows
		  
		  // However, for each row, i want to increase and print the asterisk
		    //by one untill i hit the input_size amount and i want to stop
		    
		  //As i increase row and column by 1, i want to increase printing
		    //out an asterisk by 1
		    
		    
      		//pos1 = row; //pos1 will now be the value of row

      		//pos2 = input_size-row-1; //pos2 will now be the user inp - row -1
  		
      	/*	if (col == pos1 || col == pos2){ 

      			cout << "*";
      		}

      		else{

      			cout << " ";
      		} */
 		 
    	}	

        cout << endl;
    }

    return 0;

}
