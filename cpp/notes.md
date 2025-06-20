when you build a project, should a file be compiled, and if so, by which tool? in what order should the files be compiled?
what output will these compilers produce? how should the compiled files be combined to produce the executable?

> compiler tools will also have a large collection of options, as diverse as debug information, types of optimization, support for different languages features, and processor features. different combinations of compiler options will be used in different circumstances ( like release builds and debug builds ). if you compile from a command line, you have to make sure you choose the right options and apply them consistently across all source code you compile.

simple rule:

1. compile library files
2. compile files that use those libraries
3. compile main program files

compiler produce *object files* these are incomplete machine code they have extensions like .o or .obj
after this the *linker* combines all object files. connects all the .obj, adds needed libraries and creates the final .exe

#### stack frame:
.cpp allows us to split code into functions, which take parameter and returns a value, so the compiler sets up the memory used to 
pass this data. In addition, functions can declare variables that will only be used within that function, and will only exist while
the function is executed. The compiler sets up this memory, called a *stack frame*. you have compiler options about how stack frames
are created.

#### examining basic files in .cpp

- linking the code: a compiler will produce an output. for .cpp this will be object code, but we may have other outputs as well
like resource files, these files can't be executed on their own; not least because the os will require certain structures to be set up.
a .cpp project will always be two stage: compile the code into one or more .obj files and link the files into .exe 

the *linker* also has options to determine how it will work and specify it's outputs and inputs, and it'll also issue errors and 
warnings. 

- source files: at basic level cpp project will have just one file, with extension .cpp or .cxx

    > note: if main function does not return a value. return 0; will be assumed it's an exception for main function.

    #### operator overloading:
    basically when one operator performs multiple operations, like << is used for bit shift on integers and << is also used for cout 
    instance for printing string output ( might include values as well. )

    finally "#" in starting of file, the # here effectivvely indicates that a message of some kind will be given to compiler.
    there are various types of messages we can send( #define, #ifdef, #pragma) in #include tells the compiler to copy the
    contents of the specified file into the source file at this point, which essentially means the contents of that file will
    be compiled too.
    the specified file is called a header file, and is important in file mangement and the reuse of code through libraries..

    the file <iosteam> (note, no extension) is part of the standard library and can be found in the include directory provided with
    .cpp compiler. the <> indicate that compiler should look into the standard dir. used to store header fiels, and we can use
    "" instead for absolute file path of header file!

- creating source files:
    directories in compiler:
        -**bin**: this contains, indirectly the executables of .cpp the bin folder will contain separate folders for the CPU type you are using, so you'll have to navigate below this to get the actual folder containing the executables. the two main executables are cl.exe, which is the .cpp compiler and link.exe which is the linker

        -**include**: this folder contains the header files for the C runtime library and the .cpp standard library

        -**lib**: the folder contains the static link library files for the C runtime library and the .cpp standard library. again, 
        there will be separate folders for the CPU type.



