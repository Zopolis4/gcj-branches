
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_print_attribute_standard_PrinterMessageFromOperator__
#define __javax_print_attribute_standard_PrinterMessageFromOperator__

#pragma interface

#include <javax/print/attribute/TextSyntax.h>
extern "Java"
{
  namespace javax
  {
    namespace print
    {
      namespace attribute
      {
        namespace standard
        {
            class PrinterMessageFromOperator;
        }
      }
    }
  }
}

class javax::print::attribute::standard::PrinterMessageFromOperator : public ::javax::print::attribute::TextSyntax
{

public:
  PrinterMessageFromOperator(::java::lang::String *, ::java::util::Locale *);
  jboolean equals(::java::lang::Object *);
  ::java::lang::Class * getCategory();
  ::java::lang::String * getName();
private:
  static const jlong serialVersionUID = -4486871203218629318LL;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_print_attribute_standard_PrinterMessageFromOperator__
