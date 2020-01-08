
// Generated from /home/george/diplom/grammar_experiments/antlr4_repo_key_grammar/RepoKey.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "RepoKeyParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by RepoKeyParser.
 */
class  RepoKeyVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by RepoKeyParser.
   */
    virtual antlrcpp::Any visitKey(RepoKeyParser::KeyContext *context) = 0;

    virtual antlrcpp::Any visitIndex(RepoKeyParser::IndexContext *context) = 0;

    virtual antlrcpp::Any visitList_of_parent_indexes(RepoKeyParser::List_of_parent_indexesContext *context) = 0;

    virtual antlrcpp::Any visitParent_index(RepoKeyParser::Parent_indexContext *context) = 0;

    virtual antlrcpp::Any visitMagic_var(RepoKeyParser::Magic_varContext *context) = 0;

    virtual antlrcpp::Any visitMul_exp(RepoKeyParser::Mul_expContext *context) = 0;

    virtual antlrcpp::Any visitSum_exp(RepoKeyParser::Sum_expContext *context) = 0;

    virtual antlrcpp::Any visitRange(RepoKeyParser::RangeContext *context) = 0;

    virtual antlrcpp::Any visitList(RepoKeyParser::ListContext *context) = 0;

    virtual antlrcpp::Any visitReg_exp(RepoKeyParser::Reg_expContext *context) = 0;


};

