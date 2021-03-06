/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE124_Buffer_Underwrite__CWE839_negative_84.h
Label Definition File: CWE124_Buffer_Underwrite__CWE839.label.xml
Template File: sources-sinks-84.tmpl.h
*/
/*
 * @description
 * CWE: 124 Buffer Underwrite
 * BadSource: negative Negative index value
 * GoodSource: Non-negative but less than 10
 * Sinks:
 *    GoodSink: Ensure the array index is valid
 *    BadSink : Improperly check the array index by not checking the lower bound
 * Flow Variant: 84 Data flow: data passed to class constructor and destructor by declaring the class object on the heap and deleting it after use
 *
 * */

#include "std_testcase.h"

namespace CWE124_Buffer_Underwrite__CWE839_negative_84
{

#ifndef OMITBAD

class CWE124_Buffer_Underwrite__CWE839_negative_84_bad
{
public:
    CWE124_Buffer_Underwrite__CWE839_negative_84_bad(int dataCopy);
    ~CWE124_Buffer_Underwrite__CWE839_negative_84_bad();

private:
    int data;
};

#endif /* OMITBAD */

#ifndef OMITGOOD

class CWE124_Buffer_Underwrite__CWE839_negative_84_goodG2B
{
public:
    CWE124_Buffer_Underwrite__CWE839_negative_84_goodG2B(int dataCopy);
    ~CWE124_Buffer_Underwrite__CWE839_negative_84_goodG2B();

private:
    int data;
};

class CWE124_Buffer_Underwrite__CWE839_negative_84_goodB2G
{
public:
    CWE124_Buffer_Underwrite__CWE839_negative_84_goodB2G(int dataCopy);
    ~CWE124_Buffer_Underwrite__CWE839_negative_84_goodB2G();

private:
    int data;
};

#endif /* OMITGOOD */

}
