
// Generated from /home/george/diplom/grammar_exp/key_grammar/antlr4/RepoKey.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "RepoKeyParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by RepoKeyParser.
 */
class  RepoKeyListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterKey(RepoKeyParser::KeyContext *ctx) = 0;
  virtual void exitKey(RepoKeyParser::KeyContext *ctx) = 0;

  virtual void enterIndex(RepoKeyParser::IndexContext *ctx) = 0;
  virtual void exitIndex(RepoKeyParser::IndexContext *ctx) = 0;

  virtual void enterParent_index(RepoKeyParser::Parent_indexContext *ctx) = 0;
  virtual void exitParent_index(RepoKeyParser::Parent_indexContext *ctx) = 0;

  virtual void enterMagic_var(RepoKeyParser::Magic_varContext *ctx) = 0;
  virtual void exitMagic_var(RepoKeyParser::Magic_varContext *ctx) = 0;

  virtual void enterMul_exp(RepoKeyParser::Mul_expContext *ctx) = 0;
  virtual void exitMul_exp(RepoKeyParser::Mul_expContext *ctx) = 0;

  virtual void enterSum_exp(RepoKeyParser::Sum_expContext *ctx) = 0;
  virtual void exitSum_exp(RepoKeyParser::Sum_expContext *ctx) = 0;

  virtual void enterRange(RepoKeyParser::RangeContext *ctx) = 0;
  virtual void exitRange(RepoKeyParser::RangeContext *ctx) = 0;

  virtual void enterReg_exp(RepoKeyParser::Reg_expContext *ctx) = 0;
  virtual void exitReg_exp(RepoKeyParser::Reg_expContext *ctx) = 0;


};

