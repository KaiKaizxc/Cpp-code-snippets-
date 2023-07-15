//
// Created by admin on 2023-07-15.
//
// header files are for declarations
// int age
// function()


//const char* RecommendMeAFood(char firstLetter)

#ifndef CPP_CODE_SNIPPETS_HEADER_FILE_H
#define CPP_CODE_SNIPPETS_HEADER_FILE_H


const char* RecommendMeAFood(char firstLetter) {
    if (firstLetter == 'a' || firstLetter == 'A') return "apple";
    if (firstLetter == 'b' || firstLetter == 'B') return "banana";

    return "pizza";
}


#endif //CPP_CODE_SNIPPETS_HEADER_FILE_H




//for every cpp file, an obj file is created independtly
//then, our link obj files together will become my .exe.
//so what if I have > 1 defintiion of a function?
//To overcome, put all declarations in header
//Put all implementations inside .cpp file
//to use, just put the header file inside the main
//
//
//the iostream is also a header file, but it is pre-existing

// #pragma once, serves as a guard to know I dont include the same header file more than once in a C++ file,
// saves compiler time, so the compiler knows its already opened and dont need to open it again.
