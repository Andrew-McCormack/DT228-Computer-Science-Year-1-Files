/*Employee Database
Author : Andrew McCormack
Description: This program will manage an employee dat abase (on a single data file). The program will display a menu in a loop (accepting 1:5 as values) which allows the
                     user to: 1. Add Employee | 2. Delete Employee | 3. List Employees | 4. Compact Records | 5. List employees by department | 6. Exit.
                     These 6 options are each given ther own function. 
                     
                     Add Employee includes a restriction that the Employee number must be unique by checking the number against all other employee numbers in the file.
                     
                     When Delete Employees is selected, employees will be deleted, after requesting an Employee number as the key. If the employee record cannot be found, 
                     the user is informed, otherwise the record gets marked with ‘*’ in the first byte.
                     
                     Selecting List Employees will display on Screen a list of all active employees (ones that have not had their employee number changed to *) on file, followed by the 
                     total number of records and number of deleted employees values retrieved from the header record. The information is laid out in a meaningful manner, with 
                     contiguous blocks of employee information shown on screen in an easy to read format.
                     
                     Selecting Compact Records, will cause the removal of all external fragmentation from the file. Adding, deleting and compacting record(s) options, results in the 
                     appropriate updates to the header record and informative messages to the user of the outcome. Records will also be sorted in increasing order from smallest
                     to highest by each records employee number using bubble sort.
                     
                     List Employees By Department will display on Screen a list of all active employees (ones that have not had their employee number changed to *) ,that are listed
                     under the department code the user enters, on file. The information is laid out in a meaningful manner, with 
                     contiguous blocks of employee information shown on screen in an easy to read format.
                     
Compiled on Borland Compiler, Borland Software Coporation
Date : 28/04/14
*/

/*----------------------------------------------------------------------------*/
/* Define libraries to be included */
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <Windows.h>
# include<conio.h>
/*----------------------------------------------------------------------------*/

/* Define Structures*/
typedef struct header
{
    int Total_Records;
    int Number_Of_Deleted;
}header;

typedef struct record
{
    char Employee_Number[6];
    char Last_Name[16];
    char First_Name[16];
    char Address[26];
    char Department_Code[10];
    char Duration[10];
}record;
/*----------------------------------------------------------------------------*/

/* Define pointers to structures*/
record *ptr = (record *)malloc(sizeof(record)); /*use of malloc to set aside memory relative to size of structure record*/
record *ptr1 = (record *)malloc(sizeof(record)); /*use of malloc to set aside memory relative to size of structure record*/
header *ptr2 = (header *)malloc(sizeof(header)); /*use of malloc to set aside memory relative to size of structure header*/
/*----------------------------------------------------------------------------*/

/* Define Functions*/
void Add_An_Employee();
void Delete_An_Employee();
void List_Employees();
void Compact_Records();
void List_By_Department();
/*----------------------------------------------------------------------------*/

/* Main Function */

