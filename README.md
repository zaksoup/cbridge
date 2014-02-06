#CBridge: C for scripters
This workshop is intended to introduce folks who's primary area of expertise is scripting languages to C its related concepts.

Over the course of this workshop you will learn about:

1. Compiling and linking
2. Pointers and pointer arithmatic

##Compiling and linking
Unlike interpreted languages like Python and Ruby, C must first be compiled by a compiler before it can be run. This process happens in three steps: preprocessing, compiling, and linking. After your code has been compiled into an executable (on *NIX systems this will be a file with any extension, but commonly is a file with no extension at all. On Windows this is a file with a .exe extension) you will then be able to run your code. Some software, like Coderunner, allow you to write C and C++ and run them and get console output while obscuring the steps of compilation for you. This is very handy for small projects and rapid prototyping but today we're going to focus on how to compile by hand.

##Running your code
Once you've compiled your code into an executable you can simple run your executable by typing the path to the executable. For instance, if you have created a program called "zakiscool" in the folder "coolprograms" you could run your program by navigating to the folder `cd ~/coolprograms` and then running the binary `./zakiscool`.

##Getting Started
In C all programs begin and end in the "main" function.
    int main(int argc, char *argv[]) {
      //your code here
    }
When you run a program in C its execution begins inside the main function. In Python you can simple call functions and they will executed in the order they appear in the file. In python, you're perfectly able to execute
    print "Hello"
    print "Goodby"
    print "You say hello, I say goodby"
However, in C, you must put all statements you wish to be executed inside the main function:
    int main(int argc, char *argv[]) {
      printf("hello");
      printf("goodby");
      printf("you say hello, I say goodby");
    }