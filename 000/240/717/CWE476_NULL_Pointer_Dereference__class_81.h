/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE476_NULL_Pointer_Dereference__class_81.h
Label Definition File: CWE476_NULL_Pointer_Dereference__class.label.xml
Template File: sources-sinks-81.tmpl.h
*/
/*
 * @description
 * CWE: 476 NULL Pointer Dereference
 * BadSource:  Set data to NULL
 * GoodSource: Initialize data
 * Sinks:
 *    GoodSink: Check data for NULL before attempting to print data->a
 *    BadSink : Print data->a
 * Flow Variant: 81 Data flow: data passed in a parameter to an virtual method called via a reference
 *
 * */

#include "std_testcase.h"

namespace CWE476_NULL_Pointer_Dereference__class_81
{

class CWE476_NULL_Pointer_Dereference__class_81_base
{
public:
    /* pure virtual function */
    virtual void action(TwoIntsClass * data) const = 0;
};

#ifndef OMITBAD

class CWE476_NULL_Pointer_Dereference__class_81_bad : public CWE476_NULL_Pointer_Dereference__class_81_base
{
public:
    void action(TwoIntsClass * data) const;
};

#endif /* OMITBAD */

#ifndef OMITGOOD

class CWE476_NULL_Pointer_Dereference__class_81_goodG2B : public CWE476_NULL_Pointer_Dereference__class_81_base
{
public:
    void action(TwoIntsClass * data) const;
};

class CWE476_NULL_Pointer_Dereference__class_81_goodB2G : public CWE476_NULL_Pointer_Dereference__class_81_base
{
public:
    void action(TwoIntsClass * data) const;
};

#endif /* OMITGOOD */

}
