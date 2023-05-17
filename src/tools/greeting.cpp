/// @file
/// @brief

#include "greeting.h"

#include <iostream>


namespace alexen {
namespace tools {


void greeting()
{
     greeting( std::cout );
}


void greeting( std::string_view name, std::string_view prefix )
{
     greeting( std::cout, name, prefix );
}


void greeting( std::ostream& os, std::string_view name, std::string_view prefix )
{
     static constexpr std::string_view anonymous = "Anonymous";

     if( not prefix.empty() )
     {
          os << prefix << ": ";
     }
     os << "Greeting you, dear " << (name.empty() ? anonymous : name) << "!\n";
}


} // namespace tools
} // namespace alexen
