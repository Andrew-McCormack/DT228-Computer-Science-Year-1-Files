# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <Windows.h>
typedef struct Header
{
    int Total_Records;
    int Number_Of_Deleted;
}Header;

typedef struct IT
{
    char student_id[6];
    char last_name[16];
    char first_name[16];
    char address[26];
}IT;

Header *hptr = (Header *)malloc(sizeof(Header));
IT *dptr = (IT *)malloc(sizeof(IT));
IT *iptr = (IT *)malloc(sizeof(IT));
IT *bptr = (IT *)malloc(sizeof(IT));

void createDat(char []);

main()
{
   
    system ("title IT Dat Creation");
    system ("cls");
    system("color 9F");

    char selection = '0';
    
    while (selection != '4')
    {
        printf(" 1. Create and input students for Blanchardstown IT dat file\n\n");
        printf(" 2. Create and input students for IT Tallaght dat file\n\n");
        printf(" 3. Create and input students for Dublin IT dat file\n\n");
        printf(" 4. Quit program\n\n");
        printf("    Make a selection: ");
        scanf(" %c", &selection);
        switch (selection)
        {
            case '1':
            createDat("bityear1.dat");
            break;
        
            case '2':
            createDat("ittyear1.dat");
            break;
        
            case '3':
            createDat("dityear1.dat");
            break;
        
            default:
            printf("\nWrong Input\n\n");
        }
    }
        
}

void createDat(char filename[20])
{
    FILE *headerfile;
    FILE *outfile;
    FILE * infile;
    int Local_Recs = 0;
    char local_id[6];
    char again = 'y';
   infile = fopen (filename, "rb");
   if (infile == NULL)
     {
          printf("\n\nError opening %s, creating new one!\n\n", filename);
          
          outfile = fopen (filename,"wb");
          hptr->Total_Records = 0;
          hptr->Number_Of_Deleted = 0;
          fwrite (hptr, sizeof(struct Header), 1, outfile);
          fclose(outfile);
          Sleep(1000);
         
     }

   else
   {
       headerfile = fopen (filename,"r+b");
       outfile = fopen (filename,"ab");
   while (again == 'y' || again == 'Y')
     {
         fread (hptr, sizeof(struct Header), 1, infile); 
         Local_Recs = hptr->Total_Records;
         Local_Recs++;
         
         hptr->Total_Records = Local_Recs;
         fwrite (hptr, sizeof(struct Header), 1, headerfile);
         
         printf("\n\nEmployee Number (5 characters or less) : ");
         scanf(" %[^\n]s", local_id); 
         
      
      strcpy(dptr->student_id, local_id);
      
      printf("\nLast Name (15 characters or less)       : ");
      scanf (" %[^\n]s", dptr->last_name);
      while (strlen(dptr->last_name) > 16)
      {
            printf("Last name is too long, please enter again\n");
            scanf(" %[^\n]s", dptr->last_name); 
      }
      printf("\nFirst Name (15 characters or less)      : ");
      scanf (" %[^\n]s", dptr->first_name);
      while (strlen(dptr->first_name) > 16)
      {
            printf("First name is too long, please enter again\n");
            scanf(" %[^\n]s", dptr->first_name); 
      }
      printf("\nAddress (25 characters or less)         : ");
      
	
      scanf(" %[^\n]s", dptr->address);
      while (strlen(dptr->address) > 26)
      {
            printf("Address is too long, please enter again\n");
            scanf(" %[^\n]s", dptr->address);
      }

      // write entire structure to Accounts file
      fwrite (dptr, sizeof(struct IT), 1, outfile);  
    printf("\nAdd another student?\n");
    scanf(" %c", &again);
      rewind(outfile);
      rewind(infile);
      rewind(headerfile);
  }      

} 
     fclose(outfile);
     fclose(infile);
     fclose(headerfile);
    
}
    
    
