# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <Windows.h>
#include <conio.h>
#include <ctype.h>
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

typedef struct TU
{
    char student_id[6];
    char last_name[16];
    char first_name[16];
    char address[26];
    char previous_college[20];
}TU;

Header *hptr = (Header *)malloc(sizeof(Header));
IT *dptr = (IT *)malloc(sizeof(IT));
TU *ptr = (TU *)malloc(sizeof(TU));


void Check_File(char []);
void Sort(void);
void Merge(void);
void Search(void);

main()
{
    char selection = '6';
    char filename1[20] = "dityear1.dat";
    char filename2[20] = "ittyear1.dat";
    char filename3[20] = "bityear1.dat";
    char filename4[20] = "tuyear1.dat";
    
    while (selection != '8')
    {    
        printf(" 1. Check dit year 1 file\n\n");
        printf(" 2. Check itt year 1 file\n\n");
        printf(" 3. Check bit year 1 file\n\n");
        printf(" 4. Check tu year 1 file\n\n");
        printf(" 5. Sort dit, itt, and bit year 1 files by student number\n\n");
        printf(" 6. Merge dit, itt, and bit year 1 files into tu year 1 file\n");
        printf("    (*Note dit, itt and bit year 1 files should be sorted first\n");
        printf("      by selecting option 5. otherwise the merged tu file will\n");
        printf("      only be partially sorted)\n\n");
        printf(" 7. Search for itt student\n\n");
        printf(" 8. Exit program\n");
        
        printf("\n\n    Make a selection: ");
        scanf(" %c", &selection);

        switch (selection)
        {
            case '1':
            Check_File(filename1);
            break;
        
            case '2':
            Check_File(filename2);
            break;
            
            case '3':
            Check_File(filename3);
            break;
        
            case '4':
            Check_File(filename4);
            break;
        
            case '5':
            printf("Program will first sort the three college dat files by student id! \n\n");
            Sort();
            printf("All files sorted!\n");
            break;
        
            case '6':
            printf("\nStarting merge sort!\n");
            Merge();
            printf("Merge sort complete!\n\n");
            break;
        
            case '7':
            Search();
            break;
        
            case '8':
            printf("Exiting program");
            break;
        
            default:
            printf("Wrong input");
        }
    }
free(hptr);
free(dptr);
free(ptr);
}

void Check_File(char filename[20])
{
    FILE *infile;
    int records, i = 0;
    int deleted_records = 0;
    infile = fopen (filename,"rb");
    if (infile == NULL)
    {
        printf("\nError opening %s, not created yet?\n\n", filename);
    }
    else
    {
        if (strcmp(filename, "tuyear1.dat") != 0)
        {
            printf("\n\n");
            fread (hptr, sizeof(Header), 1, infile);
            records = hptr->Total_Records;
            deleted_records = hptr->Number_Of_Deleted;
       
            while(fread (dptr, sizeof(struct IT), 1, infile) == 1)
            {
                if (strcmp(dptr->address,"dityear1.dat") == 0)
                {
                    printf (" Student id =      %s \n Name =            %s  %s \n Address =         %s\n\n\n",
                    dptr->student_id, dptr->first_name, dptr->last_name, "Dublin");
                }
                
                else if (strcmp(dptr->address,"ittyear1.dat") == 0)
                {
                    printf (" Student id =      %s \n Name =            %s  %s \n Address =         %s\n\n\n",
                    dptr->student_id, dptr->first_name, dptr->last_name, "Tallaght");
                }
                
                else
                {
                    printf (" Student id =      %s \n Name =            %s  %s \n Address =         %s\n\n\n",
                    dptr->student_id, dptr->first_name, dptr->last_name, dptr->address);
                }
            }
        
        printf("There are %d record(s) and %d deleted record(s) on file\n", records, deleted_records);

        fclose(infile);
        
        }

        else
        {
            printf("\n\n");
            fread (hptr, sizeof(Header), 1, infile);
            records = hptr->Total_Records;
            deleted_records = hptr->Number_Of_Deleted;
       
            while(fread (ptr, sizeof(struct TU), 1, infile) == 1)
            {
                if (strcmp(ptr->address,"dityear1.dat") == 0)
                {
                    printf (" Student id =      %s \n Name =            %s  %s \n Previous IT =     %s \n Address =         %s\n\n\n",
                    ptr->student_id, ptr->first_name, ptr->last_name, "Dublin Institute Technology", "Dublin");
                }
                
                else if (strcmp(dptr->address,"ittyear1.dat") == 0)
                {
                    printf (" Student id =      %s \n Name =            %s  %s \n Previous IT =     %s \n Address =         %s\n\n\n",
                    ptr->student_id, ptr->first_name, ptr->last_name, "IT Tallaght", "Tallaght");
                }
                
                else
                {
                    printf (" Student id =      %s \n Name =            %s  %s \n Previous IT =     %s \n Address =         %s\n\n\n",
                    ptr->student_id, ptr->first_name, ptr->last_name, "Blanchardstown IT", "Blanchardstown");
                }
            }
                
        printf("There are %d record(s) and %d deleted record(s) on file\n", records, deleted_records);

        fclose(infile);
        }
    }
    printf("Press any key to continue! \n\n\n");
    _getch();
}

