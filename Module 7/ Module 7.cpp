/*
 *  Module 7.cpp
 *
 *  Created on: Mar 25, 2021
 *      Author: Mike
 */
#include <thread> //thread class
#include <iostream>

int count = 0; //Global variable initialized

void counting_downwards_from_20() {
std::cout << "Counting down from 20" << std::endl;
while(count >= 0){
std::cout << count << std::endl;
count--; //Downwards
}
}

void counting_upwards_to_20() {
std::cout << "Counting up to 20" << std::endl;
while(count < 20){
count++; //Upwards
std::cout << count << std::endl;
}
}

int main() {
//Begin threads count
std::thread t1(counting_upwards_to_20);
t1.join(); //Connects t1 thread for counting up to main program, if not- second thread will begin to execute
std::thread t2(counting_downwards_from_20); //initiate t2 thread
t2.join(); //connects t2 thread for counting down to main program
return 0;
}

