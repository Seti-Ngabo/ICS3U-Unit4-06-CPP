// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Seti Ngabo
// Created on: Sept 2021
// This program uses for loop

#include <iostream>

int main() {
    // this function uses for loop

    // process
        for (int first_counter = 0; first_counter < 256; first_counter ++) {
            for (int second_counter = 0;
            second_counter < 256; second_counter ++) {
                for (int third_counter = 0;
                third_counter < 256; third_counter ++) {
                    std::cout <<"RGB(" << first_counter << "," <<second_counter
                                << "," << third_counter << ")" << std::endl;
            }
            }
        }
    }
