// Copyright (c) 2022 IonkinaM
#include "Program.h"
Program* Program::_this;
Program::Program()
{
  _this = this;
  json js = json::array();
}
Program* Program::instance()
{
  return _this;
}
void Program::SaveData()
{
  std::ofstream o(file_name);
  o << shas.dump(4) << std::endl;
}

