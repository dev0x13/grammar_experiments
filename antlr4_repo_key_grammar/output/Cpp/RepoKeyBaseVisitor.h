
// Generated from /home/george/diplom/grammar_experiments/antlr4_repo_key_grammar/RepoKey.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "RepoKeyVisitor.h"


/**
 * This class provides an empty implementation of RepoKeyVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  RepoKeyBaseVisitor : public RepoKeyVisitor {
public:

  virtual antlrcpp::Any visitKey(RepoKeyParser::KeyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex(RepoKeyParser::IndexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitList_of_parent_indexes(RepoKeyParser::List_of_parent_indexesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParent_index(RepoKeyParser::Parent_indexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMagic_var(RepoKeyParser::Magic_varContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMul_exp(RepoKeyParser::Mul_expContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSum_exp(RepoKeyParser::Sum_expContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRange(RepoKeyParser::RangeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitList(RepoKeyParser::ListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReg_exp(RepoKeyParser::Reg_expContext *ctx) override {
    return visitChildren(ctx);
  }


};

