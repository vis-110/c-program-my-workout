
// 14. Write a program in C to insert values in the array (unsorted list). 
// 	Test Data :
// 	Input the size of array : 4
// 	Input 4 elements in the array in ascending order:
// 	element - 0 : 1
// 	element - 1 : 8
// 	element - 2 : 7
// 	element - 3 : 10
// 	Input the value to be inserted : 5
// 	Input the Position, where the value to be inserted :2
// 	Expected Output :
// 	The current list of the array :
// 	1 8 7 10
// 	After Insert the element the new list is :
// 	1 5 8 7 10
	

#include <stdio.h>
int main()
{
    int i, given, index, element, value, z;
    printf("Input the number of elements to store in the array : \n");
    scanf("%d", &given);
    int Givenarray[given];
    printf("Input %d elements in the array: \n", given);
    for (i = 0; i < given; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &Givenarray[i]);
    }

    printf("Input the value to be insert : \n");
    scanf("%d", &value);

    printf("Input the position where the value to be inserted : \n");
    scanf("%d", &element);

    printf("The current list of array : \n");
    for (i = 0; i < given; i++)
    {
        printf("%d ", Givenarray[i]);
    }

    index = element - 1;

    for (i = 0; i < given + 1; i++)
    {
        if (i >= index)
        {
            for (z = given; z >=index; z--)
            {
                Givenarray[z + 1] = Givenarray[z];
            }
            break;
        }
        else
        {
            Givenarray[i] = Givenarray[i];
        }
    }

    Givenarray[index] = value;
    printf("\nAfter insert the element the new list is : \n");
    for (i = 0; i < given + 1; i++)
    {
        printf("%d ", Givenarray[i]);
    }
    return 0;
}