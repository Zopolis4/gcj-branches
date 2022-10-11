
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_PlainDocument__
#define __javax_swing_text_PlainDocument__

#pragma interface

#include <javax/swing/text/AbstractDocument.h>
extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace text
      {
          class AbstractDocument$AbstractElement;
          class AbstractDocument$Content;
          class AbstractDocument$DefaultDocumentEvent;
          class AttributeSet;
          class Element;
          class PlainDocument;
      }
    }
  }
}

class javax::swing::text::PlainDocument : public ::javax::swing::text::AbstractDocument
{

public:
  PlainDocument();
  PlainDocument(::javax::swing::text::AbstractDocument$Content *);
private:
  void reindex();
public: // actually protected
  virtual ::javax::swing::text::AbstractDocument$AbstractElement * createDefaultRoot();
  virtual void insertUpdate(::javax::swing::text::AbstractDocument$DefaultDocumentEvent *, ::javax::swing::text::AttributeSet *);
  virtual void removeUpdate(::javax::swing::text::AbstractDocument$DefaultDocumentEvent *);
public:
  virtual ::javax::swing::text::Element * getDefaultRootElement();
  virtual ::javax::swing::text::Element * getParagraphElement(jint);
  virtual void insertString(jint, ::java::lang::String *, ::javax::swing::text::AttributeSet *);
private:
  static const jlong serialVersionUID = 4758290289196893664LL;
public:
  static ::java::lang::String * lineLimitAttribute;
  static ::java::lang::String * tabSizeAttribute;
private:
  ::javax::swing::text::Element * __attribute__((aligned(__alignof__( ::javax::swing::text::AbstractDocument)))) rootElement;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_text_PlainDocument__
