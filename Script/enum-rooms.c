/*
Below, you can find the main function that uses a **room_capacity** enumeration.
The enumeration defines different room types and their seating capacities.

When the program works correctly, it should print out the following:

    We have a variable sample of type enum room_capacity
    and it has an integer value of 1!!
    
    Capacity of an office is 1 
    Capacity of a studio is 2 
    Capacity of a classroom is 3 
    Capacity of a hall is 5 
    Capacity of an auditorium is 7
*/

#include <stdio.h>

// Enumeration for room capacities
enum room_capacity {
    OFFICE = 1,
    STUDIO = 2,
    CLASSROOM = 3,
    HALL = 5,
    AUDITORIUM = 7
};

int main(void)
{
    
    enum room_capacity sample = OFFICE;
    printf("We have a variable sample of type enum room_capacity\n"
            "and it has an integer value of %d!!\n\n", sample);
    
    for (unsigned int i = 0; i <= 10; i++) {
	switch(i) {
	   case OFFICE: // = 1
		printf("Capacity of an office is %d\n", OFFICE);
		break;
	   case STUDIO: // = 2
		printf("Capacity of a studio is %d\n", STUDIO);
		break;
	   case CLASSROOM: // = 3
		printf("Capacity of a classroom is %d\n", CLASSROOM);
		break;
	   case HALL: // = 5
		printf("Capacity of a hall is %d\n", HALL);
		break;
	   case AUDITORIUM: // = 7
		printf("Capacity of an auditorium is %d\n", AUDITORIUM);
		break;
        } // switch
    } // for
    
    return 0;
}