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

#pragma once
#include <biogears/cdm/properties/SEScalar.h>
#include <biogears/schema/cdm/Properties.hxx>

class BIOGEARS_API ElectricPotentialUnit : public CCompoundUnit {
public:
  ElectricPotentialUnit(const std::string& u)
    : CCompoundUnit(u)
  {
  }
  virtual ~ElectricPotentialUnit() = default;

  static bool IsValidUnit(const std::string& unit);
  static const ElectricPotentialUnit& GetCompoundUnit(const std::string& unit);

  static const ElectricPotentialUnit V;
  static const ElectricPotentialUnit mV;
};

class BIOGEARS_API SEScalarElectricPotential : public SEScalarQuantity<ElectricPotentialUnit> {
public:
  SEScalarElectricPotential() = default;
  virtual ~SEScalarElectricPotential() = default;

  CDM::ScalarElectricPotentialData* Unload() const override;
};
