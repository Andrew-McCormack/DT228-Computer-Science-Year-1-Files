/*    Author: Andrew McCormack
        Date:29/04/14
        Title: Lab Test 4
        Description: This program will allow the user to input the flight details of two passengers and then read this information back.
                            Information is stored and read back through the a pointer to the structure Details along with two function, 
                            Enter Detail - To store the information, and Display Details, to displaythe information

*/
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <Windows.h>

/**********************Declare  Structure*************************/
typedef struct Details
{
    int Flight_Number;
    char Flight_Date[11];
    char Passenger_Surname[21];
    char Passenger_First_Name[11];
    int Seat_Number;
}Details;


/******Initialise pointer to details with space for two variables*******/
Details *ptr = (Details *)malloc(sizeof(Details) * 2);


/****************Declare Enter Details Function*******************/
void Enter_Details(void);


/****************Declare Display Details Function******************/
void Display_Details(void);


/*************************Start Main***************************/
main()
{
    Enter_Details();
    Display_Details();
    
    Sleep(20000);
    
}
/************************************************************/


/******************Start Enter Details() Function****************/
void Enter_Details(void)
{
    int i;
    
    //Input information into pointer to Details structure
    for (i = 0; i < 2; i++)
    {
        printf("Enter passenger %d's flight number: ", (i + 1));
        //This small function allows ints above 10 to be entered without interfering with following fgets inputs, i.e.  it clears out your input buffer
        while( (ptr[i].Flight_Number = fgetc( stdin )) != EOF && ptr[i].Flight_Number != '\n' );
            
        printf("Enter passenger %d's flight date (dd/mm/yy): ", (i + 1)); 
        fgets (ptr[i].Flight_Date, sizeof(char) * 11, stdin);
        
        printf("Enter passenger %d's surname: ", (i + 1));
        fgets (ptr[i].Passenger_Surname, sizeof(char) * 21, stdin);
        
        printf("Enter passenger %d's first name: ", (i + 1));
        fgets (ptr[i].Passenger_First_Name, sizeof(char) * 8, stdin);
        
        printf("Enter passenger %d's seat number: ", (i + 1));
        //This small function allows ints above 10 to be entered without interfering with following fgets inputs, i.e.  it clears out your input buffer
        while( (ptr[i].Seat_Number = fgetc( stdin )) != EOF && ptr[i].Seat_Number != '\n' );
    }
    
}
/************************************************************/


/******************Start Display Details( Function***************/
void Display_Details (void)
{
    int i;
    
    //Display information from pointer to Details structure
    for (i = 0; i < 2; i++)
    {
        printf("\n\n");
        
        printf("Passenger %d's flight number is: %d \n", (i + 1), ptr[i].Flight_Number);
        printf("Passenger %d's flight date is: %s", (i + 1), ptr[i].Flight_Date); 
        printf("Passenger %d's surname is %s", (i + 1), ptr[i].Passenger_Surname);
        printf("Passenger %d's first name is %s", (i + 1), ptr[i].Passenger_First_Name);
        printf("Passenger %d's seat number is %d \n", (i + 1), ptr[i].Seat_Number);
        
        printf("\n\n");
    }
}
/************************************************************/