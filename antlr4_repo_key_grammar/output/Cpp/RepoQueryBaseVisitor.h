
// Generated from /media/george/HOME/home/george/diplom/grammar_experiments/antlr4_repo_key_grammar/grammars/RepoQuery.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "RepoQueryVisitor.h"


/**
 * This class provides an empty implementation of RepoQueryVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  RepoQueryBaseVisitor : public RepoQueryVisitor {
public:

  virtual antlrcpp::Any visitQuery(RepoQueryParser::QueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKey(RepoQueryParser::KeyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAtom(RepoQueryParser::AtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex(RepoQueryParser::IndexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitList_of_parent_indexes(RepoQueryParser::List_of_parent_indexesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMagic_var(RepoQueryParser::Magic_varContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr(RepoQueryParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRange(RepoQueryParser::RangeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitList(RepoQueryParser::ListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReg_exp(RepoQueryParser::Reg_expContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFilter_token(RepoQueryParser::Filter_tokenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFilter(RepoQueryParser::FilterContext *ctx) override {
    return visitChildren(ctx);
  }


};

