#include <iostream>
#include <string>

double add(double& x, double& y){
    return x + y;
}

double subtract(double& x, double& y){
    return x - y;
}

double multiply(double& x, double& y){
    return x * y;
}

double divide(double& x, double& y){
    return x / y;
}


int main(int argc, char* argv[]){

    try {
        if(argc > 2){
        double firstNum = std::stod(argv[1]);
        double secondNum = std::stod(argv[3]);

        std::string options = argv[2];

            switch(options[0]){
                case '+':
                    std::cout<<"The answer is => "<<add(firstNum, secondNum);
                    break;
                case '-':
                    std::cout<<"The answer is => "<<subtract(firstNum, secondNum);
                    break;
                case '*':
                    std::cout<<"The answer is => "<<multiply(firstNum, secondNum);
                    break;
                case '/':
                    std::cout<<"The answer is => "<<divide(firstNum, secondNum);
                    break;
                default:
                    break;
            }
        }

        if(argc > 1){
            if(argv[1] == std::string("--help")){
                std::cout<<"Guide: [first number] [operator] [second number]"<<"\n";
                std::cout<<"Then hit enter."<<"\n";
                std::cout<<"Reminder: Always use space when entering each entry."<<"\n";
            }
        }

        if(argv[2] == NULL){
            std::cerr << "Please type --help for more information"<<"\n";
        }
    }catch(const std::exception& e){
        std::cerr << "Please type --help for more information"<<"\n";
    }

    return 0;
}