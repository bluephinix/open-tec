#pragma ident "$Id: ComputePI.cpp 3140 2012-06-18 15:03:02Z susancummins $"

/**
 * @file ComputePI.cpp
 * This class eases computing PI combination for GNSS data structures.
 */

//============================================================================
//
//  This file is part of GPSTk, the GPS Toolkit.
//
//  The GPSTk is free software; you can redistribute it and/or modify
//  it under the terms of the GNU Lesser General Public License as published
//  by the Free Software Foundation; either version 2.1 of the License, or
//  any later version.
//
//  The GPSTk is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU Lesser General Public License for more details.
//
//  You should have received a copy of the GNU Lesser General Public
//  License along with GPSTk; if not, write to the Free Software Foundation,
//  Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110, USA
//
//  Dagoberto Salazar - gAGE ( http://www.gage.es ). 2007, 2008, 2011
//
//============================================================================


#include "ComputePI.hpp"


namespace gpstk
{

      // Returns a string identifying this object.
   std::string ComputePI::getClassName() const
   { return "ComputePI"; }


      // Default constructor
   ComputePI::ComputePI()
   {
      type1 = TypeID::P1;
      type2 = TypeID::P2;
      resultType = TypeID::PI;
   }


} // End of namespace gpstk
