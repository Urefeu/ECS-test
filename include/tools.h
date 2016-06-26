#ifndef TOOLS_H
#define TOOLS_H


#include <iostream>
#include <sstream>
#include <string>

template <typename T>
    std::string to_string(T value)
    {
      std::ostringstream os ;
      os << value ;
      return os.str() ;
    }

void log(std::string const& str);


#endif // TOOLS_H
