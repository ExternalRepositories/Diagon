#ifndef TRANSLATOR_TRANSLATOR_FACTORY
#define TRANSLATOR_TRANSLATOR_FACTORY

#include <vector>
#include <memory>
#include "translator/Translator.h"

using TranslatorPtr = std::unique_ptr<Translator>;

// List of exported translator.
TranslatorPtr FrameTranslator();
TranslatorPtr MathTranslator();
TranslatorPtr PlanarGraphTranslator();
TranslatorPtr SequenceTranslator();
TranslatorPtr TableTranslator();
TranslatorPtr TreeTranslator();
TranslatorPtr GrammarTranslator();

std::vector<TranslatorPtr>& TranslatorList();
Translator* FindTranslator(const std::string& name);

#endif /* end of include guard: TRANSLATOR_TRANSLATOR_FACTORY */