void Sort(void)
{
    FILE *itfile;
    FILE *readfile;
   
    int local_total_records = 0;
    int index, i, j;
    char filename[20];
    
    for (index = 0; index < 3; index++)
    {
        if (index == 0)
        {
            strcpy(filename,"dityear1.dat");
        }
        
        else if (index == 1)
        {
            strcpy(filename,"ittyear1.dat");
        }
        
        else if (index == 2)
        {
            strcpy(filename,"bityear1.dat");
        }
    
        itfile = fopen ("temp.dat","wb");
        readfile = fopen (filename, "rb");
    
        printf("\nSorting %s file!\n\n", filename);
    
        fread(hptr, sizeof(struct Header), 1, readfile);
        fwrite(hptr, sizeof(struct Header), 1, itfile);
        local_total_records = hptr->Total_Records;
    
        IT *sortptr = (IT *)malloc(sizeof(IT) * local_total_records);
        IT *temptr = (IT *)malloc(sizeof(IT) * 2);
    
        for (i = 0; i < local_total_records; i++)
        {
            fseek(readfile, sizeof(struct Header), SEEK_SET);
            fseek(readfile, sizeof(struct IT) * i, SEEK_CUR);
            fread(dptr, sizeof(struct IT), 1, readfile);
            
            strcpy(sortptr[i].student_id, dptr->student_id);
            strcpy(sortptr[i].last_name,dptr->last_name);
            strcpy(sortptr[i].first_name,dptr->first_name);
            strcpy(sortptr[i].address,dptr->address);
        }

        for (i = 1; i < local_total_records; i++)
        {
            j = i;
            while (j > 0 && strcmp(sortptr[j].student_id, sortptr[j-1].student_id) < 0)
            {
                temptr[1] = sortptr[j];
                sortptr[j] = sortptr[j - 1];
                sortptr[j - 1] = temptr[1];
                j--;
            }
        }
        
        for (i = 0; i < local_total_records; i++)
        {
            strcpy(dptr->student_id, sortptr[i].student_id);
            strcpy(dptr->last_name, sortptr[i].last_name);
            strcpy(dptr->first_name, sortptr[i].first_name);
            strcpy(dptr->address, sortptr[i].address);
            fwrite(dptr, sizeof(struct IT), 1, itfile);
        }
       
        fclose(itfile);
        fclose(readfile);
       
        remove(filename);
        rename("temp.dat",filename); 
        rename("temp.dat",filename);  
        
        printf("%s file sorted!\n", filename);
        printf("Press any key to continue! \n\n\n");
        _getch();
    }
    
}
    
