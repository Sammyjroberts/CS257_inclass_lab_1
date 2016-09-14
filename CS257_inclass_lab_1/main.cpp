//
//  main.cpp
//  CS257_inclass_lab_1
//
//  Created by Sammy Roberts on 9/13/16.
//  Copyright © 2016 Sammy Roberts. All rights reserved.
//

#include <iostream>
#include <string>

const int DOMAIN[] = {-10,-9,-8,-7,-6,-5,-4,-3,-2,-1,0,1,2,3,4,5,6,7,8,9,10};
std::string boolToStr(bool b) {
    if(b) {
        return "true";
    }
    return "false";
}
int main(int argc, const char * argv[]) {
    
    std::cout << "A257_IN_CLASS_LAB_1" << std::endl;
    std::cout << "The purpose of this lab is to test 6 statements using a defined domain. you will see an output of a statement followed by the truth value." <<std::endl;
    
    //statement one

    bool isStatementOneTrue = true;
    for(int x : DOMAIN) {
        for (int y : DOMAIN) {
            if(x%2 == 0 && y%2==0) {
                if(!((x+y)%2==0)) {
                    isStatementOneTrue = false;
                }
            }
        }
    }
    std::cout << "∀ x ∀ y such that x is even and y is even, x + y is even: "
    << boolToStr(isStatementOneTrue) << std::endl;
    
    //statement 2
    bool isStatementTwoTrue = true;
    for(int x : DOMAIN) {
        for (int y : DOMAIN) {
            if(x%2 != 0 && y%2!=0) {
                if(!((x+y)%2==0)) {
                    isStatementTwoTrue = false;
                }
            }
        }
    }
    std::cout << "∀ x ∀ y such that x is odd and y is odd, x + y is even: " << boolToStr(isStatementTwoTrue) << std::endl;

    //statement 3
    bool isStatementThreeTrue = true;
    for(int x : DOMAIN) {
        bool doesThisXHaveAY = false;
        for (int y : DOMAIN) {
            if(x < y && x > y) {
                doesThisXHaveAY = true;
            }
        }
        if(doesThisXHaveAY == false) {
            isStatementThreeTrue = false;
        }
    }
    std::cout << "∀ x ∃ y, x < y and x > y: " << boolToStr(isStatementThreeTrue) << std::endl;
    
    //statement 4
    bool isStatementFourTrue = true;
    for(int x : DOMAIN) {
        bool doesThisXHaveAY = false;
        for (int y : DOMAIN) {
            if(x != 0 && y!= 0) {
                if(x*y==0) {
                    doesThisXHaveAY = true;
                }
            }
        }
        if(doesThisXHaveAY == false) {
            isStatementFourTrue = false;
        }
    }
    std::cout << "∀ x ∃ y, x ∗ y = 0, but x != 0 and y != 0: " << boolToStr(isStatementFourTrue) << std::endl;
    
    //statement 5
    bool isStatementFiveTrue = true;
    for(int x : DOMAIN) {
        bool doesThisXHaveAY = false;
        for (int y : DOMAIN) {
            if( (x-y) != (y-x)) {
                doesThisXHaveAY = true;
            }
        }
        if(doesThisXHaveAY == false) {
            isStatementFiveTrue = false;
        }
    }
    std::cout << "∀ x ∃ y, x − y != y − x: " << boolToStr(isStatementFiveTrue) << std::endl;
    
    //statement 6
    bool isStatementSixTrue = true;
    for(int x : DOMAIN) {

    if(x%2 != 0) {
        if(((x*x)%2)!=0)
            isStatementSixTrue = false;
        }

    }
    std::cout << "∀ x such that x is odd, x^2 is even: " <<boolToStr(isStatementSixTrue) << std::endl;
    return 0;
}
