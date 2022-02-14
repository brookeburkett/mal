#include <string>
#include <iostream>

#include "linenoise.hpp"

std::string READ(const std::string& input);
std::string EVAL(const std::string& ast);
std::string PRINT(const std::string& ast);
std::string rep(const std::string& input);


int main(int argc, char* argv[])
{
  const auto history_path = "~/mal_history.txt";
  linenoise::LoadHistory(history_path);
  std::string input;
  for (;;)
  {
    auto quit = linenoise::Readline("user> ", input);
    if (quit)
      break;
    std::cout << rep(input) << std::endl; 
    linenoise::AddHistory(input.c_str());
  }

  linenoise::SaveHistory(history_path);
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