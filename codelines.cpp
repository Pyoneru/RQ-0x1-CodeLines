#include <iostream>
#include <string>
#include <fstream>

struct CodeLines{
    int codes = 0;
    int comments = 0;
    int empty = 0;
} code_lines;

bool is_comment_character(char c);
bool is_white_charcater(char c);

int main(int argc, char *argv[]){
    if(argc < 2){
        std::cerr << "You need give path to GDScript in argument." << std::endl;
        exit(EXIT_FAILURE);
    }

    std::string file_name = argv[1];

    if(file_name.find(".gd") == std::string::npos){
        std::cerr << "File must be ended with '.gd' (GDScripts)" << std::endl;
        exit(EXIT_FAILURE);
    }

    std::ifstream file(file_name);

    if(!file.is_open()){
        std::cerr << "Could not open the file - " << file_name << std::endl;
        exit(EXIT_FAILURE);
    }

    std::string line;
    while(std::getline(file, line)){
        // if line is empty, increase empty meter
        if(line.empty()) code_lines.empty++;
        else{
            for(int i = 0; i < line.length(); i++){
                // if first no white character is '#', increase comments meter
                if(is_comment_character(line[i])){
                    code_lines.comments++;
                    break;
                }

                // if first no white character is not '#', increase codes lines meter
                if(!is_white_charcater(line[i])){
                    code_lines.codes++;
                    break;
                }

                // if line contains only white charcaters, increase empty meter
                if(i == line.length() - 1 && is_white_charcater(line[i])){
                    code_lines.empty++;
                } 
            }
        }
    }

    file.close();

    std::cout << "File: " << file_name << std::endl;
    std::cout << "Code lines: " << code_lines.codes << std::endl;
    std::cout << "Comments: " << code_lines.comments << std::endl;
    std::cout << "Empty lines: " << code_lines.empty << std::endl;

    return 0;
}

bool is_comment_character(char c){
    return c == '#';
}

bool is_white_charcater(char c){
    return c == ' ' || c == '\t' || c == '\n' || c == std::string::npos; 
}