void Merge(void)
{
    FILE *IT1;
    FILE *IT2;
    FILE *TUF;
    
    int index;
    
    char filename1[20];
    char filename2[20];
    char filename3[20];
    
    int local_it1 = 0;
    int local_it2 = 0;
    int local_tuf = 0;
    int local_total_records = 0;
    
    TUF = fopen("temp1.dat", "wb");
    hptr->Total_Records = 0;
    fwrite(hptr, sizeof(struct Header), 1, TUF);
    fclose(TUF);
    
    TUF = fopen("temp2.dat", "wb");
    hptr->Total_Records = 0;
    fwrite(hptr, sizeof(struct Header), 1, TUF);
    fclose(TUF);
        
    for (index = 0; index < 2; index++)
    {
        int i, j, k, p = 0;
        
        if (index == 0)
        {
            strcpy(filename1, "dityear1.dat");
            strcpy(filename2, "ittyear1.dat");
            strcpy(filename3, "temp1.dat");
        }
        
        else if (index == 1)
        {
            strcpy(filename1, "bityear1.dat");
            strcpy(filename2, "temp1.dat");
            strcpy(filename3, "temp2.dat");
        }
        
        IT1 = fopen(filename1, "rb");
        IT2 = fopen(filename2, "rb");
        TUF = fopen(filename3, "r+b");
        
        if (index == 0)
        {
            fread(hptr, sizeof(struct Header), 1, IT1);

            local_total_records = local_total_records + hptr->Total_Records;
            local_it1 = hptr->Total_Records;
        
            fread(hptr, sizeof(struct Header), 1, IT2);
            local_total_records = local_total_records + hptr->Total_Records;
            local_it2 = hptr->Total_Records;
            
            local_tuf = local_it1 + local_it2;
        }
        
        else
        {
            fread(hptr, sizeof(struct Header), 1, IT1);
    
            local_total_records = local_total_records + hptr->Total_Records;
            local_it1 = hptr->Total_Records;
   
            fread(hptr, sizeof(struct Header), 1, IT2);
                 
            local_it2 = hptr->Total_Records;
            local_tuf = local_tuf + local_it1;            
        }
        
        hptr->Total_Records = local_total_records;
        fwrite(hptr, sizeof(struct Header), 1, TUF);

        IT *it1ptr = (IT *)malloc(sizeof(IT) * local_it1);
        IT *it2ptr = (IT *)malloc(sizeof(IT) * local_it2);
        
        TU *tuit2ptr = (TU *)malloc(sizeof(TU) * local_it2);
        TU *tuptr = (TU *)malloc(sizeof(TU) * local_tuf);
        IT *temptr = (IT *)malloc(sizeof(IT) * 2);

        for (i = 0; i < local_total_records; i++)
        {
            fseek(IT1, sizeof(struct Header), SEEK_SET);
            fseek(IT1, sizeof(struct IT) * i, SEEK_CUR);
            fread(dptr, sizeof(struct IT), 1, IT1);
            
            strcpy(it1ptr[i].student_id, dptr->student_id);
            strcpy(it1ptr[i].last_name,dptr->last_name);
            strcpy(it1ptr[i].first_name,dptr->first_name);
            strcpy(it1ptr[i].address,dptr->address);
        }
       
        if (index == 0)
        {
            for (i = 0; i < local_total_records; i++)
            {
                fseek(IT2, sizeof(struct Header), SEEK_SET);
                fseek(IT2, sizeof(struct IT) * i, SEEK_CUR);
                fread(dptr, sizeof(struct IT), 1, IT2);
            
                strcpy(it2ptr[i].student_id, dptr->student_id);
                strcpy(it2ptr[i].last_name,dptr->last_name);
                strcpy(it2ptr[i].first_name,dptr->first_name);
                strcpy(it2ptr[i].address,dptr->address);
            }
        }
    
        else
        {
            for (i = 0; i < local_total_records; i++)
            {
                fseek(IT2, sizeof(struct Header), SEEK_SET);
                fseek(IT2, sizeof(struct TU) * i, SEEK_CUR);
                fread(ptr, sizeof(struct TU), 1, IT2);
            
                strcpy(tuit2ptr[i].student_id, ptr->student_id);
                strcpy(tuit2ptr[i].last_name,ptr->last_name);
                strcpy(tuit2ptr[i].first_name,ptr->first_name);
                strcpy(tuit2ptr[i].address,ptr->address);
                strcpy(tuit2ptr[i].address,ptr->previous_college);
            }
        } 
    
        i = 0;
        j = 0;
        k = 0;
        p = 0;
    
        if (index == 0)
        {
            while (i < local_it1 && j < local_it2)
            {
                if (strcmp(it1ptr[i].student_id, it2ptr[j].student_id) < 0)
                {
                    strcpy(tuptr[k].student_id, it1ptr[i].student_id);
                    strcpy(tuptr[k].last_name, it1ptr[i].last_name);
                    strcpy(tuptr[k].first_name, it1ptr[i].first_name);
                    strcpy(tuptr[k].address, it1ptr[i].address);
                    strcpy(tuptr[k].previous_college, filename1);
                    i++;
                }
            
                else
                {
                    strcpy(tuptr[k].student_id, it2ptr[j].student_id);
                    strcpy(tuptr[k].last_name, it2ptr[j].last_name);
                    strcpy(tuptr[k].first_name, it2ptr[j].first_name);
                    strcpy(tuptr[k].address, it2ptr[j].address);

                    if (index == 0)
                    {
                        strcpy(tuptr[k].previous_college, "ittyear1.dat");
                    }
                
                    else
                    {
                        if(strcmp(tuit2ptr[j].student_id, "T1000") < 0)
                        {
                            strcpy(tuptr[k].previous_college, "dityear1.dat");
                        }
                        else
                        {
                            strcpy(tuptr[k].previous_college, "ittyear1.dat");
                        }
                    }
                    j++;
                }
            k++;
            }
        
            if (i < local_it1)
            {
                for (p = i; p < local_it1; p++)
                {
                    strcpy(tuptr[k].student_id, it1ptr[p].student_id);
                    strcpy(tuptr[k].last_name, it1ptr[p].last_name);
                    strcpy(tuptr[k].first_name, it1ptr[p].first_name);
                    strcpy(tuptr[k].address, it1ptr[p].address);
                    strcpy(tuptr[k].previous_college, filename1);
                    k++;
                }
            }
        
            else 
            {
                for (p = j; p < local_it2; p++) 
                {
                    strcpy(tuptr[k].student_id, it2ptr[p].student_id);
                    strcpy(tuptr[k].last_name, it2ptr[p].last_name);
                    strcpy(tuptr[k].first_name, it2ptr[p].first_name);
                    strcpy(tuptr[k].address, it2ptr[p].address);
                
                    if (index == 0)
                    {
                        strcpy(tuptr[k].previous_college, "ittyear1.dat");
                    }
                    else
                    {
                        if(strcmp(tuit2ptr[p].student_id, "T1000") < 0)
                        {
                            strcpy(tuptr[k].previous_college, "dityear.dat");
                        }
                        else
                        {
                            strcpy(tuptr[k].previous_college, "ittyear.dat");
                        }
                    }
                    k++;
                }
            }
        
        
            for (i = 0; i < local_tuf; i++)
            {
                strcpy(ptr->student_id, tuptr[i].student_id);
                strcpy(ptr->last_name, tuptr[i].last_name);
                strcpy(ptr->first_name, tuptr[i].first_name);
                strcpy(ptr->address, tuptr[i].address);
                strcpy(ptr->previous_college, tuptr[i].previous_college);
                fwrite(ptr, sizeof(struct TU), 1, TUF);
            }
        
       
            fclose(IT1);
            fclose(IT2);
            fclose(TUF);
        
            local_it1 = 0;
            local_it2 = 0;
        }
    
        else
        {
            while (i < local_it1 && j < local_it2)
            {
                if (strcmp(it1ptr[i].student_id, tuit2ptr[j].student_id) < 0)
                {
                    strcpy(tuptr[k].student_id, it1ptr[i].student_id);
                    strcpy(tuptr[k].last_name, it1ptr[i].last_name);
                    strcpy(tuptr[k].first_name, it1ptr[i].first_name);
                    strcpy(tuptr[k].address, it1ptr[i].address);
                    strcpy(tuptr[k].previous_college, filename1);
                    i++;
                }
            
                else
                {
                    strcpy(tuptr[k].student_id, tuit2ptr[j].student_id);
                    strcpy(tuptr[k].last_name, tuit2ptr[j].last_name);
                    strcpy(tuptr[k].first_name, tuit2ptr[j].first_name);
                    strcpy(tuptr[k].address, tuit2ptr[j].address);
                    if (index == 0)
                    {
                        strcpy(tuptr[k].previous_college, "ittyear1.dat");
                    }
                    else
                    {
                        if(strcmp(tuit2ptr[j].student_id, "T1000") < 0)
                        {
                            strcpy(tuptr[k].previous_college, "dityear.dat");
                        }
                        else
                        {
                            strcpy(tuptr[k].previous_college, "ittyear.dat");
                        }
                    }
                    j++;
                }
                k++;
            }
        
            if (i < local_it1)
            {
                for (p = i; p < local_it1; p++)
                {
                    strcpy(tuptr[k].student_id, it1ptr[p].student_id);
                    strcpy(tuptr[k].last_name, it1ptr[p].last_name);
                    strcpy(tuptr[k].first_name, it1ptr[p].first_name);
                    strcpy(tuptr[k].address, it1ptr[p].address);
                    strcpy(tuptr[k].previous_college, filename1);
                    k++;
                }
            }
        
            else 
            {
                for (p = j; p < local_it2; p++) 
                {
                    strcpy(tuptr[k].student_id, tuit2ptr[p].student_id);
                    strcpy(tuptr[k].last_name, tuit2ptr[p].last_name);
                    strcpy(tuptr[k].first_name, tuit2ptr[p].first_name);
                    strcpy(tuptr[k].address, tuit2ptr[p].address);
                    if (index == 0)
                    {
                        strcpy(tuptr[k].previous_college, "ittyear1.dat");
                    }
                    else
                    {   
                        if(strcmp(tuit2ptr[p].student_id, "T1000") < 0)
                        {
                            strcpy(tuptr[k].previous_college, "dityear.dat");
                        }
                        else
                        {
                            strcpy(tuptr[k].previous_college, "ittyear.dat");
                        }
                    }
                    k++;
                }
            }
        
            for (i = 0; i < local_tuf; i++)
            {
                strcpy(ptr->student_id, tuptr[i].student_id);
                strcpy(ptr->last_name, tuptr[i].last_name);
                strcpy(ptr->first_name, tuptr[i].first_name);
                strcpy(ptr->address, tuptr[i].address);
                strcpy(ptr->previous_college, tuptr[i].previous_college);
                fwrite(ptr, sizeof(struct TU), 1, TUF);
            }
    
            fclose(IT1);
            fclose(IT2);
            fclose(TUF);    
        
            local_it1 = 0;
            local_it2 = 0;
        }
    }  

    fclose(IT1);
    fclose(IT2);
    fclose(TUF);

   remove("temp1.dat");
   remove("tuyear1.dat");
   
   rename("temp2.dat", "tuyear1.dat"); 

   printf("\nPress any key to continue! \n\n");
   _getch();
}    
    
