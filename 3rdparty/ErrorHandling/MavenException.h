#ifndef MAVENEXCEPTION_H
#define MAVENEXCEPTION_H


#include "errorcodes.h"

#include <exception>
#include <string>

//TODO: move this out of 3rd party folder
class MavenException: public std::exception
{
    public:

        MavenException(const ErrorMsg::Errors&, const std::string& details = "");

        virtual ~MavenException() throw()
        {}

        virtual const char* what() const  throw()
        {
                return message.c_str();
        }

    private:
        std::string message;
};


#endif
