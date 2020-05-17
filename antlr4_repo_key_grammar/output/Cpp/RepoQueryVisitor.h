
// Generated from /media/george/HOME/home/george/diplom/grammar_experiments/antlr4_repo_key_grammar/grammars/RepoQuery.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "RepoQueryParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by RepoQueryParser.
 */
class  RepoQueryVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by RepoQueryParser.
   */
    virtual antlrcpp::Any visitQuery(RepoQueryParser::QueryContext *context) = 0;

    virtual antlrcpp::Any visitKey(RepoQueryParser::KeyContext *context) = 0;

    virtual antlrcpp::Any visitAtom(RepoQueryParser::AtomContext *context) = 0;

    virtual antlrcpp::Any visitIndex(RepoQueryParser::IndexContext *context) = 0;

    virtual antlrcpp::Any visitList_of_parent_indexes(RepoQueryParser::List_of_parent_indexesContext *context) = 0;

    virtual antlrcpp::Any visitMagic_var(RepoQueryParser::Magic_varContext *context) = 0;

    virtual antlrcpp::Any visitExpr(RepoQueryParser::ExprContext *context) = 0;

    virtual antlrcpp::Any visitRange(RepoQueryParser::RangeContext *context) = 0;

    virtual antlrcpp::Any visitList(RepoQueryParser::ListContext *context) = 0;

    virtual antlrcpp::Any visitReg_exp(RepoQueryParser::Reg_expContext *context) = 0;

    virtual antlrcpp::Any visitFilter_token(RepoQueryParser::Filter_tokenContext *context) = 0;

    virtual antlrcpp::Any visitFilter(RepoQueryParser::FilterContext *context) = 0;


};

