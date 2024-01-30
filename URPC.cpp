#include "URPC_HEADER.hpp"

// > Simple calculator program made by khvhky+ [2022]
// > ou RE-EDITED / ou [2024/28/1]
//
//
// ********* Calculator *********
// 
// - Options:
// [1] >  Plus
// [2]  >  Minus
// [3]   >  Division
// [4]    >  Multiplication 
// 
//  - Exit [0]
// 
// 
// - User Input:

double devolvSum(const double& userInputOne, const double& userInputTwo);
double devolvRes(const double& userInputOne,const double& userInputTwo);
double devolvDiv(const double& userInput_divisor,const double& userInput_dividend);
double devolvMult(const double& userInput_MultOne, const double& userInput_MultTwo);

int main( void ){

    const char xpr {'*'};
    int userChoise {};
    double UserNmbONe {}, UserNmbTwo {};

    for(auto i {1}; i <= 10; i++){
        std::cout<<xpr;
        if(i == 9){
            break;
        }
    } std::cout<<" Calculator ";
    for(auto i {1}; i <= 10; i++){
        std::cout<<xpr;
        if(i == 9){
            break;
        }
    } std::cout<<std::endl;

    std::cout<<"\n- Options: ";
    std::cout<<"\n[1] >  Plus ";
    std::cout<<"\n[2]  >  Minus";
    std::cout<<"\n[3]   >  Division";
    std::cout<<"\n[4]    >  Multiplication ";
    std::cout<<"\n\n- Exit [0]\n\n";
    std::cout<<"- User Input: ";
    std::cin>>userChoise;
    
    // Pointer Function
    double (*res)(const double&, const double&) = {&devolvSum};
    double (*resTwo)(const double&, const double&) = {&devolvRes};
    double (*resTree)(const double&, const double&) = {&devolvDiv};
    double (*resFor)(const double&, const double&) = {&devolvMult};

    switch (userChoise){

        case 0:
           std::cout << "GOODBYEE!!" << std::endl;

           return 0;

        break;

        case 1:
            
            std::system("clear");
            

            std::cout << "You choose [Plus]!!\n";
            std::cout << "Enter up to 2 digits for addition\n";
            std::cout << "First One = ";
            std::cin >> UserNmbONe;
            std::cout << "Another one = ";
            std::cin >> UserNmbTwo;

            std::cout << "Result = " << res(UserNmbONe, UserNmbTwo) << std::endl;
        break;

        case 2:

            std::system("clear");

            std::cout << "You choose [Minus]!!\n";
            std::cout << "Enter up to 2 digits for subtraction\n";
            std::cout << "First One = ";
            std::cin >> UserNmbONe;
            std::cout << "Another One = ";
            std::cin >> UserNmbTwo;

            std::cout<< "Result = " << resTwo(UserNmbONe, UserNmbTwo) << std::endl;

        break;

        case 3:

            std::system("clear");

            std::cout << "You choose [Division]!!\n";
            std::cout << "Enter up to 2 digits for division\n";
            std::cout << "First One = ";
            std::cin >> UserNmbONe;
            std::cout << "Another One = ";
            std::cin >> UserNmbTwo;

            std::cout<< "Result = " << resTree(UserNmbONe, UserNmbTwo) << std::endl;

        break;

        case 4:

           std::system("clear");

           std::cout << "You choose [Multiplication]!!\n";
           std::cout << "Enter up to 2 digits for multiplication\n";
           std::cout << "First One = ";
           std::cin >> UserNmbONe;
           std::cout << "Another One = ";
           std::cin>>UserNmbTwo;

           std::cout<< "Result = " << resFor(UserNmbONe, UserNmbTwo) << std::endl;

        break;
    }
    

}

double devolvSum(const double& userInputOne_Addition, const double& userInputTwo_Addition){

    return userInputOne_Addition + userInputTwo_Addition;
}

double devolvRes(const double& userInputOne_Minus,const double& userInputTwo_Minus){
    
    if( userInputOne_Minus && userInputTwo_Minus > 0){
        if(userInputOne_Minus > userInputTwo_Minus ){
            return userInputOne_Minus - userInputTwo_Minus;
        }else{
            return userInputTwo_Minus - userInputOne_Minus;
        }
    }else{
        return userInputOne_Minus + userInputTwo_Minus;
    }
}

double devolvMult(const double& userInput_MultOne, const double& userInput_MultTwo){

    return userInput_MultOne * userInput_MultTwo;
}

double devolvDiv(const double& userInput_divisor,const double& userInput_dividend){

    // userInputOne [Divisor]
    // userInputTwo [Dividend]

    if( userInput_divisor == 0){
        std::cerr<<"Divisor must not be 0" << "\n";
        return 1;
    }else{

        return userInput_divisor / userInput_dividend;
    }
}                                                       