void Search(void)
{
    FILE *infile;
    
    char local_id[6];
    char name[16];
    char choice = 'q';
    int validator = 0;
    
    infile = fopen("tuyear1.dat", "rb");
    
    printf("\nDo you want to search by name or id (n) or (i)?\n");
    scanf(" %c", &choice);
    
    if (choice == 'n')
    {
        printf("Enter the first name of the student you wish to find\n");
        scanf(" %s", name);
    }
    
    else
    {
        printf("Enter the id of the student you wish to find\n");
        scanf(" %s", local_id);
    }
    
    fread(hptr, sizeof(Header), 1, infile);
    
    if (choice == 'i')
    {
        while(fread (ptr, sizeof(struct TU), 1, infile) == 1)
        {
            if (strcmp(ptr->student_id,local_id) == 0)
            {
                printf (" Student id =      %s \n Name =            %s  %s \n Address =        %s\n\n\n",
                ptr->student_id, ptr->first_name, ptr->last_name, ptr->address);
                validator = 1;
                printf("Press any key to continue! \n\n\n");
                _getch();
            }
        }
    }
    
    else
    {
        while(fread (ptr, sizeof(struct TU), 1, infile) == 1)
        {
            if (strcmp(ptr->first_name,name) == 0)
            {
                printf ("\n\n Student id =      %s \n Name =            %s  %s \n Address =         %s\n\n\n",
                ptr->student_id, ptr->first_name, ptr->last_name, ptr->address);
                validator = 1;
                printf("Press any key to continue! \n\n\n");
                _getch();
            }
        }
    }
    
    if (validator == 0)
    {
        printf("Could not find student\n");
    }                
}