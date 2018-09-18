/**************************************************************************************
Copyright 2015 Applied Research Associates, Inc.
Licensed under the Apache License, Version 2.0 (the "License"); you may not use
this file except in compliance with the License. You may obtain a copy of the License
at:
http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software distributed under
the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
CONDITIONS OF ANY KIND, either express or implied. See the License for the
specific language governing permissions and limitations under the License.
**************************************************************************************/

//----------------------------------------------------------------------------
/// @file PrefixDescriptor.h
/// @author Chris Volpe
///
/// This class defines a representation of a prefix that can be applied to a
/// unit symbol
//----------------------------------------------------------------------------
#pragma once
#include <biogears/exports.h>
#include <string>

class CPrefixDescriptor {
public:
  CPrefixDescriptor(std::string name, std::string sym, double scaleFac);
  CPrefixDescriptor(std::string name, char sym, double scaleFac);

  const std::string& GetName() const;
  char GetSymbol() const;
  double  GetScaleFactor() const;

private:
  std::string m_strName;
  char m_cSym;
  double m_dScaleFac;
};