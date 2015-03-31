# include <stdio.h>
# include <Windows.h>

struct bio
{
    char firstname[11];
    char lastname[21];
    struct date
    {
        int date;
        int month;
        int year;
    }doj;
    float height;
    float weight;
    char eye_colour[10];
    char homeland[20];
}person;

main()
    {
        
        printf("Please enter your firstname \n");
        scanf("%s", person.firstname);
        printf("Please enter your lastname \n");
        scanf("%s", person.lastname);
        printf("Please enter your date of birth in this format: day(enter) month(enter) year(enter) \n");
        scanf("%d", &person.doj.date);
        printf("\n");
        scanf("%d", &person.doj.month);
        printf("\n");
        scanf("%d", &person.doj.year);
        printf("\n");
        printf("Please enter your height (in feet)\n");
        scanf("%f", &person.height);
        printf("Please enter your weight (in pounds\n");
        scanf("%f", &person.weight);
        printf("Please enter your eye colour \n");
        scanf("%s", person.eye_colour);
        printf("Please enter your homeland \n");
        scanf("%s", person.homeland);
        
        
        printf("Your name is %s %s \n", person.firstname, person.lastname);
        printf("Your date of birth is %d/%d/%d \n", person.doj.date, person.doj.month, person.doj.year);
        printf("Your height is %f feet \n", person.height);
        printf("Your weight is %f pounds \n", person.weight);
        printf("Your eye colour is %s \n", person.eye_colour);
        printf("Your from %s \n", person.homeland);
     
        
        struct bio *person2;
        person2 = &person;
        
        
        printf("Enter information for the 2nd person");
        
        
        printf("Please enter Person 2's firstname \n");
        scanf("%s", &(*person2).firstname);
        printf("Please enter Person 2's lastname \n");
        scanf("%s", &(*person2).lastname);
        printf("Please enter Person 2's date of birth in this format: day(enter) month(enter) year(enter) \n");
        scanf("%d", &(*person2).doj.date);
        printf("\n");
        scanf("%d", &(*person2).doj.month);
        printf("\n");
        scanf("%d", &(*person2).doj.year);
        printf("\n");
        printf("Please enter Person 2's height (in feet)\n");
        scanf("%f", &(*person2).height);
        printf("Please enter Person 2's weight (in pounds\n");
        scanf("%f", &(*person2).weight);
        printf("Please enter Person 2's eye colour \n");
        scanf("%s", (*person2).eye_colour);
        printf("Please enter Person 2's homeland \n");
        scanf("%s", (*person2).homeland);
        
        
        printf("Person 2's name is %s %s \n", person.firstname, person.lastname);
        printf("Person 2's date of birth is %d/%d/%d \n", person.doj.date, person.doj.month, person.doj.year);
        printf("Person 2's height is %f feet \n", person.height);
        printf("Person 2's weight is %f pounds \n", person.weight);
        printf("Person 2's eye colour is %s \n", person.eye_colour);
        printf("Person 2's from %s \n", person.homeland);
     
        
        Sleep(150000);
    }
        
    