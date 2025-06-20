#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

    cout << "file name [.cpp extension]: " << argv[0] << endl;
    cout << "number of arguments: " << argc << endl;

    for(int i = 1; i < argc; i++) {
        cout << "argument: " << i << ": " << argv[i] << endl; 
    }
    
    return 0;
}

/*
std::cout means?
the std part of the name is a namespace, in effect, a collection of code with  a similar purpose, or from a single vendor. In this case
, std means that the cout stream object is part of the standard .cpp library. the :: is the scope resolution operator,
and indicates that you want to access the cout object declared in the std namespace. you can define namespaces of your own, and in
large projecct you shoud.

parameters in main() function.

argc { argument count } : number of cli arguments (including program name)
argv { argument vector } : array of strings containing the actual arguments
envp { environment pointer } : array of environment variables ( non - standard )

in program above when we do ./exec <arg1> <arg2> it'll show in order.  it's just like sys.argv in py simple and makes program flexible.
*/