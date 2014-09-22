/*
 * Clang.hpp
 *
 * Copyright (C) 2009-12 by RStudio, Inc.
 *
 * Unless you have received this program directly from RStudio pursuant
 * to the terms of a commercial license agreement with RStudio, then
 * this program is licensed to you under the terms of version 3 of the
 * GNU Affero General Public License. This program is distributed WITHOUT
 * ANY EXPRESS OR IMPLIED WARRANTY, INCLUDING THOSE OF NON-INFRINGEMENT,
 * MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE. Please refer to the
 * AGPL (http://www.gnu.org/licenses/agpl-3.0.txt) for more details.
 *
 */

#ifndef SESSION_MODULES_CLANG_CLANG_HPP
#define SESSION_MODULES_CLANG_CLANG_HPP

#include "libclang/libclang.hpp"

namespace session {
namespace modules {      
namespace clang {

// check for availablity of clang w/ diagnstics
bool isClangAvailable(std::string* pDiagnostics);

// shared instance of clang
bool loadClang();
libclang& clang();

} // namespace clang
} // namepace handlers
} // namesapce session

#endif // SESSION_MODULES_CLANG_CLANG_HPP
