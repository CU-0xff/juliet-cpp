/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE36_Absolute_Path_Traversal__char_connect_socket_ifstream_82.h
Label Definition File: CWE36_Absolute_Path_Traversal.label.xml
Template File: sources-sink-82.tmpl.h
*/
/*
 * @description
 * CWE: 36 Absolute Path Traversal
 * BadSource: connect_socket Read data using a connect socket (client side)
 * GoodSource: Full path and file name
 * Sinks: ifstream
 *    BadSink : Open the file named in data using ifstream::open()
 * Flow Variant: 82 Data flow: data passed in a parameter to a virtual method called via a pointer
 *
 * */

#include "std_testcase.h"

#ifndef _WIN32
#include <wchar.h>
#endif

namespace CWE36_Absolute_Path_Traversal__char_connect_socket_ifstream_82
{

class CWE36_Absolute_Path_Traversal__char_connect_socket_ifstream_82_base
{
public:
    /* pure virtual function */
    virtual void action(char * data) = 0;
};

#ifndef OMITBAD

class CWE36_Absolute_Path_Traversal__char_connect_socket_ifstream_82_bad : public CWE36_Absolute_Path_Traversal__char_connect_socket_ifstream_82_base
{
public:
    void action(char * data);
};

#endif /* OMITBAD */

#ifndef OMITGOOD

class CWE36_Absolute_Path_Traversal__char_connect_socket_ifstream_82_goodG2B : public CWE36_Absolute_Path_Traversal__char_connect_socket_ifstream_82_base
{
public:
    void action(char * data);
};

#endif /* OMITGOOD */

}
