/// @file
/// @brief

#pragma once

#include <iosfwd>
#include <string_view>


namespace alexen {
namespace tools {


void greeting();
void greeting( std::string_view name, std::string_view prefix = {} );
void greeting( std::ostream& os, std::string_view name = {}, std::string_view prefix = {} );


} // namespace tools
} // namespace alexen
