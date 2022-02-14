#include <string>
#include <iostream>

std::string READ(const std::string& input);
std::string EVAL(const std::string& ast);
std::string PRINT(const std::string& ast);
std::string rep(const std::string& input);

int main(int argc, char* argv[])
{
  std::string input;
  for (;;)
  {
    std::cout << "user> ";
    if (!std::getline(std::cin, input))
      break;
    std::cout << rep(input) << std::endl; 
  }
}

std::string READ(const std::string& input)
{
  return input;
}

std::string EVAL(const std::string& ast)
{
  return ast;
}


std::string PRINT(const std::string& ast)
{
  return ast;
}

std::string rep(const std::string& input)
{
  return PRINT(EVAL(READ(input)));
}