//
// Created by יהודה on 18/03/2024.
//
#include <iostream>
#include <string>

#ifndef PUZZLE_GAME_IN_GROUPS_GROUPS_H
#define PUZZLE_GAME_IN_GROUPS_GROUPS_H


class groups {
private:
    char *name;
    char arr[5];
    int count;

public:
    groups(){
        name= nullptr;
        arr[5]=' ';
        count=0;
    }
    groups(char *name1,char arr1[],int count1){
        name=new char[strlen(name1)+1];
        strcpy(name,name1);
        strcpy(arr,arr1);
        count=count1;
    }
    void SetName(char *name1){
        name=new char[strlen(name1)+1];
        strcpy(name,name1);

    }
    char *GetName()const{
        return name;
    }

    void SetCount(int count1){
        count=count1;
    }
    int getCounter()const{
        return count;
    }
    void SetArr(char arr1[]){
        strcpy(arr,arr1);
    }
    ~groups(){
        delete[]name;
    }






};


#endif //PUZZLE_GAME_IN_GROUPS_GROUPS_H
