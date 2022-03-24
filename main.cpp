#include <iostream>
#include <fcntl.h>

int main() {
    
    _setmode(_fileno(stdin), _O_U16TEXT);
    _setmode(_fileno(stdout), _O_U16TEXT);
    
    std::wstring sentence;
    
    std::wcout << L"Hãy nhập vào một chuỗi ký tự:" << std::endl;
    std::getline(std::wcin, sentence);
    
    std::wcout << L"Chuỗi ký tự mà bạn vừa mới nhập:" << std::endl;
    std::wcout << sentence << std::endl;
    
    return 0;
}