main()
{
    char selection = '7'; //Initialise selection to number not used in switch case to avoid accidentally triggering options
    
    while (selection != '6')//Continuous while loop until player enters 6 for their selection, thus exiting the loop and program
    {
        clrscr(); //Clears the screen of any previous output, should the user have previously selected a function and the program returned back into main
        /* print menu messages*/
        printf("\n    @@@@@   @     @   @@@@@   @        @@@     @   @   @@@@@   @@@@@ \n");
        printf("    @       @ @ @ @   @    @  @       @   @     @ @    @       @     \n");
        printf("    @@@@@   @  @  @   @@@@@   @       @   @      @     @@@@@   @@@@@ \n"); 
        printf("    @       @     @   @       @       @   @     @      @       @     \n");
        printf("    @@@@@   @     @   @       @@@@@    @@@     @       @@@@@   @@@@@ \n\n\n"); 

        printf("              @@@@    @@@@@    @@@@     @@@    @@@@    @@@@   \n");
        printf("              @   @   @       @        @   @   @   @   @   @  \n"); 
        printf("              @@@@    @@@@@   @        @   @   @@@@    @   @  \n"); 
        printf("              @ @     @       @        @   @   @ @     @   @  \n");
        printf("              @  @    @@@@@    @@@@     @@@    @  @    @@@@   \n");
    
        printf("\n\n    1. Add an employee \n");
        printf("    2. Delete an employee \n");
        printf("    3. List employees \n");
        printf("    4. Compact records \n");
        printf("    5. List Employees by department \n");
        printf("    6. Exit \n\n");
        printf("  Please choose an option from the list above\n");
        scanf(" %c", &selection);
        
        switch (selection)
        {
            //switch case calls various functions depending on user input relating to the options shown in the main menu
            case '1':
            Add_An_Employee();
            break;

            case '2':
            Delete_An_Employee();
            break;
           
            case '3':
            clrscr();
            List_Employees();
            break;
            
            case '4':
            Compact_Records();
            break;
            
            case '5':
            List_By_Department();
            break;
            
            case '6':
            printf("Now exiting program");
            break;
            
            default:
            printf("Invalid input, please input option again\n");
            
        }
                
    }
    
    //free all pointers now that the program is terminating 
    free(ptr);
    free(ptr1);
    free(ptr2);
}
/*----------------------------------------------------------------------------*/


