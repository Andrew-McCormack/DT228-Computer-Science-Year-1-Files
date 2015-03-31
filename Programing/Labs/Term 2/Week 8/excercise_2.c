# include <stdio.h>
# include <Windows.h>

struct travel_info
{
    char airline[11];
    int flight_no;
    char surname[21];
    int seat_no;
    char destination[21];
    int no_bags;
}passenger1, passenger2, passenger3;


void display(struct travel_info *,struct travel_info *,struct travel_info *);
void get(struct travel_info *,struct travel_info *,struct travel_info *);

main()
    {
        struct travel_info *ptr1;
        struct travel_info *ptr2;
        struct travel_info *ptr3;
            
        ptr1 = &passenger1;
        ptr2 = &passenger2;
        ptr3 = &passenger3;
        
        
        //call get() function
        get(ptr1, ptr2, ptr3);
        
        //call display()function
        display(ptr1, ptr2, ptr3);
        
    }
    
    
    void get(struct travel_info *sptr1, struct travel_info *sptr2, struct travel_info *sptr3)
    {
        int i;
        
        for (i = 1; i < 4; i++)
        {
            printf("Please fill in person %d's information \n\n", i);
            
            printf("Please enter person %d's airline \n", i);
            if (i == 1)
            {
                scanf("%s", (*sptr1).airline);
            }
            
            else if (i == 2)
            {
                scanf("%s", (*sptr2).airline);
            }    
            
            else
            {
                scanf("%s", (*sptr3).airline);
            }
            printf("Please enter person %d's flight number \n", i);
            if (i == 1)
            {
                scanf("%d", &(*sptr1).flight_no);
            }
            
            else if (i == 2)
            {
                scanf("%d", &(*sptr2).flight_no);
            }
            
            else
            {
                scanf("%d", &(*sptr3).flight_no);
            }
            printf("Please enter person %d's surname \n", i);
            if (i == 1)
            {
                scanf("%s", (*sptr1).surname);
            }
            
            else if (i == 2)
            {
                scanf("%s", (*sptr2).surname);
            }
            
            else
            {
                scanf("%s", (*sptr3).surname);
            }
            printf("Please enter person %d's seat number \n", i);
            if (i == 1)
            {
                scanf("%d", &(*sptr1).seat_no);
            }
            
            else if (i == 2)
            {
                scanf("%d", &(*sptr2).seat_no);
            }
            
            else
            {
                scanf("%d", &(*sptr3).seat_no);
            }
            
            printf("Please enter person %d's destination \n", i);
            if (i == 1)
            {
                scanf("%s", (*sptr1).destination);
            }
            
            else if (i == 2)
            {
                scanf("%s", (*sptr2).destination);
            }
            
            else
            {
                scanf("%s", (*sptr1).destination);
            }
            
            printf("Please enter the number of bags person %d is bringing \n", i);
            if (i == 1)
            {
                scanf("%d", &(*sptr1).no_bags);
            }
            
            else if (i == 2)
            {
                scanf("%d", &(*sptr2).no_bags);
            }
            
            else
            {
                scanf("%d", &(*sptr3).no_bags);
            }
            
        }
        
    }
    
    
    
    void display(struct travel_info *sptr1, struct travel_info *sptr2, struct travel_info *sptr3)
    {
        int i;
        
        for (i = 1; i < 4; i++)
        {
            printf("Now displaying person %d's flight information \n \n", i);
        
            if (i == 1)
            {
                printf("Person %d's airline is %s \n", i, (*sptr1).airline);
                printf("Person %d's flight number is %d \n", i, (*sptr1).flight_no);
                printf("Person %d's surname is %s \n", i, (*sptr1).surname);
                printf("Person %d's seat number is %d \n", i, (*sptr1).seat_no);
                printf("Person %d's destinatio is %s \n", i, (*sptr1).destination);
                printf("Person %d is carrying %d bags \n", i, (*sptr1).no_bags);
            }
            
            else if (i == 2)
            {
                printf("Person %d's airline is %s \n", i, (*sptr2).airline);
                printf("Person %d's flight number is %d \n", i, (*sptr2).flight_no);
                printf("Person %d's surname is %s \n", i, (*sptr2).surname);
                printf("Person %d's seat number is %d \n", i, (*sptr2).seat_no);
                printf("Person %d's destinatio is %s \n", i, (*sptr2).destination);
                printf("Person %d is carrying %d bags \n", i, (*sptr2).no_bags);
            }
            
            else
            {
                printf("Person %d's airline is %s \n", i, (*sptr3).airline);
                printf("Person %d's flight number is %d \n", i, (*sptr3).flight_no);
                printf("Person %d's surname is %s \n", i, (*sptr3).surname);
                printf("Person %d's seat number is %d \n", i, (*sptr3).seat_no);
                printf("Person %d's destinatio is %s \n", i, (*sptr3).destination);
                printf("Person %d is carrying %d bags \n", i, (*sptr3).no_bags);
            }
        }
    
        Sleep(150000);
    }
        
    