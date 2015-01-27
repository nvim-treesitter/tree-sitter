#ifndef COMPILER_BUILD_TABLES_ITEM_SET_CLOSURE_H_
#define COMPILER_BUILD_TABLES_ITEM_SET_CLOSURE_H_

#include "compiler/build_tables/parse_item.h"
#include "compiler/rules/symbol.h"

namespace tree_sitter {

class SyntaxGrammar;

namespace build_tables {

void item_set_closure(ParseItemSet *, const SyntaxGrammar &);

}  // namespace build_tables
}  // namespace tree_sitter

#endif  // COMPILER_BUILD_TABLES_ITEM_SET_CLOSURE_H_