/*----------------------------------------------------------------------------*/
void Add_An_Employee(void) 
{
    clrscr(); //Clears previous output
    
    /* Declare file pointers*/
    FILE *headerfile;
    FILE *outfile;
    FILE * infile;
    
    int  Local_Recs = 0; //Local Recs is used for counting how many new employees have been added to employee.dat since calling this function
    char local_id[6]; //Used for comparing new user entered id against id's in employee.dat to ensure the same id is not on file twice 
    char again = 'y';
    // open Accounts file for writing
   
   infile = fopen ("employee.dat", "rb"); //Opens file for reading in binary mode
   if (infile == NULL) //If file cannot be found
    {
          printf("\nError opening accounts.dat, creating new one!\n\n");
          
          outfile = fopen ("employee.dat","wb"); //Create new employee.dat and open in write mode
          //Set both variables in the header record pointer to 0 to initialise the header of employee.dat
          ptr2->Total_Records = 0;
          ptr2->Number_Of_Deleted = 0;
         
          //Write header record pointer values to the beginning of employee..dat
          fwrite (ptr2, sizeof(struct header), 1, outfile);
          
          //Close the fille
          fclose(outfile);
                    
          //Stop program for a second so user can read the error message and know that a new employee.dat has been created
          Sleep(1000);
          
          //Call function recursively now that employee.dat has been created and the initialised header record has been written
          Add_An_Employee();
    }

   else
   {
       headerfile = fopen ("employee.dat","r+b"); //open file for reading + in binary
       outfile = fopen ("employee.dat","ab"); //open file for appending in binary
    
        /* This loop allows the user to endlessly enter employees into the employee.dat file provided they choose yes  when asked to add another*/
        while (again == 'y' || again == 'Y') 
        {
            fread (ptr2, sizeof(struct header), 1, infile); //The header of employee.dat is read into ptr2 which points to header record
            Local_Recs = ptr2->Total_Records; //Set Local Recs to the amount  read in from the header of employee.dat in header pointer
            Local_Recs++; //Increments the total number of records 
         
            ptr2->Total_Records = Local_Recs; //Sets the header pointer to the total number of records
            fwrite (ptr2, sizeof(struct header), 1, headerfile); //Writes header pointer to employee.dat, overwritting any previous header information it contained
         
            printf("Employee Number   : ");
            scanf(" %[^\n]s", local_id);  //Reads in an employee id and accounts for spaces and carriage return
        
            /*Continuously check user inputted id against employee id's in employee.dat and checks if the id is too long, until both conditions are satisfied*/
            while(fread (ptr, sizeof(struct record), 1, infile) == 1)
            {
                while(strcmp(ptr->Employee_Number,local_id) == 0)
                {
                    printf("Employee Number is already in the database, please input again\n");
                    scanf("%s", local_id);
                    fseek(infile, 0, SEEK_END);
                    rewind(infile);
                }
            
      
                while (strlen(local_id) > 5)
                {
                    printf("Employee Number is too long, please enter again\n");
                    scanf(" %[^\n]s", local_id); 
                    fseek(infile, 0, SEEK_END);
                    rewind(infile);
                }
            }
        
            strcpy(ptr->Employee_Number, local_id); //Copies the user inputted id into the id of the record pointer
      
            printf("\nLast Name       : ");
            scanf (" %[^\n]s", ptr->Last_Name);
        
            while (strlen(ptr->Last_Name) > 15)
            {
                printf("Last name is too long, please enter again\n");
                scanf(" %[^\n]s", ptr->Last_Name); 
            }
        
            printf("\nFirst Name      : ");
            scanf (" %[^\n]s", ptr->First_Name);
      
            while (strlen(ptr->First_Name) > 15)
            {
                printf("First name is too long, please enter again\n");
                scanf(" %[^\n]s", ptr->First_Name); 
            }
      
            printf("\nAddress         : ");
            scanf(" %[^\n]s", ptr->Address);
      
            while (strlen(ptr->Address) > 25)
            {
                printf("Address is too long, please enter again\n");
                scanf(" %[^\n]s", ptr->Address);
            }
      
            printf("\nDepartment Code : ");
            scanf ("%s", ptr->Department_Code);
      
            while (strlen(ptr->Department_Code) > 9)
            {
                printf("Department code is too long, please enter again\n");
                scanf(" %[^\n]s", ptr->Department_Code); 
            }
      
            printf("\nDuration        : ");
            scanf(" %[^\n]s", ptr->Duration);
      
            while (strlen(ptr->Duration) > 9)
            {
                printf("Duration is too long, please enter again\n");
                scanf(" %[^\n]s", ptr->Duration); 
            }

            // write entire structure to employee.dat file
            fwrite (ptr, sizeof(struct record), 1, outfile);  
            printf("\nAdd another employee?\n");
            scanf(" %c", &again);
        
            //Resets file pointer to the beginning of file to allow for updating of header and entry of new employees should the user choose yes 
            rewind(outfile);
            rewind(infile);
            rewind(headerfile);
        }      
    } 
     
    //Close all file pointers
    fclose(outfile);
    fclose(infile);
    fclose(headerfile);
}
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
void Delete_An_Employee(void)
{
    clrscr();//Clears any previous output
    
    /* Declare file pointers*/
    FILE *headerfile;
    FILE *outfile;
    FILE *ft;
    
    int local_del, local_rec = 0; //Used for reading header pointer results when it reads header of employee.dat
    int validator = 0; //Used for checking if the entered id was valid, (if a matching employee_Number was found)
    char local_id[6]; //Used for checking user inputted id against employee_number read in from employee.dat
    char again = 'y'; //Allows the user to repeat the process of deleting an employee should a matching employee number not be found the first time
    
    outfile = fopen ("employee.dat","r+b"); //Open employee.dat for reading + in binary
    if (outfile == NULL)
    {
        printf("\nError opening accounts.dat\n\n"); //If file cannot be opened
    }

    else
    {
        ft = fopen("temp.dat","wb"); //Open temp.dat for writing in binary
       
        while (again == 'y' || again == 'Y') //Repeats the following process should the user choose to
        {
            /*Reset all file pointer positions to the start of the file*/
            fseek(outfile, 0, SEEK_END);
            rewind(outfile);
            fseek(ft, 0, SEEK_END);
            rewind(ft);
            
            //Read in the header of employee.dat into header pointer and write header pointer to temp.dat
            fread (ptr2, sizeof(struct header), 1, outfile);
            fwrite(ptr2, sizeof(struct header), 1, ft); 
            // Set record number read in from header of employee.dat to local_del 
            local_del = ptr2->Number_Of_Deleted;
           
            printf("Enter the id of the employee to be deleted : ");
            scanf("%s", local_id);
            
            /*While it is possible to read in a full record from employee.dat (will return 0 if not)*/
            while(fread(ptr, sizeof(struct record), 1, outfile)==1)
            {
                //If there is a match at this current read in record for local_id
                if(strcmp(ptr->Employee_Number,local_id) == 0)
                {
                    //Change the information for this current records Employee)Number to a * and write it to temp.dat
                    strcpy(ptr->Employee_Number, "*");
                    fwrite(ptr, sizeof(struct record), 1, ft);
                    
                    //Set validator to 1 so we know that employee was successfully found and deleted
                    validator = 1;
                    
                    //Open another insance of temp.dat for read + in binary
                    headerfile = fopen ("temp.dat","r+b");
                    local_del++; //Increment the total amount of deleted records
                    ptr2->Number_Of_Deleted = local_del; // Set the Deleted variable in header pointer to total deleted records
                    
                    //Write new header pointer variables to temp.dat
                    fwrite(ptr2, sizeof(struct header), 1, headerfile);
                    printf("\nEmployee deleted!\n");
                }
           
                else
                {
                    //Write the current read in record from employee.dat to temp.dat
                    fwrite(ptr, sizeof(struct record), 1, ft);
                }
            }
       
            //If no insance of the user entered employee id is found in employee.dat
            if (validator != 1)
            {
                printf("Could not find employee id in database, input again? y or n?\n");
                scanf(" %c", &again);
            }
       
            //Otherwise exit the function
            else
            {
                again = 'n';
            }
        }
    }
    
    /*Close all file pointers, have to be closed in order to remove and rename files*/
    fclose(outfile);
    fclose(ft);
    fclose(headerfile);
    
    //Removes original employee.dat and renames temp.dat to employee.dat, effecively modifying original employee.dat
    remove("employee.dat");
    rename("temp.dat","employee.dat");
}
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
void List_Employees(void)
{
    clrscr(); //Removes all previous output
    
    //Declare file pointer
    FILE *infile;
    
    int records = 0; //Set to total record variable from header pointer read in from employee.dat
    int deleted_records = 0; //Set to Number Deleted variable from header pointer read in from employee.dat
    
    infile = fopen ("employee.dat","rb"); //Opens employee.dat for reading in binary
    
    if (infile == NULL) //If file cannot be opened
    {
        fprintf(stderr, "\nError opening accounts.dat\n\n");
    }
    
    else
    {
        printf("\n\n");
        //Read header from employee.dat into header pointer, and set records and deleted record to the result
        fread (ptr2, sizeof(header), 1, infile);
        records = ptr2->Total_Records;
        deleted_records = ptr2->Number_Of_Deleted;
        
        //While records can be read in from employee.dat, (if not 0 will be returned)
        while(fread (ptr, sizeof(record), 1, infile) == 1)
        {
            //If the current read in record has it's employee number set to *, it is marked for deletion and should not be shown, so if this is not the case 
            if(strcmp(ptr->Employee_Number,"*") != 0)
            {
                //Print out information of entire record to screen
                printf (" \t\tEmployee Number = %s \n \t\tName =            %s %s \t\n \t\tAddress =         %s \n \t\tDepartment Code = %s \n \t\tDuration =        %.2s years\n\n",
                ptr->Employee_Number, ptr->First_Name, ptr->Last_Name, ptr->Address, ptr->Department_Code, ptr->Duration);
            }
        }
    }
    
    //records and deleted records have previously been set by the read in header part of employee.dat
    printf("\t\tThere are %d record(s) and %d deleted record(s) on file", records, deleted_records);
    printf("\n\n\t\tPress enter key to return to the main menu\n\n");
   
    //Close file pointer
    fclose(infile);
    
    getchar();
    getchar();
}
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
void List_By_Department(void)
{
    clrscr(); //Removes all previous output
    
    //Declare file pointer
    FILE *infile;
    
    int validator = 0;
    int records = 0; //Set to total record variable from header pointer read in from employee.dat
    int deleted_records = 0; //Set to Number Deleted variable from header pointer read in from employee.dat
    char local_dep_code[10];
    
    infile = fopen ("employee.dat","rb"); //Opens employee.dat for reading in binary
    
    if (infile == NULL) //If file cannot be opened
    {
        fprintf(stderr, "\nError opening accounts.dat\n\n");
    }
    
    else
    {
        printf("\n\n");
        
        //Gets the department code the user wishes to list by from user
        printf("Enter the department code you would like to check\n");
        fflush(stdin);/*clears any text from the input stream*/
        gets(local_dep_code);
     
        //Read header from employee.dat into header pointer, and set records and deleted record to the result
        fread (ptr2, sizeof(header), 1, infile);
        records = ptr2->Total_Records;
        deleted_records = ptr2->Number_Of_Deleted;
        
        //While records can be read in from employee.dat, (if not 0 will be returned)
        while(fread (ptr, sizeof(record), 1, infile) == 1)
        {
            //If the current read in record has it's employee number set to *, it is marked for deletion so if this is not the case,  and if the records's department code matches the user inputted code 
            if(strcmp(ptr->Department_Code,local_dep_code) == 0 && strcmp(ptr->Employee_Number,"*") != 0)
            {
                //Print out information of entire record to screen
                printf (" \t\tEmployee Number = %s \n \t\tName =            %s %s \n \t\tAddress =         %s \n \t\tDepartment Code = %s \n \t\tDuration =        %.2s years\n\n",
                ptr->Employee_Number, ptr->First_Name, ptr->Last_Name, ptr->Address, ptr->Department_Code, ptr->Duration);
                //A match has been found between the user inputted department and the read in records
                validator = 1;
            }
        }
    }
    
    //If no match has been found between the user inputted department and the read in records   
    if (validator == 0)
    {
        printf("No employee in employee.dat has a department code listed under %s", local_dep_code);
    }
    
    //records and deleted records have previously been set by the read in header part of employee.dat
    printf("\n\nPress enter key to return to the main menu\n\n");
   
    fclose(infile);
    
    getchar();
}
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
void Compact_Records(void)
{
    clrscr(); //Removes all previous output
    
    //Initialise file pointers
    FILE *infile;
    FILE *outfile;
    FILE *headerfile;
    
    int check, i, j = 0; //Used for sorting
    int counter = 1;
    int local_recs, local_del_recs = 0; //Set to total record variable and number of deleted variable from header pointer read in from employee.dat
    int original_del_recs = 0;
    
    //Opend files for reading/writing in binary
    infile = fopen ("employee.dat","rb");
    outfile = fopen ("temp.dat", "wb");
    headerfile = fopen ("temp.dat","r+b");
   
    //If file cannot be read
    if (infile == NULL)
    {
        printf("\nError opening employee.dat\n\n");
    }
    
    else
    {
        //Read in header from employee.dat into header pointer
        fread(ptr2, sizeof(struct header), 1, infile);
        
        //Set local variables to the contents of header pointer
        local_recs = ptr2->Total_Records;
        local_del_recs = ptr2->Number_Of_Deleted;
        original_del_recs = ptr2->Number_Of_Deleted;
        
        //Write header pointer to temp.dat
        fwrite(ptr2, sizeof(struct header), 1, outfile); 
        
        //While records can be read in from employee.dat, (if not 0 will be returned)
        while (fread(ptr, sizeof(struct record), 1, infile) == 1)
        {
            //If the current read in record does not contain a * in it's employee number variable, write it to temp.dat
            if(strcmp(ptr->Employee_Number,"*") != 0 )
            {
                fwrite(ptr, sizeof(struct record), 1, outfile);
            }
                        
            else
            {
                //Reset file pointer totemp.dat to start of file
                rewind(headerfile);
                //Take 1 from both local recs and del recs (because the deleted record is being removed completely)
                local_del_recs--;
                local_recs--;
                
                //Set header pointer to local recs and del recs
                ptr2->Total_Records = local_recs;
                ptr2->Number_Of_Deleted = local_del_recs;
                //Write header pointer to header of temp.dat
                fwrite(ptr2, sizeof(struct header), 1, headerfile);
                    
                //Let the user know a file has been removed
                printf("Record removed!\n");
            }
        }
        
        //Close all file pointers so files can be renamed/removed
        fclose(outfile);
        fclose(infile);
        fclose(headerfile);
        
        //Removes original employee.dat and renames temp.dat to employee.dat, effecively modifying original employee.dat
        remove("employee.dat");
        rename("temp.dat","employee.dat");
        
        //opens temp.dat in write in binary and employee.dat in read in binary 
        outfile = fopen("temp.dat", "wb");
        infile = fopen("employee.dat", "rb");
        
        //Read in the header from employee.dat to header pointer and write it to temp.dat
        fread(ptr2, sizeof(struct header), 1, infile);
        fwrite(ptr2, sizeof(struct header), 1, outfile);
        
        //Dynamically allocate enough memory to store all records on file in sortptr and temptr for bubble sort implementation
        record *sortptr = (record *)malloc(sizeof(record) * local_recs);
        record *temptr = (record *)malloc(sizeof(record) * local_recs);
        
        //Copy information from all records in employee.dat into sortptr array
        for (i = 0; i < local_recs; i++)
        {
            //Each run through the loop will move the file pointer 1 record more
            fseek(infile, sizeof(struct header), SEEK_SET);
            fseek(infile, sizeof(struct record) * i, SEEK_CUR);
            fread(ptr, sizeof(struct record), 1, infile);
            
            strcpy(sortptr[i].Employee_Number,ptr->Employee_Number);
            strcpy(sortptr[i].Last_Name,ptr->Last_Name);
            strcpy(sortptr[i].First_Name,ptr->First_Name);
            strcpy(sortptr[i].Address,ptr->Address);
            strcpy(sortptr[i].Department_Code,ptr->Department_Code);
            strcpy(sortptr[i].Duration,ptr->Duration);
        }
   
        //Begin bubble sort implementation
        for (i = 0; i < local_recs; i++)
        {
            for (j = 0; j < local_recs - 1; j++)
            {
                //Sorting is implemented by comparing the employee number of each record
                if (strcmp(sortptr[j].Employee_Number, sortptr[j+1].Employee_Number) > 0)
                {
                    temptr[j] = sortptr[j+1];
                    sortptr[j+1] = sortptr[j];
                    sortptr[j] = temptr[j];
                }
            }
        }
        
        //Now that the sortptr array containing information of all records in employee.dat has been sorted, each record can be written -in order- to temp.dat 
        for (i = 0; i < local_recs; i++)
        {
            strcpy(ptr->Employee_Number, sortptr[i].Employee_Number);
            strcpy(ptr->Last_Name, sortptr[i].Last_Name);
            strcpy(ptr->First_Name, sortptr[i].First_Name);
            strcpy(ptr->Address, sortptr[i].Address);
            strcpy(ptr->Department_Code, sortptr[i].Department_Code);
            strcpy(ptr->Duration, sortptr[i].Duration);
            fwrite(ptr, sizeof(struct record), 1, outfile);
        }
       
        //Close the file pointers so files can be renamed/removed
        fclose(outfile);
        fclose(infile);
        
        //Free the dyamically allocated pointers
        free(sortptr);
        free(temptr);
       
        //Removes original employee.dat and renames temp.dat to employee.dat, effecively modifying original employee.dat
        remove("employee.dat");
        rename("temp.dat","employee.dat");    
                 
        printf("\nCompaction complete, records sorted %d record(s) were removed in total!\n", original_del_recs);
    }
}
/*----------------------------------------------------------------------------*/

/* END OF PROGRAM */