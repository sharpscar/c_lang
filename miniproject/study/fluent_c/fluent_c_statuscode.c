#include <stdio.h>

typedef enum
{
    MINOR_ERROR,
    MAJOR_ERROR,
    OK
}ErrorCode;

int main()
{

    ErrorCode status = func();
    if(status == MAJOR_ERROR)
    {
        //abort program
    }
    else if(status == MINOR_ERROR)
    {
        // handle error

    }
    else if(status ==OK)
    {
        // continue normal execution
    }
    return 0;
}

ErrorCode func()
{
    if(minorErrorOccurs())
    {
        return MINOR_ERROR;
    }
    else if(majorErrorOccurs())
    {
        return MAJOR_ERROR;
    }else{
        return OK;
    }
}