#include "RichTextBlockRubyDecorator.h"

URichTextBlockRubyDecorator::URichTextBlockRubyDecorator() : URichTextBlockDecorator(FObjectInitializer::Get()) {
    this->DisplayBaseTextStartIndex = 0;
    this->OriginalLetterIndex = -1;
    this->ParseTagName = TEXT("ruby");
    this->AttributeLabelName = TEXT("label");
    this->AttributeStyleName = TEXT("style");
    this->RubyTextStyleNameFormat = TEXT("{0}.Ruby");
    this->bOverrideRubyStyle = false;
    this->CalcedFontSize = 66;
    this->RubyFontSize = 22;
}

void URichTextBlockRubyDecorator::UpdateOriginalTextIndex(const int32 InOriginalTextIndex) {
}


