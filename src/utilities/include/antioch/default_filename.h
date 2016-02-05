
//-----------------------------------------------------------------------bl-
//--------------------------------------------------------------------------
//
// Antioch - A Gas Dynamics Thermochemistry Library
//
// Copyright (C) 2014 Paul T. Bauman, Benjamin S. Kirk, Sylvain Plessis,
//                    Roy H. Stonger
// Copyright (C) 2013 The PECOS Development Team
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the Version 2.1 GNU Lesser General
// Public License as published by the Free Software Foundation.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc. 51 Franklin Street, Fifth Floor,
// Boston, MA  02110-1301  USA
//
//-----------------------------------------------------------------------el-

#ifndef ANTIOCH_DEFAULT_FILENAME_H
#define ANTIOCH_DEFAULT_FILENAME_H

// Antioch headers
#include "antioch_config.h"

// C++ headers
#include <string>

namespace Antioch
{

  //! Default filenames in the source tree
  /*! These include the full path to default files in
   *  in the Antioch *source* tree. If you decide to use
   *  these in your application, you must *not* delete the
   *  source tree.
   */
class DefaultSourceFilename {
public:
  static const std::string& species_list() {
    static const std::string filename =
      std::string(ANTIOCH_DEFAULT_FILES_SOURCE_PATH) +
      std::string(ANTIOCH_DEFAULT_SPECIES_LIST);
    return filename;
  }

  static const std::string& chemical_mixture() {
    static const std::string filename =
      std::string(ANTIOCH_DEFAULT_FILES_SOURCE_PATH) +
      std::string(ANTIOCH_DEFAULT_CHEMICAL_MIXTURE);
    return filename;
  }

  static const std::string& vibrational_data() {
    static const std::string filename =
      std::string(ANTIOCH_DEFAULT_FILES_SOURCE_PATH) +
      std::string(ANTIOCH_DEFAULT_VIBRATIONAL_DATA);
    return filename;
  }

  static const std::string& electronic_data() {
    static const std::string filename =
      std::string(ANTIOCH_DEFAULT_FILES_SOURCE_PATH) +
      std::string(ANTIOCH_DEFAULT_ELECTRONIC_DATA);
    return filename;
  }

  static const std::string& thermo_data() {
    static const std::string filename =
      std::string(ANTIOCH_DEFAULT_FILES_SOURCE_PATH) +
      std::string(ANTIOCH_DEFAULT_THERMO_DATA);
    return filename;
  }

  static const std::string& sutherland_data() {
    static const std::string filename =
      std::string(ANTIOCH_DEFAULT_FILES_SOURCE_PATH) +
      std::string(ANTIOCH_DEFAULT_SUTHERLAND_DATA);
    return filename;
  }

  static const std::string& blottner_data() {
    static const std::string filename =
      std::string(ANTIOCH_DEFAULT_FILES_SOURCE_PATH) +
      std::string(ANTIOCH_DEFAULT_BLOTTNER_DATA);
    return filename;
  }

  static const std::string& transport_mixture() {
    static const std::string filename =
      std::string(ANTIOCH_DEFAULT_FILES_SOURCE_PATH) +
      std::string(ANTIOCH_DEFAULT_TRANSPORT_DATA);
    return filename;
  }
};

// Backward Compatibility
typedef DefaultSourceFilename DefaultFilename;


  //! Default filenames in the install tree
  /*! These include the full path to default files in
   *  in the Antioch *install* tree. These *must not*
   *  be used internally in Antioch; these are meant
   *  *only* for applications.
   */
class DefaultInstallFilename {
public:
  static const std::string& species_list() {
    static const std::string filename =
      std::string(ANTIOCH_DEFAULT_FILES_INSTALL_PATH) +
      std::string(ANTIOCH_DEFAULT_SPECIES_LIST);
    return filename;
  }

  static const std::string& chemical_mixture() {
    static const std::string filename =
      std::string(ANTIOCH_DEFAULT_FILES_INSTALL_PATH) +
      std::string(ANTIOCH_DEFAULT_CHEMICAL_MIXTURE);
    return filename;
  }

  static const std::string& vibrational_data() {
    static const std::string filename =
      std::string(ANTIOCH_DEFAULT_FILES_INSTALL_PATH) +
      std::string(ANTIOCH_DEFAULT_VIBRATIONAL_DATA);
    return filename;
  }

  static const std::string& electronic_data() {
    static const std::string filename =
      std::string(ANTIOCH_DEFAULT_FILES_INSTALL_PATH) +
      std::string(ANTIOCH_DEFAULT_ELECTRONIC_DATA);
    return filename;
  }

  static const std::string& thermo_data() {
    static const std::string filename =
      std::string(ANTIOCH_DEFAULT_FILES_INSTALL_PATH) +
      std::string(ANTIOCH_DEFAULT_THERMO_DATA);
    return filename;
  }

  static const std::string& sutherland_data() {
    static const std::string filename =
      std::string(ANTIOCH_DEFAULT_FILES_INSTALL_PATH) +
      std::string(ANTIOCH_DEFAULT_SUTHERLAND_DATA);
    return filename;
  }

  static const std::string& blottner_data() {
    static const std::string filename =
      std::string(ANTIOCH_DEFAULT_FILES_INSTALL_PATH) +
      std::string(ANTIOCH_DEFAULT_BLOTTNER_DATA);
    return filename;
  }

  static const std::string& transport_mixture() {
    static const std::string filename =
      std::string(ANTIOCH_DEFAULT_FILES_INSTALL_PATH) +
      std::string(ANTIOCH_DEFAULT_TRANSPORT_DATA);
    return filename;
  }
};

} // end namespace Antioch

#endif //ANTIOCH_DEFAULT_FILENAME_H
