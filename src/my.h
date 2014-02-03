//If _MY_H_ is not already defined (in other words, if you haven't already included my.h elsewhere)
#ifndef _MY_H_ //Constants always always defined in ALL CAPS
#define _MY_H_ value

#ifndef NULL
#define NULL ((void *)0) //Cast 0 to be a null void pointer; this is to make the truthyness of empty pointers act more like ruby/python nil/None types
#endif

#ifndef TRUE
#define TRUE 1
#define FALSE 0 //TRUE and FALSE don't actually exist as types so yeah
#endif

typedef char BOOL;
typedef char bool;

#include <stdlib.h> //system libraries are included with <lib.h>
#include <unistd.h> //don't forget the .h, ruby lets you leave it out but C is more particular

//Function signatures need types, not variable names. We name the variables in the functiond definition.

//Should take a char and print it out
void my_char(char);
/* Example input/output
>> my_char('a');
>> a
*/

//print a string
void my_str(char *); //notice that it doesn't take a string, it takes a pointer to a char
/* Example input/output
>> my_str("zak");
>> zak
*/

//print an int !! THIS IS TRICKIER THAN YOU MIGHT THINK
void my_int(int); 
/* Example input/output
>> my_int(1234);
>> 1234
HINT: what happens if you give the input 10000000?
*/

//Print the int in the base given by the number of characters, using those characters
//This is going to require some math
void my_num_base(int, char*);
/* Example input/output
>> my_num_base(18, "0123456789abcdef")
>> "12"
HINT: what happens if you give the input 10000000?
*/

//Print a-z
//Must by less than 5 lines, and no variable greater than 1 byte
void my_alpha();

//Same as my_alpha, but 0-9. Same constraints as well
void my_digits();

//Find the index of the character in the string provided, ends at the first occurance from left to right
int my_strindex(char *, char);
/* Example input/output
>> my_strindex("zakauerbach", a)
>> 1
*/

//same as my_strindex but from right to left
int my_strrindex(char *, char);
/* Example input/output
>> my_strrindex("zakauerbach", a)
>> 8
*/

//returns the length of the string
int my_strlen(char *);
/* Example input/output
>> my_strlen("zak")
>> 3
*/

//Reverses the given string IN PLACE
int my_revstr(char *);
/* Example input/output
>> char name[] = "zak";
>> my_revstr(name);
>> my_str(name);
>> kaz
*/

#endif
